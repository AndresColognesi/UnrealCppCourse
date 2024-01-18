// Copyright A.T. Chamillard. All Rights Reserved.


#include "NoLootTeddyBearActor.h"

/**
 * Called when the game starts or when spawned
*/
void ANoLootTeddyBearActor::BeginPlay()
{
	Super::BeginPlay();

	SetTeddyBearPoints(20);
}

/**
 * @brief Process a collision with a projectile
*/
void ANoLootTeddyBearActor::ProcessProjectileCollision()
{
	// add points and destroy self
	AddTeddyBearPointsToHud();
	Destroy();
}
