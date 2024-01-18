// Copyright A.T. Chamillard. All Rights Reserved.


#include "GoodLootActor.h"
#include "Kismet/GameplayStatics.h"
#include "GameHud.h"

/**
 * Called when the game starts or when spawned
*/
void AGoodLootActor::BeginPlay()
{
	Super::BeginPlay();

	SetLootDestroyPoints(50);
}

/**
 * @brief Process a collision with something else
 * @param OtherActor other actor in collision
*/
void AGoodLootActor::ProcessTeddyBearCollision(class AActor* OtherActor)
{
	// add points and destroy self
	AddLootDestroyPointsToHud();
	Destroy();
}

