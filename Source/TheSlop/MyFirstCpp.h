// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SpawnActor.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyFirstCpp.generated.h"

UCLASS()
class THESLOP_API AMyFirstCpp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyFirstCpp();

	UFUNCTION(BlueprintCallable)
	///<summary>
	/// Description about test
	///</summary>
	void Test();
	
	/// Description about patatje
	UFUNCTION(BlueprintCallable)
	void Patatje();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	AActor* myActor;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FString deleteTextPrefix = "prefix: ";

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool shouldDestroy;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FString spawmTextPrefix = "prefix: ";
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool shouldSpawn;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TSubclassOf<ASpawnActor> ActorToSpawn;

	FActorSpawnParameters parms;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
