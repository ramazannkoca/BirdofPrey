// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ABaseGameAgent.h"
#include "ABaseProjectile.generated.h"

UCLASS()
class BIRDOFPREY_API AABaseProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AABaseProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void InitialiseProjectile(FVector Directon, float Speed);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void DealDamageTo(AActor* Damaging, float Damage);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void OnHit(AActor* OtherActor, UPrimitiveComponent* OverlappedComponent);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	ECollisionChannel GetInstigatorCollisionChannel();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void CheckForGroundUnitTarget();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	bool ShouldCheckForGroundTarget();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void AdjustToTarget();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	bool IsEnemyProjectile();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdOfPrey")
	void AdjustToDesiredZ();

public:
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "BirdOfPrey")
	float ProjectileSpeed = 1000;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
	float damage = 50;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
	UParticleSystem* DetonationEmitter;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
	float GroundUnitCheckDistance = 2000;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float GroundUnitCheckAngle = 10;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
	AABaseGameAgent* GroundTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float DesiredZ;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "BirdOfPrey")
	USoundBase* ImpactSound;

};
