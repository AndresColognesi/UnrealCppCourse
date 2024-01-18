// Copyright A.T. Chamillard. All Rights Reserved.


#include "RandomGoodLootTeddyBearActor.h"

/**
 * Called when the game starts or when spawned
*/
void ARandomGoodLootTeddyBearActor::BeginPlay()
{
	Super::BeginPlay();

	SetTeddyBearPoints(50);
}

/**
 * Process a collision with a projectile
*/
void ARandomGoodLootTeddyBearActor::ProcessProjectileCollision()
{
	// randomly drop good loot
	float DropChance = FMath::RandRange(0.0f, 1.0f);
	if (DropChance < 0.5f)
	{
		DropLoot(GetActorLocation(), UGoodLoot);
	}

	// Add points and destroy self
	AddTeddyBearPointsToHud();
	Destroy();
}
