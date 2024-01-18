// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "LootTeddyBearActor.h"
#include "RandomGoodLootTeddyBearActor.generated.h"

/**
 * A teddy bear that sometimes drops good loot
 */
UCLASS()
class TEDDYBEARDESTRUCTION_API ARandomGoodLootTeddyBearActor : public ALootTeddyBearActor
{
	GENERATED_BODY()
	
protected:
	/**
	 * Called when the game starts or when spawned
	*/
	virtual void BeginPlay() override;

	/**
	 * Process a collision with a projectile
	*/
	virtual void ProcessProjectileCollision() override;
};
