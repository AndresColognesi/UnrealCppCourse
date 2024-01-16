// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "HunterPawn.generated.h"

/**
 * A hunter pawn
*/
UCLASS()
class THERUNAWAY_API AHunterPawn : public APawn
{
	GENERATED_BODY()

private:
	const float MoveAmountPerSecond{ 100 };
	float HalfCollisionWidth;
	float HalfCollisionHeight;
	int Health{ 100 };

	// saved for efficiency
	UStaticMeshComponent* StaticMeshComponent;
public:
	/**
	 * Sets default values for this pawn's properties
	*/
	AHunterPawn();

protected:
	/**
	 * Called when the game starts or when spawned
	*/
	virtual void BeginPlay() override;

public:	
	/**
	 * Called every frame
	 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
	*/
	virtual void Tick(float DeltaTime) override;

	/**
	 * Moves the pawn horizontally
	 * @param moveScale scale factor for movement
	*/
	void MoveHorizontally(float moveScale);

	/**
	 * Moves the pawn vertically
	 * @param moveScale scale factor for movement
	*/
	void MoveVertically(float moveScale);

private:
	/**
	 * Tells whether or not the pawn is off the screen
	 * @return true if the pawn is off screen, false otherwise
	*/
	bool IsOffScreen();
};
