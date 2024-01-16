// Copyright A.T. Chamillard. All Rights Reserved.


#include "GameHUD.h"


/**
* Draws the HUD
*/
void AGameHUD::DrawHUD()
{
	Super::DrawHUD();

	// draw runaways:
	DrawText(RunawayLabel + FString::FromInt(Runaways),
		FLinearColor::White,
		LeftOffset, TopOffset, HudFont);
}


/**
* Add runaway to counter
*/
void AGameHUD::AddRunaway()
{
	Runaways++;
}