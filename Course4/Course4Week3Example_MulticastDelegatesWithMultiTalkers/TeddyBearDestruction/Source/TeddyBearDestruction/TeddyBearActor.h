// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "DelegateDeclarations.h"
#include "PointsAddedInvokerInterface.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TeddyBearActor.generated.h"

/**
 * A teddy bear
*/
UCLASS(abstract)
class TEDDYBEARDESTRUCTION_API ATeddyBearActor : 
	public AActor, public IPointsAddedInvokerInterface
{
	GENERATED_BODY()
	
private:
	const float MoveAmountPerSecond{ 60 };
	float HalfCollisionWidth;
	int TeddyBearPoints{ 0 };

	// event support
	FPointsAddedEvent PointsAddedEvent;

public:	
	/**
	 * Sets default values for this actor's properties
	*/
	ATeddyBearActor();

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
	 * Called when the teddy bear overlaps with something else
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
	 * Process a collision with a projectile
	*/
	virtual void ProcessProjectileCollision() PURE_VIRTUAL(ATeddyBearActor::ProcessProjectileCollision,);

	/**
	 * Gets half the collision width of the teddy bear
	 * @return half collision width
	*/
	float GetHalfCollisionWidth();

	/**
	 * Sets how many points the teddy bear is worth
	 * @param Points teddy bear points
	*/
	void SetTeddyBearPoints(int Points);

	/**
	 * Adds the teddy bear points to the HUD
	*/
	void AddTeddyBearPointsToHud();
};
