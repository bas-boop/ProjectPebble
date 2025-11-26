// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelOpener.generated.h"

UCLASS()
class THESLOP_API ALevelOpener : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALevelOpener();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FName levelNameToOpen;

	UPROPERTY(EditAnywhere, Blueprintable)
	float secondsToSwitchAfter = 5;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
