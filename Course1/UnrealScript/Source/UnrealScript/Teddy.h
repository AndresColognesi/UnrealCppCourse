// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "IntVariable.h"

#include "Teddy.generated.h"


UCLASS()
class UNREALSCRIPT_API ATeddy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATeddy();

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IntVariables", meta = (AllowPrivateAccess = "true"))
	UIntVariable* _age;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
