// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelOpener.h"

#include "EditorDirectories.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ALevelOpener::ALevelOpener()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALevelOpener::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ALevelOpener::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (UGameplayStatics::GetTimeSeconds(GetWorld()) > secondsToSwitchAfter)
		UGameplayStatics::OpenLevel(this, levelNameToOpen);
}

