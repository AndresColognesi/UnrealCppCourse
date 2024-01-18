// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "LootActor.h"
#include "GoodLootActor.generated.h"

/**
 * A good loot actor
 */
UCLASS()
class TEDDYBEARDESTRUCTION_API AGoodLootActor : public ALootActor
{
	GENERATED_BODY()

protected:
	/**
	 * Called when the game starts or when spawned
	*/
	virtual void BeginPlay() override;

	/**
	 * @brief Process a collision with something else
	 * @param OtherActor other actor in collision
	*/
	virtual void ProcessTeddyBearCollision(class AActor* OtherActor) override;
};