// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputActionValue.h" //to be able to use the InputActionValue type
#include "MyPawn.generated.h"

// Adding Enhanced Input Action classes to be used in code:
class UInputMappingContext;
class UInputAction;

UCLASS()
class EX8_THERUNAWAY_API AMyPawn : public APawn
{
	GENERATED_BODY()
private:
	int Health{ 100 };
	const float MoveAmountPerSecond{ 100 };
	float HalfCollisionWidth;
	float HalfCollisionHeight;

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// To store Input objects through blueprint panel:
	UPROPERTY(EditAnywhere, Category = Input)
	UInputMappingContext* TheRunawayContext;
	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* MovementAction;
	// Function to bind to input action:
	void Move(const FInputActionValue& Value);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
