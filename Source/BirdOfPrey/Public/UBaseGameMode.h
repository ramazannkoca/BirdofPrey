// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "Camera/CameraActor.h"
#include "Engine/DataTable.h"
#include "ABasePowerup.h"
#include "ABaseGameAgent.h"
#include "UBasePlayerController.h"
#include "UBaseGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BIRDOFPREY_API AUBaseGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:


	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float WorldScrollSpeed;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FVector2D MaxRelativePlayerOffset;

	UPROPERTY(BlueprintReadOnly, Category = "BirdOfPrey")
	ACameraActor* WorldCameraActor;

	UPROPERTY(BlueprintReadOnly, Category = "BirdOfPrey")
	UDataTable* PlayerAgentInfoTable;

	UPROPERTY(BlueprintReadOnly, Category = "BirdOfPrey")
	FTimerHandle StationarySpawnTimer;

	UPROPERTY(BlueprintReadOnly, Category = "BirdOfPrey")
	FTimerHandle ShipSpawnTimer;

	UPROPERTY(BlueprintReadOnly, Category = "BirdOfPrey")
	float RespawnDelay = 3.0f;

	UPROPERTY(BlueprintReadOnly, Category = "BirdOfPrey")
	float SpawnOffset = 600.0f;

	UPROPERTY(BlueprintReadOnly, Category = "BirdOfPrey")
	TArray<AABasePowerup*> PowerUpList;

	UPROPERTY(BlueprintReadOnly, Category = "BirdOfPrey")
	float PickUpSpawnPercent = 0.3f;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bIsGameOverScreen = false;

public:
	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	FVector GetWorldScrollVelocity();
	
	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	ACameraActor* GetWorldCameraActor();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void OnPlayerDied(AUBasePlayerController* Player);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void OnEnemyDied(AABaseGameAgent* Enemy, AController* Killer);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	FVector GetPowerUpSpawnLocation(AActor* Enemy, AActor* Killer);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void StartGame();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void EndGame(bool bSucces);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnEnemyFrom(const TArray<AABaseGameAgent*>& ClassList);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void ResetGame();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void TrySpawnPowerUp(FVector Location);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	float GetDistanceTravelled();
};
