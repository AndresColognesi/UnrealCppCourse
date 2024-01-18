// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "DelegateDeclarations.h"
#include "PointsAddedInvokerInterface.h"
#include "ProjectileActor.h"

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "LauncherPawn.generated.h"

/**
 * A launcher
*/
UCLASS()
class TEDDYBEARDESTRUCTION_API ALauncherPawn : 
	public APawn, public IPointsAddedInvokerInterface
{
	GENERATED_BODY()

private:
	const float MoveAmountPerSecond{ 100 };
	float HalfCollisionWidth;
	float HalfCollisionHeight;
	float ProjectileSpawnOffset{ 10 };

	// event support
	FPointsAddedEvent PointsAddedEvent;

public:
	UPROPERTY(EditAnywhere,
		meta = (MetaClass = "Projectile"),
		Category = ProjectileBlueprints)
		TSubclassOf<AProjectileActor> UProjectile;

	/**
	 * Sets default values for this pawn's properties
	*/
	ALauncherPawn();

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
	 * Called when the launcher overlaps with something else
	*/
	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp,
			class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	/**
	 * Moves launcher vertically
	 * @param moveScale scale factor for movement
	*/
	void MoveVertically(float moveScale);

	/**
	 * Shoots a projectile
	*/
	void Shoot();

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
};
