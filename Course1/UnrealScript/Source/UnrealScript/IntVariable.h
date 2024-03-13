// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IntVariable.generated.h"

/**
 * 
 */
UCLASS()
class UNREALSCRIPT_API UIntVariable : public UDataAsset
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fields", meta = (AllowPrivateAccess = "true"))
	int _value;

public:
	int GetValue();

	void SetValue(int desiredValue);
};
