// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Jumper.generated.h"

/**
 *
*/
UCLASS()
class JUMPTHATACTOR_API AJumper : public AActor
{
	GENERATED_BODY()

private:
	// jump bounds
	float MinY = -256;
	float MaxY = 256;
	float MinZ = 0;
	float MaxZ = 144;

	/**
	 * Starts the jump timer
	*/
	void StartJumpTimer();
public:
	/**
	 * Jumps the Actor
	*/
	UFUNCTION()
	void Jump();

public:
	/**
	 * Sets default values for this actor's properties
	*/
	AJumper();

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

};
