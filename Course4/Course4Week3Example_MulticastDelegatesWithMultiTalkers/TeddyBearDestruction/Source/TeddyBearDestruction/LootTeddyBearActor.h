// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "LootActor.h"

#include "CoreMinimal.h"
#include "TeddyBearActor.h"
#include "LootTeddyBearActor.generated.h"

/**
 * A teddy bear that drops loot
 */
UCLASS(abstract)
class TEDDYBEARDESTRUCTION_API ALootTeddyBearActor : public ATeddyBearActor
{
	GENERATED_BODY()
	
private:
	const float LootDropOffset{ 6.0f };

public:
	UPROPERTY(EditAnywhere,
		meta = (MetaClass = "Loot"),
		Category = LootBlueprints)
		TSubclassOf<ALootActor> UGoodLoot;
	UPROPERTY(EditAnywhere,
		meta = (MetaClass = "Loot"),
		Category = LootBlueprints)
		TSubclassOf<ALootActor> UBadLoot;

protected:
	/**
	 * Called when the game starts or when spawned
	*/
	virtual void BeginPlay() override;

	/**
	 * Drops the given loot at the given location
	 * @param ActorLocation actor location
	 * @param Loot loot to drop
	*/
	void DropLoot(FVector ActorLocation, TSubclassOf<ALootActor> Loot);
};
