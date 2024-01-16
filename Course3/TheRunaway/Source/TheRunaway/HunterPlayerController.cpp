// Copyright A.T. Chamillard. All Rights Reserved.


#include "HunterPlayerController.h"

#include "HunterPawn.h"

/**
 * Called to bind functionality to input
*/
void AHunterPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// set up movement key bindings
	check(InputComponent != nullptr);
	InputComponent->BindAxis("Horizontal",
		this,
		&AHunterPlayerController::MoveHorizontally);
	InputComponent->BindAxis("Vertical",
		this,
		&AHunterPlayerController::MoveVertically);
}

/**
 * Moves the pawn horizontally
 * @param input input on Horizontal axis
*/
void AHunterPlayerController::MoveHorizontally(float input)
{
	if (input != 0)
	{
		AHunterPawn* HunterPawn =
			(AHunterPawn*)GetPawn();
		if (HunterPawn != nullptr)
		{
			HunterPawn->MoveHorizontally(input);
		}
	}
}

/**
 * Moves the pawn vertically
 * @param input input on Vertical axis
*/
void AHunterPlayerController::MoveVertically(float input)
{
	if (input != 0)
	{
		AHunterPawn* HunterPawn =
			(AHunterPawn*)GetPawn();
		if (HunterPawn != nullptr)
		{
			HunterPawn->MoveVertically(input);
		}
	}
}
