// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "TeddyBearActor.h"
#include "NoLootTeddyBearActor.generated.h"

/**
 * A teddy bear that doesn't drop any loot
 */
UCLASS()
class TEDDYBEARDESTRUCTION_API ANoLootTeddyBearActor : public ATeddyBearActor
{
	GENERATED_BODY()

protected:
	/**
	 * Called when the game starts or when spawned
	*/
	virtual void BeginPlay() override;

	/**
	 * @brief Process a collision with a projectile
	*/
	virtual void ProcessProjectileCollision() override;
};
