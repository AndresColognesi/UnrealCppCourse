// Copyright A.T. Chamillard. All Rights Reserved.


#include "Resizer.h"

/**
 * Sets default values
*/
AResizer::AResizer()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

/**
 * Called when the game starts or when spawned
*/
void AResizer::BeginPlay()
{
	Super::BeginPlay();

}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void AResizer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// resize the Actor
	FVector ActorScale = GetActorScale3D();
	ActorScale.Y += DeltaTime * ScaleChangePerSecond * ScaleChangeSignMultiplier;
	ActorScale.Z += DeltaTime * ScaleChangePerSecond * ScaleChangeSignMultiplier;
	SetActorScale3D(ActorScale);

	// update timer and check if it's done
	ElapsedResizeSeconds += DeltaTime;
	if (ElapsedResizeSeconds  >= TotalResizeSeconds)
	{
		// reset timer and start resizing the game object
		// in the opposite direction
		ElapsedResizeSeconds = 0;
		ScaleChangeSignMultiplier *= -1;
	}
}
