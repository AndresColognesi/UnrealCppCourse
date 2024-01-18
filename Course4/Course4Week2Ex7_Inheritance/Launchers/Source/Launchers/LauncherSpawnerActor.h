// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "LauncherActor.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LauncherSpawnerActor.generated.h"

UCLASS()
class LAUNCHERS_API ALauncherSpawnerActor : public AActor
{
	GENERATED_BODY()

private:
	//-- Fields --//
	
	// Open fields in blueprint:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawner", meta = (AllowPrivateAccess = "true"))
	float _spawningPeriod{ 5 };
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawner", meta = (AllowPrivateAccess = "true"))
	int _randomSeed{ 123 };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LauncherBlueprints, meta = (AllowPrivateAccess = "true"))
	TArray<TSubclassOf<ALauncherActor>> _launcherList;

	//-- Methods--//
	
	/**
	 * Starts the spawn timer
	*/
	void StartSpawnTimer();


public:
	//-- Methods --//

	/**
	* Randomly spawns a new launcher from the possible launcher list.
	*/
	UFUNCTION()
	void SpawnNewLauncher();

	// Sets default values for this actor's properties
	ALauncherSpawnerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
