// Copyright A.T. Chamillard. All Rights Reserved.

#include "LauncherPlayerController.h"

#include "LauncherPawn.h"

/**
 * Called to bind functionality to input
*/
void ALauncherPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// set up movement key binding
	check(InputComponent != nullptr);
	InputComponent->BindAxis("Vertical",
		this,
		&ALauncherPlayerController::MoveVertically);

	// set up shoot key binding
	InputComponent->BindAction("Shoot",
		EInputEvent::IE_Pressed, this,
		&ALauncherPlayerController::Shoot);
}

/**
 * Moves the launcher vertically
 * @param input input on Vertical axis
*/
void ALauncherPlayerController::MoveVertically(float input)
{
	if (input != 0)
	{
		ALauncherPawn* LauncherPawn =
			(ALauncherPawn*)GetPawn();
		if (LauncherPawn != nullptr)
		{
			LauncherPawn->MoveVertically(input);
		}
	}
}

/**
 * Shoots a projectile
*/
void ALauncherPlayerController::Shoot()
{
	ALauncherPawn* LauncherPawn =
		(ALauncherPawn*)GetPawn();
	if (LauncherPawn != nullptr)
	{
		LauncherPawn->Shoot();
	}
}