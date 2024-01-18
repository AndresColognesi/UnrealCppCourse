// Copyright A.T. Chamillard. All Rights Reserved.


#include "LootActor.h"
#include "Kismet/GameplayStatics.h"
//#include "GameHud.h"
#include "EventManagerActor.h"

/**
 * Sets default values
*/
ALootActor::ALootActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

/**
 * Called when the game starts or when spawned
*/
void ALootActor::BeginPlay()
{
	Super::BeginPlay();

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
			this, &ALootActor::OnOverlapBegin);
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
void ALootActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/**
 * Called when the loot overlaps with something else
*/
void ALootActor::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp,
	class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != nullptr)
	{
		// check for projectile
		if (OtherActor->ActorHasTag("Projectile"))
		{
			AddLootDestroyPointsToHud();

			// destroy projectile and self
			OtherActor->Destroy();
			Destroy();
		}
		else if (OtherActor->ActorHasTag("TeddyBear"))
		{
			ProcessTeddyBearCollision(OtherActor);
		}
	}
}

/**
 * Called when actor is being removed from level
 * @param EndPlayReason why the actor is being removed
*/
void ALootActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
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
FPointsAddedEvent& ALootActor::GetPointsAddedEvent()
{
	return PointsAddedEvent;
}

/**
 * Sets loot destroy points to the given points
 * @param Points points
*/
void ALootActor::SetLootDestroyPoints(int Points)
{
	LootDestroyPoints = Points;
}

/**
 * Adds the loot destroy points to the HUD
*/
void ALootActor::AddLootDestroyPointsToHud()
{
	AddPointsToHud(LootDestroyPoints);
}

/**
 * Adds the given points to the hud
 * @param Points points to add to hud
*/
void ALootActor::AddPointsToHud(int Points)
{
	PointsAddedEvent.Broadcast(Points);

	// get reference to HUD and add points
	/*AGameHUD* Hud = UGameplayStatics::GetPlayerController(this, 0)->GetHUD<AGameHUD>();
	if (Hud != nullptr)
	{
		Hud->AddPoints(Points);
	}*/
}