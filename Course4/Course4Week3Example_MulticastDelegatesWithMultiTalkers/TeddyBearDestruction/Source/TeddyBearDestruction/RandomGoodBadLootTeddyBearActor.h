// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "LootTeddyBearActor.h"
#include "RandomGoodBadLootTeddyBearActor.generated.h"

/**
 * A teddy bear that drops both good and bad loot
 */
UCLASS()
class TEDDYBEARDESTRUCTION_API ARandomGoodBadLootTeddyBearActor : public ALootTeddyBearActor
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
