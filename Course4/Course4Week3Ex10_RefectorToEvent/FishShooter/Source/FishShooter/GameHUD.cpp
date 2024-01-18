// Copyright A.T. Chamillard. All Rights Reserved.


#include "GameHUD.h"

/**
 * Draws the HUD
*/
void AGameHUD::DrawHUD()
{
	Super::DrawHUD();

	// draw kills
	DrawText(KillLabel + FString::FromInt(Kills),
		FLinearColor::White,
		LeftOffset, TopOffset, HudFont);
}

/**
 * Adds a kill to the kill count
*/
void AGameHUD::AddKill()
{
	Kills++;
}