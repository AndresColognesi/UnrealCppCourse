// Copyright A.T. Chamillard. All Rights Reserved.

#include "TeddyBearSpawner.h"

#include "ScreenConstants.h"

/**
 * Sets default values
*/
ATeddyBearSpawner::ATeddyBearSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

/**
 * Called when the game starts or when spawned
*/
void ATeddyBearSpawner::BeginPlay()
{
	Super::BeginPlay();
	
	StartSpawnTimer();
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void ATeddyBearSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/**
 * Spawns a teddy bear
*/
void ATeddyBearSpawner::SpawnTeddyBear()
{
	// randomly pick which teddy bear to spawn
	TSubclassOf<ATeddyBearActor> SpawnTeddyBear;
	int TeddyBearNumber = FMath::RandRange(0, 2);
	if (TeddyBearNumber == 0)
	{
		SpawnTeddyBear = UNoLootTeddyBear;
	}
	else if (TeddyBearNumber == 1)
	{
		SpawnTeddyBear = URandomGoodLootTeddyBear;
	}
	else
	{
		SpawnTeddyBear = URandomGoodBadLootTeddyBear;
	}

	// generate random spawn location
	FVector SpawnLocation{ 0 };
	SpawnLocation.Y = ScreenConstants::Right +
		SpawnYOffset;
	SpawnLocation.Z = FMath::RandRange(MinSpawnZ, MaxSpawnZ);

	// spawn the teddy bear
	GetWorld()->SpawnActor<ATeddyBearActor>(
		SpawnTeddyBear, SpawnLocation,
		FRotator::ZeroRotator);

	// start the timer again
	StartSpawnTimer();
}

/**
 * Starts the spawn timer
*/
void ATeddyBearSpawner::StartSpawnTimer()
{
	// set random duration and start the timer
	float TimerDuration = FMath::RandRange(
		MinSpawnDelaySeconds, MaxSpawnDelaySeconds);
	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this,
		&ATeddyBearSpawner::SpawnTeddyBear,
		TimerDuration);
}

