// Copyright A.T. Chamillard. All Rights Reserved.


#include "LootTeddyBearActor.h"

/**
 * Called when the game starts or when spawned
*/
void ALootTeddyBearActor::BeginPlay()
{
	Super::BeginPlay();

}

/**
 * Drops the given loot at the given location
 * @param ActorLocation actor location
 * @param Loot loot to drop
*/
void ALootTeddyBearActor::DropLoot(FVector ActorLocation, TSubclassOf<ALootActor> Loot)
{
	FVector DropLocation{ ActorLocation };
	DropLocation.Y += GetHalfCollisionWidth() +
		LootDropOffset;
	GetWorld()->SpawnActor<ALootActor>(
		Loot, DropLocation,
		FRotator::ZeroRotator);

}
