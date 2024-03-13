// Fill out your copyright notice in the Description page of Project Settings.


#include "Teddy.h"

// Sets default values
ATeddy::ATeddy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ATeddy::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("I'm Teddy! My age is %d"), _age->GetValue());

	// get the static mesh components for the blueprint
	TArray<UStaticMeshComponent*> StaticMeshComponents;
	GetComponents(StaticMeshComponents);

	// make sure we found the static mesh
	if (StaticMeshComponents.Num() > 0)
	{
		// the mesh we want is at location 0 because there's only 1 mesh
		UStaticMeshComponent* StaticMesh = StaticMeshComponents[0];

		// add code here to get actor moving
		StaticMesh->AddImpulse(FVector(0.0f, 100.0f, 100.0f));
	}
	
}

// Called every frame
void ATeddy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

