// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "DelegateDeclarations.h"

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GameHUD.generated.h"

/**
 * A HUD
 */
UCLASS()
class TEDDYBEARDESTRUCTION_API AGameHUD : public AHUD
{
	GENERATED_BODY()

private:
	const int LeftOffset{ 75 };
	const int TopOffset{ 50 };
	const FString ScoreLabel{ "Score: " };
	int Score{ 0 };

protected:
	/**
	 * Called when the game starts or when spawned
	*/
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite,
		Category = HUDFont)
		UFont* HudFont;

	/**
	 * Draws the HUD
	*/
	virtual void DrawHUD() override;

	/**
	 * Adds (potentially negative) points to the score
	 * @param Points points to add to score
	*/
	UFUNCTION()
		void AddPoints(int Points);

	/**
	 * Adds this object to the given points added event
	 * @param PointsAddedEvent points added event
	 * @return delegate handle
	*/
	FDelegateHandle AddToPointsAddedEvent(FPointsAddedEvent& PointsAddedEvent);

	/**
	 * Called when actor is being removed from level
	 * @param EndPlayReason why the actor is being removed
	*/
	UFUNCTION()
		virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
};