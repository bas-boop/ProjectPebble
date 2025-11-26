// Fill out your copyright notice in the Description page of Project Settings.


#include "MatSwitcher.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
AMatSwitcher::AMatSwitcher()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AMatSwitcher::SwitchMat(UStaticMeshComponent* targetMat)
{
	targetMat->SetMaterial(0, isSwitched ? startMat : endMat);
	isSwitched = !isSwitched;
}

// Called when the game starts or when spawned
void AMatSwitcher::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMatSwitcher::SwitchMat()
{
	MyMesh->SetMaterial(0, isSwitched ? startMat : endMat);
	mesh->SetMaterial(0, isSwitched ? startMat : endMat);
	isSwitched = !isSwitched;
}

// Called every frame
void AMatSwitcher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//if (UGameplayStatics::GetWorldDeltaSeconds(GetWorld()) == 0 % 2)
	//if (UGameplayStatics::GetWorldDeltaSeconds(GetWorld()) > 1)
		//SwitchMat();
}

