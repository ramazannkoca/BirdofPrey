// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ABaseWeapon.h"
#include <BaseGameInstance.h>
#include "ABaseGameAgent.generated.h"

UCLASS()
class BIRDOFPREY_API AABaseGameAgent : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AABaseGameAgent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void ChangeWeaponType(AABaseWeapon* NewWeaponType);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	FTransform GetWeaponSpawnTransform();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void SpawnDefaultWeapon();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void StartFire();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void StopFire();

	UFUNCTION(Category = "BirdOfPrey")
	virtual float TakeDamage(float Damage);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	bool IsAlive();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void Died(APlayerController* Killer);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void PlayHitEffects();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void CleanUp();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void ApplyAgentInfo(FSAgentInfo NewAgentInfo);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void AimAt(FVector AimTarget);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void PlayDeathEffects();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void CheckForOutOfBounds();

public:
	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float MoveSpeed = 50;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	AABaseWeapon* Weapon;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	TSubclassOf<AABaseWeapon> DefaultWeaponType;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float health = 100;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	FSAgentInfo AgentInfo;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float Points = 100;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	bool bCheckForOutOfBounds;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float OutOfBoundsCheckTolerance;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	FName WeaponSocketName = "EyeLoc";

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	EAttachmentRule WeaponAttachRule;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	FVector TargetLocation;

};
