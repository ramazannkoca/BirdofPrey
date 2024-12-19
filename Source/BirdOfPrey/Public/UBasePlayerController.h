// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UBasePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API AUBasePlayerController : public APlayerController
{
	GENERATED_BODY()
	

public:
	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void CalcScreenDimensions();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void OnPlayerDeath(AController* Controller);

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bDiedWhileFiring;
};
