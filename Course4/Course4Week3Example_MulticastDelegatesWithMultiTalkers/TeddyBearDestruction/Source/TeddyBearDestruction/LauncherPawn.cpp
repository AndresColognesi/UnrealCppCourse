// Copyright A.T. Chamillard. All Rights Reserved.

#include "LauncherPawn.h"
#include "Kismet/GameplayStatics.h"
//#include "GameHud.h"
#include "ScreenConstants.h"
#include "EventManagerActor.h"

/**
 * Sets default values
*/
ALauncherPawn::ALauncherPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

/**
 * Called when the game starts or when spawned
*/
void ALauncherPawn::BeginPlay()
{
	Super::BeginPlay();
	
	// save bounds for pawn
	FVector Origin;
	FVector BoxExtent;
	GetActorBounds(true, Origin, BoxExtent);
	HalfCollisionWidth = BoxExtent.Y;
	HalfCollisionHeight = BoxExtent.Z;

	// move pawn to middle on left side of screen
	FVector Location{ 0 };
	Location.Y = ScreenConstants::Left +
		HalfCollisionWidth;
	SetActorLocation(Location);

	// find static mesh component
	TArray<UStaticMeshComponent*> StaticMeshComponents;
	GetComponents(StaticMeshComponents);

	// make sure we found the static mesh
	if (StaticMeshComponents.Num() > 0)
	{
		// the mesh we want is at location 0 because there's only 1 mesh
		UStaticMeshComponent* StaticMeshComponent = StaticMeshComponents[0];

		// set up delegate for collisions with something else
		StaticMeshComponent->OnComponentBeginOverlap.AddDynamic(
			this, &ALauncherPawn::OnOverlapBegin);
	}

	// add to event manager
	TArray<AActor*> TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(
		GetWorld(), "EventManager", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		AEventManagerActor* EventManager = Cast<AEventManagerActor>(
			TaggedActors[0]);
		EventManager->AddInvoker(this);
	}
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void ALauncherPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// move pawn based on movement input
	FVector PendingMovementInput = ConsumeMovementInputVector();
	if (PendingMovementInput.Z != 0)
	{
		FVector NewLocation = GetActorLocation();
		NewLocation.Z += PendingMovementInput.Z *
			MoveAmountPerSecond * DeltaTime;
		NewLocation.Z = FMath::Clamp(NewLocation.Z,
			ScreenConstants::Bottom + HalfCollisionHeight,
			ScreenConstants::Top - HalfCollisionHeight);
		SetActorLocation(NewLocation);
	}
}

/**
 * Called when the launcher overlaps with something else
*/
void ALauncherPawn::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp,
	class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// broadcast event to add points
	PointsAddedEvent.Broadcast(-100);

	// get reference to HUD and deduct points
	/*AGameHUD* Hud = UGameplayStatics::GetPlayerController(this, 0)->GetHUD<AGameHUD>();
	if (Hud != nullptr)
	{
		Hud->AddPoints(-100);
	}*/

	// destroy object colliding with launcher
	if (OtherActor != nullptr)
	{
		OtherActor->Destroy();
	}
}

/**
 * Moves launcher vertically
 * @param moveScale scale factor for movement
*/
void ALauncherPawn::MoveVertically(float moveScale)
{
	moveScale = FMath::Clamp(moveScale, -1.0f, 1.0f);
	AddMovementInput(GetActorUpVector(),
		moveScale);
}

/**
 * Shoots a projectile
*/
void ALauncherPawn::Shoot()
{
	// spawn projectile
	FVector SpawnLocation{ GetActorLocation() };
	SpawnLocation.Y += HalfCollisionWidth + ProjectileSpawnOffset;
	GetWorld()->SpawnActor<AProjectileActor>(
		UProjectile, SpawnLocation,
		FRotator::ZeroRotator);
}

/**
 * Called when actor is being removed from level
 * @param EndPlayReason why the actor is being removed
*/
void ALauncherPawn::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// remove from event manager
	TArray<AActor*> TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(
		GetWorld(), "EventManager", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		AEventManagerActor* EventManager = Cast<AEventManagerActor>(
			TaggedActors[0]);
		EventManager->RemoveInvoker(this);
	}
}

/**
 * Gets the points added event for this invoker
 * @return points added event
*/
FPointsAddedEvent& ALauncherPawn::GetPointsAddedEvent()
{
	return PointsAddedEvent;
}