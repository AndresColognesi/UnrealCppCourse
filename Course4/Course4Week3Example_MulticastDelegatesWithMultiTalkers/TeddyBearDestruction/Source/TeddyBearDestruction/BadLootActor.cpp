// Copyright A.T. Chamillard. All Rights Reserved.


#include "BadLootActor.h"
#include "Kismet/GameplayStatics.h"
#include "GameHud.h"

/**
 * Called when the game starts or when spawned
*/
void ABadLootActor::BeginPlay()
{
	Super::BeginPlay();

	SetLootDestroyPoints(10);
}

/**
 * @brief Process a collision with something else
 * @param OtherActor other actor in collision
*/
void ABadLootActor::ProcessTeddyBearCollision(class AActor* OtherActor)
{
	// add penalty points to hud
	AddPointsToHud(-50);

	// destroy teddy bear
	OtherActor->Destroy();
}
