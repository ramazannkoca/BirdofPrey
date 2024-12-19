// Fill out your copyright notice in the Description page of Project Settings.


#include "ABaseGameAgent.h"

// Sets default values
AABaseGameAgent::AABaseGameAgent()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AABaseGameAgent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AABaseGameAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AABaseGameAgent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

float AABaseGameAgent::TakeDamage(float Damage)
{
	return 0.0f;
}
