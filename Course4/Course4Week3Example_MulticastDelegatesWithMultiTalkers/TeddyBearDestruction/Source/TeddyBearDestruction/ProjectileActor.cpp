// Copyright A.T. Chamillard. All Rights Reserved.

#include "ProjectileActor.h"

#include "ScreenConstants.h"

/**
 * Sets default values
*/
AProjectileActor::AProjectileActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

/**
 * Called when the game starts or when spawned
*/
void AProjectileActor::BeginPlay()
{
	Super::BeginPlay();
	
	// save half collision width
	FVector Origin;
	FVector BoxExtent;
	GetActorBounds(true, Origin, BoxExtent);
	HalfCollisionWidth = BoxExtent.Y;

	// find static mesh component
	TArray<UStaticMeshComponent*> StaticMeshComponents;
	GetComponents(StaticMeshComponents);

	// make sure we found the static mesh
	if (StaticMeshComponents.Num() > 0)
	{
		// the mesh we want is at location 0 because there's only 1 mesh
		UStaticMeshComponent* StaticMeshComponent = StaticMeshComponents[0];

		// set up delegate for collisions with something else
		StaticMeshComponent->OnComponentBeginOverlap.AddDynamic(
			this, &AProjectileActor::OnOverlapBegin);
	}
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void AProjectileActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// move horizontally
	FVector Location = GetActorLocation();
	Location.Y += MoveAmountPerSecond * DeltaTime;
	SetActorLocation(Location);

	// destroy if past right of screen
	if (GetActorLocation().Y >
		ScreenConstants::Right + HalfCollisionWidth)
	{
		Destroy();
	}
}

/**
 * Called when the projectile overlaps with something else
*/
void AProjectileActor::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp,
	class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// check for teddy bear
	if (OtherActor != nullptr &&
		(OtherActor->ActorHasTag("TeddyBear") ||
			OtherActor->ActorHasTag("Loot")))
	{
		Destroy();
	}
}
