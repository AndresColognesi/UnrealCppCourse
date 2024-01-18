// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "DelegateDeclarations.h"

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PointsAddedInvokerInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPointsAddedInvokerInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * An interface for inovkers of the points added event
 */
class TEDDYBEARDESTRUCTION_API IPointsAddedInvokerInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	/**
	 * Gets the points added event for this invoker
	 * 
	 * CAUTION: Horribly ugly code in default implementation
	 * to return an invalid reference, but the function is marked
	 * as PURE_VIRTUAL so the default implementation should never 
	 * actually be executed
	 * @return points added event
	*/
	virtual FPointsAddedEvent& GetPointsAddedEvent() PURE_VIRTUAL(IPointsAddedInvokerInterface::GetPointsAddedEvent, return *(FPointsAddedEvent*)nullptr;);
};
