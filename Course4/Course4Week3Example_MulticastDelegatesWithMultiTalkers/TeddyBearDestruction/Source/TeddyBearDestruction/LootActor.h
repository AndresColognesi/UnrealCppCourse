// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "DelegateDeclarations.h"
#include "PointsAddedInvokerInterface.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LootActor.generated.h"

/**
 * A loot actor
*/
UCLASS(abstract)
class TEDDYBEARDESTRUCTION_API ALootActor : 
	public AActor, public IPointsAddedInvokerInterface
{
	GENERATED_BODY()
	
private:
	int LootDestroyPoints{ 0 };

	// event support
	FPointsAddedEvent PointsAddedEvent;

public:	
	/**
	 * Sets default values for this actor's properties
	*/
	ALootActor();

protected:
	/**
	 * Called when the game starts or when spawned
	*/
	virtual void BeginPlay() override;

public:	
	/**
	 * Called every frame
	 * @param DeltaTime Game time elapsed during last frame modified by the time dilation 
	*/
	virtual void Tick(float DeltaTime) override;

	/**
	 * Called when the loot overlaps with something else
	*/
	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp,
			class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	/**
	 * Called when actor is being removed from level
	 * @param EndPlayReason why the actor is being removed
	*/
	UFUNCTION()
		virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	/**
	 * Gets the points added event for this invoker
	 * @return points added event
	*/
	virtual FPointsAddedEvent& GetPointsAddedEvent() override;

protected:
	/**
	 * @brief Process a collision with a teddy bear
	 * @param OtherActor other actor in collision
	*/
	virtual void ProcessTeddyBearCollision(class AActor* OtherActor) PURE_VIRTUAL(ALootActor::ProcessTeddyBearCollision, );

	/**
	 * Sets loot destroy points to the given points
	 * @param Points points
	*/
	void SetLootDestroyPoints(int Points);

	/**
	 * Adds the loot destroy points to the HUD
	*/
	void AddLootDestroyPointsToHud();

	/**
	 * Adds the given points to the hud
	 * @param Points points to add to hud
	*/
	void AddPointsToHud(int Points);
};
