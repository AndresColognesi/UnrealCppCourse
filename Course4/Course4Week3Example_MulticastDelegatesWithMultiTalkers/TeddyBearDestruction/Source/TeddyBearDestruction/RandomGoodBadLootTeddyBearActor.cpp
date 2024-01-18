// Copyright A.T. Chamillard. All Rights Reserved.


#include "RandomGoodBadLootTeddyBearActor.h"

/**
 * Called when the game starts or when spawned
*/
void ARandomGoodBadLootTeddyBearActor::BeginPlay()
{
	Super::BeginPlay();

	SetTeddyBearPoints(100);
}

/**
 * Process a collision with a projectile
*/
void ARandomGoodBadLootTeddyBearActor::ProcessProjectileCollision()
{
	// randomly drop good or bad loot
	float DropChance = FMath::RandRange(0.0f, 1.0f);
	if (DropChance < 0.5f)
	{
		DropLoot(GetActorLocation(), UGoodLoot);
	}
	else
	{
		DropLoot(GetActorLocation(), UBadLoot);
	}

	// Add points and destroy self
	AddTeddyBearPointsToHud();
	Destroy();
}
