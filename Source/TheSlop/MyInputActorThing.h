// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyInputActorThing.generated.h"

class UInputMappingContext;
class UInputAction;

UCLASS()
class THESLOP_API AMyInputActorThing : public APawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyInputActorThing();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FString inputText;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Action();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
