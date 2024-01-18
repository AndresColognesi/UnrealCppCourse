// Copyright A.T. Chamillard. All Rights Reserved.

#include "GameHUD.h"

#include "Kismet/GameplayStatics.h"
#include "EventManagerActor.h"

/**
 * Called when the game starts or when spawned
*/
void AGameHUD::BeginPlay()
{
	Super::BeginPlay();

	// add to event manager
	TArray<AActor*> TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(
		GetWorld(), "EventManager", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		AEventManagerActor* EventManager = Cast<AEventManagerActor>(
			TaggedActors[0]);
		EventManager->AddListener(this);
	}
}

/**
 * Draws the HUD
*/
void AGameHUD::DrawHUD()
{
	Super::DrawHUD();

	// draw kills
	DrawText(ScoreLabel + FString::FromInt(Score),
		FLinearColor::White,
		LeftOffset, TopOffset, HudFont);
}

/**
 * Adds (potentially negative) points to the score
 * @param Points points to add to score
*/
void AGameHUD::AddPoints(int Points)
{
	Score += Points;
}

/**
 * Adds this object to the given points added event
 * @param PointsAddedEvent points added event
 * @return delegate handle
*/
FDelegateHandle AGameHUD::AddToPointsAddedEvent(FPointsAddedEvent& PointsAddedEvent)
{
	return PointsAddedEvent.AddUObject(this,
		&AGameHUD::AddPoints);
}

/**
 * Called when actor is being removed from level
 * @param EndPlayReason why the actor is being removed
*/
void AGameHUD::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// remove from event manager
	TArray<AActor*> TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(
		GetWorld(), "EventManager", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		AEventManagerActor* EventManager = Cast<AEventManagerActor>(
			TaggedActors[0]);
		EventManager->RemoveListener(this);
	}
}
