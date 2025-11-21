// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFirstCpp.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
AMyFirstCpp::AMyFirstCpp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AMyFirstCpp::Test()
{
}

void AMyFirstCpp::Patatje()
{
}

// Called when the game starts or when spawned
void AMyFirstCpp::BeginPlay()
{
	Super::BeginPlay();

	if (shouldDestroy)
	{
		UKismetSystemLibrary::PrintString(GetWorld(), deleteTextPrefix + *myActor->GetName());
		myActor->K2_DestroyActor();
	}

	if (shouldSpawn)
	{		
		UKismetSystemLibrary::PrintString(GetWorld(), spawmTextPrefix + *myActor->GetName());
		FVector location  (100,100,100);
		FRotator rotation (0,0, 0);
		FActorSpawnParameters parmz;
		//GetWorld()->SpawnActor(ActorToSpawn);
		GetWorld()->SpawnActor<ASpawnActor>(ActorToSpawn, location, FRotator::ZeroRotator, parmz);
	}
}

// Called every frame
void AMyFirstCpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//UE_LOG(LogTemp, Log, TEXT("ooga booga %s"), *myActor->GetName());
	//UKismetSystemLibrary::PrintString(GetWorld(), *myActor->GetName());
}

