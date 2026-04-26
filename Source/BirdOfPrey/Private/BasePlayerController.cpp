// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePlayerController.h"

// Sets default values
ABasePlayerController::ABasePlayerController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABasePlayerController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasePlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABasePlayerController::CalcScreenDimensions()
{
}

void ABasePlayerController::OnPlayerDeath(AController* Killer)
{
}

