// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MatSwitcher.generated.h"

UCLASS()
class THESLOP_API AMatSwitcher : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMatSwitcher();

	// Switches the current material to the other material
	UFUNCTION(BlueprintCallable)
	void SwitchMat(UStaticMeshComponent* targetMat);
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UStaticMesh* mesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* MyMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UMaterial* startMat;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UMaterial* endMat;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	void SwitchMat();
	bool isSwitched;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
