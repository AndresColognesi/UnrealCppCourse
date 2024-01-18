// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LauncherPlayerController.generated.h"

/**
 * A launcher player controller
 */
UCLASS()
class TEDDYBEARDESTRUCTION_API ALauncherPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	/**
	 * Called to bind functionality to input
	*/
	virtual void SetupInputComponent() override;

	/**
	 * Moves the launcher vertically
	 * @param input input on Vertical axis
	*/
	void MoveVertically(float input);

	/**
	 * Shoots a projectile
	*/
	void Shoot();
};
