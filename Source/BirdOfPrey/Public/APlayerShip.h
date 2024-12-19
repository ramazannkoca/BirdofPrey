// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ABaseShip.h"
#include "UBasePlayerController.h"
#include "APlayerShip.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API AAPlayerShip : public AABaseShip
{
	GENERATED_BODY()
	

public:

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	float GetShipVelocity(FVector& Direction);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void ClampToCameraBounds();
	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	float GetShipAxisAdjustment(float Dist, float Max);
	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	FVector CalcOutofBoundsAdjustment();
	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void GetPlayerAgentInfo(APlayerController* Player);
	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void ShouldSpawnAIController();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void UpdateHoverPitch();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	bool HasDiedRecently();

	virtual float TakeDamage(float Damage) override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	AUBasePlayerController* BasePlayerController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float InvulnerabilityTime = 2;

};
