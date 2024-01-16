// Copyright A.T. Chamillard. All Rights Reserved.


#include "HunterPawn.h"

#include "ScreenConstants.h"
#include "Kismet/GameplayStatics.h"
#include "GameHUD.h"

/**
 * Sets default values
*/
AHunterPawn::AHunterPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

/**
 * Called when the game starts or when spawned
*/
void AHunterPawn::BeginPlay()
{
	Super::BeginPlay();

	// save bounds for pawn
	FVector Origin;
	FVector BoxExtent;
	GetActorBounds(true, Origin, BoxExtent);
	HalfCollisionWidth = BoxExtent.Y;
	HalfCollisionHeight = BoxExtent.Z;

	// save static mesh component for efficiency
	TArray<UStaticMeshComponent*> StaticMeshComponents;
	GetComponents(StaticMeshComponents);

	// make sure we found the static mesh
	if (StaticMeshComponents.Num() > 0)
	{
		// the mesh we want is at location 0 because there's only 1 mesh
		StaticMeshComponent = StaticMeshComponents[0];
	}
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void AHunterPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// move pawn based on movement inputs
	FVector PendingMovementInput = ConsumeMovementInputVector();
	if (PendingMovementInput.Y != 0 ||
		PendingMovementInput.Z != 0)
	{
		FVector NewLocation = GetActorLocation();
		NewLocation.Y += PendingMovementInput.Y *
			MoveAmountPerSecond * DeltaTime;
		NewLocation.Z += PendingMovementInput.Z *
			MoveAmountPerSecond * DeltaTime;
		SetActorLocation(NewLocation);
	}

	// move to middle and reduce health if off screen
	if (IsOffScreen())
	{
		SetActorLocation(FVector::ZeroVector);
		Health -= 25;
		// get reference to HUD and add runaway:
		AGameHUD* Hud = UGameplayStatics::GetPlayerController(this, 0)->GetHUD<AGameHUD>();
		if (Hud != nullptr)
		{
			Hud->AddRunaway();
		}
		if (Health <= 0)
		{
			Destroy();
		}
	}
}

/**
 * Moves the pawn horizontally
 * @param moveScale scale factor for movement
*/
void AHunterPawn::MoveHorizontally(float moveScale)
{
	moveScale = FMath::Clamp(moveScale, -1.0f, 1.0f);
	AddMovementInput(GetActorRightVector(),
		moveScale);
}

/**
 * Moves the pawn vertically
 * @param moveScale scale factor for movement
*/
void AHunterPawn::MoveVertically(float moveScale)
{
	moveScale = FMath::Clamp(moveScale, -1.0f, 1.0f);
	AddMovementInput(GetActorUpVector(),
		moveScale);
}

/**
 * Tells whether or not the pawn is off the screen
 * @return true if the pawn is off screen, false otherwise
*/
bool AHunterPawn::IsOffScreen()
{
	FVector Location = GetActorLocation();
	return Location.Y < ScreenConstants::Left - HalfCollisionWidth ||
		Location.Y > ScreenConstants::Right + HalfCollisionWidth ||
		Location.Z > ScreenConstants::Top + HalfCollisionHeight ||
		Location.Z < ScreenConstants::Bottom - HalfCollisionHeight;
}