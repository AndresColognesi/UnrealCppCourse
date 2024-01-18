// Copyright A.T. Chamillard. All Rights Reserved.


#include "TeddyBear.h"

#include "ScreenConstants.h"
#include "FishPawn.h"
#include "Kismet/GameplayStatics.h"
#include "GameHud.h"

/**
 * Sets default values
*/
ATeddyBear::ATeddyBear()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

/**
 * Called when the game starts or when spawned
*/
void ATeddyBear::BeginPlay()
{
	Super::BeginPlay();

	// save half collision height
	FVector Origin;
	FVector BoxExtent;
	GetActorBounds(true, Origin, BoxExtent);
	HalfCollisionHeight = BoxExtent.Z;

	// find static mesh component
	UStaticMeshComponent* StaticMeshComponent;
	TArray<UStaticMeshComponent*> StaticMeshComponents;
	GetComponents(StaticMeshComponents);

	// make sure we found the static mesh
	if (StaticMeshComponents.Num() > 0)
	{
		// the mesh we want is at location 0 because there's only 1 mesh
		StaticMeshComponent = StaticMeshComponents[0];

		// set up delegate for collisions with something else
		StaticMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &ATeddyBear::OnOverlapBegin);
	}

	// save configuration data for efficiency
	TArray<AActor*> ConfigurationDataActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(),
		"ConfigurationDataActor", ConfigurationDataActors);
	if (ConfigurationDataActors.Num() > 0)
	{
		ConfigurationData = (AConfigurationDataActor*)ConfigurationDataActors[0];
	}
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void ATeddyBear::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// move down
	FVector Location = GetActorLocation();
	Location.Z -= ConfigurationData->GetTeddyMoveAmountPerSecond() * 
		DeltaTime;
	SetActorLocation(Location);

	// destroy if below bottom of screen
	if (GetActorLocation().Z <
		ScreenConstants::Bottom - HalfCollisionHeight)
	{
		Destroy();
	}
}

/**
 * Called when the teddy bear overlaps with something else
*/
void ATeddyBear::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp,
	class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// check for fish
	if (OtherActor != nullptr &&
		OtherActor->ActorHasTag("Fish"))
	{
		AFishPawn* Fish = (AFishPawn*)OtherActor;
		if (Fish != nullptr)
		{
			Health -= Fish->GetDamage();
			if (Health <= 0)
			{
				// play sound
				UGameplayStatics::PlaySound2D(this,
					AudioCue);

				// get reference to HUD and add kill
				AGameHUD* Hud = UGameplayStatics::GetPlayerController(this, 0)->GetHUD<AGameHUD>();
				if (Hud != nullptr)
				{
					Hud->AddKill();
				}

				Destroy();
			}
		}
	}
}