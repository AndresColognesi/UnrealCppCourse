// Copyright Epic Games, Inc. All Rights Reserved.


#include "TheRunawayGameModeBase.h"

/**
 * Sets default values
*/
ATheRunawayGameModeBase::ATheRunawayGameModeBase()
{
	// set pawn and player controller
	ConstructorHelpers::FObjectFinder<UClass>
		PawnClass(TEXT("Class'/Game/TheRunaway/Blueprints/BP_HunterPawn.BP_HunterPawn_C'"));
	if (PawnClass.Object != nullptr)
	{
		DefaultPawnClass = PawnClass.Object;
	}
	ConstructorHelpers::FObjectFinder<UClass>
		ControllerClass(TEXT("Class'/Game/TheRunaway/Blueprints/BP_HunterPlayerController.BP_HunterPlayerController_C'"));
	if (ControllerClass.Object != nullptr)
	{
		PlayerControllerClass = ControllerClass.Object;
	}
}