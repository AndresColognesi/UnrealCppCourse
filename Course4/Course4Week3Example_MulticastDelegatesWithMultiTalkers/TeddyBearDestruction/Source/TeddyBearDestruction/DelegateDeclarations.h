// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DelegateDeclarations.generated.h"

// points added event
DECLARE_MULTICAST_DELEGATE_OneParam(FPointsAddedEvent, int);

/**
 * Container for delegate declarations
 */
UCLASS()
class TEDDYBEARDESTRUCTION_API UDelegateDeclarations : public UObject
{
	GENERATED_BODY()
	
};
