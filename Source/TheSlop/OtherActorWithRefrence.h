// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OtherActorWithRefrence.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THESLOP_API UOtherActorWithRefrence : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOtherActorWithRefrence();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	AActor* myActor;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
