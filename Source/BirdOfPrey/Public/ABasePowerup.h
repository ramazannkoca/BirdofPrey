// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "APlayerShip.h"
#include "ABasePowerup.generated.h"

UCLASS()
class BIRDOFPREY_API AABasePowerup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AABasePowerup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	UFUNCTION(BlueprintImplementableEvent, Category = "BirfOfPrey")
	void Apply(AAPlayerShip* PlayerShip);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirfOfPrey")
	void PlayEffects();
};
