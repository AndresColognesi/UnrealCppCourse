// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "TeddyBearActor.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TeddyBearSpawner.generated.h"

/**
 * A teddy bear spawner
*/
UCLASS()
class TEDDYBEARDESTRUCTION_API ATeddyBearSpawner : public AActor
{
	GENERATED_BODY()
	
private:
	// spawn delay support
	const float MinSpawnDelaySeconds{ 1 };
	const float MaxSpawnDelaySeconds{ 2 };

	// spawn location support
	const float SpawnYOffset{ 10.0f };
	const float MinSpawnZ{ -125 };
	const float MaxSpawnZ{ 125 };

	/**
	 * Starts the spawn timer
	*/
	void StartSpawnTimer();

public:
	UPROPERTY(EditAnywhere,
		meta = (MetaClass = "TeddyBear"),
		Category = TeddyBearBlueprints)
		TSubclassOf<ATeddyBearActor> UNoLootTeddyBear;
	UPROPERTY(EditAnywhere,
		meta = (MetaClass = "TeddyBear"),
		Category = TeddyBearBlueprints)
		TSubclassOf<ATeddyBearActor> URandomGoodLootTeddyBear;
	UPROPERTY(EditAnywhere,
		meta = (MetaClass = "TeddyBear"),
		Category = TeddyBearBlueprints)
		TSubclassOf<ATeddyBearActor> URandomGoodBadLootTeddyBear;

	/**
	 * Spawns a teddy bear
	*/
	UFUNCTION()
		void SpawnTeddyBear();

public:	
	/**
	 * Sets default values for this actor's properties
	*/
	ATeddyBearSpawner();

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

};
