// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAIController.h"

// Sets default values
ABaseAIController::ABaseAIController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseAIController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



void ABaseAIController::AimTarget(FVector AimTarget)
{
}

void ABaseAIController::SelectTarget()
{

}


void ABaseAIController::CheckFire()
{

}

void ABaseAIController::UpdateAim()
{
}

bool ABaseAIController::ShouldStartFire()
{
	bool ReturnValue = false;
	return ReturnValue;
}

bool ABaseAIController::ShouldStopFire()
{
	bool ReturnValue = false;
	return ReturnValue;
}

void ABaseAIController::StartFire()
{
}

void ABaseAIController::StopFire()
{
}

bool ABaseAIController::ShouldUpdateAim()
{
	bool ShouldUpdateAim = false;
	return ShouldUpdateAim;
}
