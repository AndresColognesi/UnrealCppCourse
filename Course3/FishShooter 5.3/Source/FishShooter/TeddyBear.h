// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TeddyBear.generated.h"

/**
 * A teddy bear
*/
UCLASS()
class FISHSHOOTER_API ATeddyBear : public AActor
{
	GENERATED_BODY()
	
private:
	const float MoveAmountPerSecond{ 60 };
	float HalfCollisionHeight;
	int Health{ 100 };
	
public:	
	/**
	 * Sets default values for this actor's properties
	*/
	ATeddyBear();

protected:
	/**
	 * Called when the game starts or when spawned
	*/
	virtual void BeginPlay() override;

public:	
	/**
	 * Called every frame
	 * @param DeltaTime Game time elapsed during last frame modified by the time dilation 
	*/
	virtual void Tick(float DeltaTime) override;

	/**
	 * Called when the teddy bear overlaps with something else
	*/
	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp,
			class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
