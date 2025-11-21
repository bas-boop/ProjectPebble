// Fill out your copyright notice in the Description page of Project Settings.


#include "MyInputActorThing.h"

#include "Kismet/KismetSystemLibrary.h"

// Sets default values
AMyInputActorThing::AMyInputActorThing()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyInputActorThing::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMyInputActorThing::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("TestAction", IE_Pressed, this, &AMyInputActorThing::Action);
}

void AMyInputActorThing::Action()
{
	UKismetSystemLibrary::PrintString(GetWorld(), inputText);
}

// Called every frame
void AMyInputActorThing::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

