// Copyright A.T. Chamillard. All Rights Reserved.

#include "TeddyBearActor.h"

#include "Kismet/GameplayStatics.h"
//#include "GameHUD.h"
#include "ScreenConstants.h"
#include "EventManagerActor.h"

/**
 * Sets default values
*/
ATeddyBearActor::ATeddyBearActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

/**
 * Called when the game starts or when spawned
*/
void ATeddyBearActor::BeginPlay()
{
	Super::BeginPlay();

	// save half collision width
	FVector Origin;
	FVector BoxExtent;
	GetActorBounds(true, Origin, BoxExtent);
	HalfCollisionWidth = BoxExtent.Y;

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
			this, &ATeddyBearActor::OnOverlapBegin);
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
void ATeddyBearActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// move left
	FVector Location = GetActorLocation();
	Location.Y -= MoveAmountPerSecond * DeltaTime;
	SetActorLocation(Location);

	// destroy if past of screen
	if (GetActorLocation().Y <
		ScreenConstants::Left - HalfCollisionWidth)
	{
		Destroy();
	}
}

/**
 * Called when the teddy bear overlaps with something else
*/
void ATeddyBearActor::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp,
	class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// check for projectile
	if (OtherActor != nullptr &&
		OtherActor->ActorHasTag("Projectile"))
	{
		ProcessProjectileCollision();
	}
}

/**
 * Gets half the collision width of the teddy bear
 * @return half collision width
*/
float ATeddyBearActor::GetHalfCollisionWidth()
{
	return HalfCollisionWidth;
}

/**
 * Sets how many points the teddy bear is worth
 * @param Points teddy bear points
*/
void ATeddyBearActor::SetTeddyBearPoints(int Points)
{
	TeddyBearPoints = Points;
}

/**
 * Adds the teddy bear points to the HUD
*/
void ATeddyBearActor::AddTeddyBearPointsToHud()
{
	// broadcast event to add points
	PointsAddedEvent.Broadcast(TeddyBearPoints);
	// get reference to HUD and add points
	//AGameHUD* Hud = UGameplayStatics::GetPlayerController(this, 0)->GetHUD<AGameHUD>();
	//if (Hud != nullptr)
	//{
	//	Hud->AddPoints(TeddyBearPoints);
	//}
}

/**
 * Called when actor is being removed from level
 * @param EndPlayReason why the actor is being removed
*/
void ATeddyBearActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
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
FPointsAddedEvent& ATeddyBearActor::GetPointsAddedEvent()
{
	return PointsAddedEvent;
}