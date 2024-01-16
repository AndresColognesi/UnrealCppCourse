// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GameHUD.generated.h"

/**
 * 
 */
UCLASS()
class THERUNAWAY_API AGameHUD : public AHUD
{
	GENERATED_BODY()
	
private:
	const int LeftOffset{ 75 };
	const int TopOffset{ 50 };
	const FString RunawayLabel{ "Run Away Counter: " };
	int Runaways{ 0 };

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HudFont)
	UFont* HudFont;

	/**
	* Draws the HUD
	*/
	virtual void DrawHUD() override;

	/**
	* Add runaway to counter
	*/
	void AddRunaway();
};
