// Copyright Epic Games, Inc. All Rights Reserved.


#include "TeddyBearDestructionGameModeBase.h"

/**
 * Sets default values for this game mode's properties
*/
ATeddyBearDestructionGameModeBase::ATeddyBearDestructionGameModeBase()
{
	// set pawn and player controller
	ConstructorHelpers::FObjectFinder<UClass>
		PawnClass(TEXT("Class'/Game/TeddyBearDestruction/Blueprints/BP_LauncherPawn.BP_LauncherPawn_C'"));
	if (PawnClass.Object != nullptr)
	{
		DefaultPawnClass = PawnClass.Object;
	}
	ConstructorHelpers::FObjectFinder<UClass>
		ControllerClass(TEXT("Class'/Game/TeddyBearDestruction/Blueprints/BP_LauncherPlayerController.BP_LauncherPlayerController_C'"));
	if (ControllerClass.Object != nullptr)
	{
		PlayerControllerClass = ControllerClass.Object;
	}
}
