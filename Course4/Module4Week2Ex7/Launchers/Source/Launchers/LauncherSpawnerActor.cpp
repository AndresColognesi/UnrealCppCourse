// Copyright A.T. Chamillard. All Rights Reserved.


#include "LauncherSpawnerActor.h"
//To get actors with tag:
#include "Kismet/GameplayStatics.h"

// Sets default values
ALauncherSpawnerActor::ALauncherSpawnerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ALauncherSpawnerActor::BeginPlay()
{
	Super::BeginPlay();

	//Set random seed:
	FMath::RandInit(_randomSeed);
	// Start our spawn timer for the first time:
	StartSpawnTimer();
	
}

// Called every frame
void ALauncherSpawnerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

#pragma region Private Methods

/**
* Starts the spawn timer
*/
void ALauncherSpawnerActor::StartSpawnTimer()
{
	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this, &ALauncherSpawnerActor::SpawnNewLauncher, _spawningPeriod);

}

/**
* Deletes active launchers and randomly spawns a new launcher
* from the possible launchers.
*/
void ALauncherSpawnerActor::SpawnNewLauncher()
{
	// Finds active launchers, if any and stores in list:
	TArray<AActor*> TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "Launcher", TaggedActors);
	// Loop over all found actors and destroy them:
	for (int i = 0; i < TaggedActors.Num(); i++)
	{
		TaggedActors[0]->Destroy();
	}

	// Generate random value to select launcher to be spawned:
	int launcherIndex = FMath::RandRange(0, _launcherList.Num() - 1);
	// Store selected launcher blueprint:
	TSubclassOf<ALauncherActor> launcherToSpawn = _launcherList[launcherIndex];

	// Spawn selected launcher in world origin:
	GetWorld()->SpawnActor<ALauncherActor>(
		launcherToSpawn, FVector::ZeroVector, FRotator::ZeroRotator);

	// Reset timer:
	StartSpawnTimer();
}

#pragma endregion Private Methods