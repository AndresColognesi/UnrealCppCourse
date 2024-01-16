// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"

// Enhanced Input action:
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

// Screen data:
//#include "ScreenConstants.h"

// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
	// Add Input Mapping Context:
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(TheRunawayContext, 0);
		}
	}

	// save bounds for pawn
	FVector Origin;
	FVector BoxExtent;
	GetActorBounds(true, Origin, BoxExtent);
	HalfCollisionWidth = BoxExtent.Y;
	HalfCollisionHeight = BoxExtent.Z;
}

void AMyPawn::Move(const FInputActionValue& Value)
{
	// Store input value:
	const FVector2D MovementVector = Value.Get<FVector2D>();

	// Move horizontally and vertically:
	UE_LOG(LogTemp, Warning, TEXT("Entrada (X, Y) é: %s"), *MovementVector.ToString());
	UE_LOG(LogTemp, Warning, TEXT("Vector up: %s"), *GetActorUpVector().ToString());
	UE_LOG(LogTemp, Warning, TEXT("Vector right: %s"), *GetActorRightVector().ToString());
	AddMovementInput(GetActorRightVector(), MovementVector.X);
	AddMovementInput(GetActorUpVector(), MovementVector.Y);
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// move pawn based on movement input
	FVector PendingMovementInput = ConsumeMovementInputVector();
	if (PendingMovementInput.Y != 0 || PendingMovementInput.Z != 0)
	{
		FVector NewLocation = GetActorLocation();
		NewLocation.Y += PendingMovementInput.Y *
			MoveAmountPerSecond * DeltaTime;
		NewLocation.Z += PendingMovementInput.Z *
			MoveAmountPerSecond * DeltaTime;
		SetActorLocation(NewLocation);
	}

	// reset to start state if above top of screen
	/*if (GetActorLocation().Z >
		ScreenConstants::Top + HalfCollisionHeight)
	{
		ResetToStartState();
	}*/
}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Cast to enhanced input component:
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MovementAction, ETriggerEvent::Triggered, this, &AMyPawn::Move);
	}
}

