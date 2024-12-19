// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "UBasePlayerController.h"
#include "ABaseGameAgent.h"
#include "UBaseAIController.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API AUBaseAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void SelectTarget();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void AimAt(FVector AimTarget);
	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void CheckFire();
	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	bool ShouldStopFire();
	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void UpdateAim();
	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	bool ShouldStartFire();
	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void StartFire();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void StopFire();
	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	bool ShouldUpdateAim();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	AUBasePlayerController* Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	AABaseGameAgent* ControlledAgent;
};
