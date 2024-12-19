// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "ABaseWeapon.h"
#include "Animation/AnimInstance.h"
#include "UBasePlayerState.generated.h"

/**
 * 
 */

UCLASS()
class BIRDOFPREY_API AUBasePlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOFPrey")
	void AddScore(float Amount);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOFPrey")
	void ConsumeLife();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOFPrey")
	bool HasRemainingLives();

public:

	UPROPERTY(BlueprintReadWrite,Category = "BirdOFPrey")
	float PlayerScore;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOFPrey")
	int RemainingLives = 3;

	UPROPERTY(BlueprintReadWrite,Category = "BirdOFPrey")
	float TimeOfLastDeath;

};
