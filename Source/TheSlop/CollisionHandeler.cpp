// Fill out your copyright notice in the Description page of Project Settings.


#include "CollisionHandeler.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ACollisionHandeler::ACollisionHandeler()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACollisionHandeler::BeginPlay()
{
	Super::BeginPlay();

	FScriptDelegate doHit;
	this->OnActorHit.AddDynamic(this, &ACollisionHandeler::TestFunc);
}

void ACollisionHandeler::TestFunc(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor->GetClass() == otherClassToCheck)
		UKismetSystemLibrary::PrintString(GetWorld(), "C++ - " + OtherActor->GetName());
}

// Called every frame
void ACollisionHandeler::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

