// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "LootActor.h"
#include "BadLootActor.generated.h"

/**
 * A bad loot actor
 */
UCLASS()
class TEDDYBEARDESTRUCTION_API ABadLootActor : public ALootActor
{
	GENERATED_BODY()

protected:
	/**
	 * Called when the game starts or when spawned
	*/
	virtual void BeginPlay() override;

protected:
	/**
	 * @brief Process a collision with something else
	 * @param OtherActor other actor in collision
	*/
	virtual void ProcessTeddyBearCollision(class AActor* OtherActor) override;
};
