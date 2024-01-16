// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * My Pawn controller
 */
UCLASS()
class EX8_THERUNAWAY_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	/**
	 * Move the pawns in screen plane
	 * @param input input on Horizontal axis
	*/
	//void Move(float input);
};
