// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGameMode.h"

FVector ABaseGameMode::GetWorldScrollVelocity()
{
	return FVector();
}

UCameraComponent* ABaseGameMode::GetWorldCameraActor()
{
	return nullptr;
}

ABasePlayerController* ABaseGameMode::OnPlayerDied(ABasePlayerController* Player)
{
	return nullptr;
}

void ABaseGameMode::OnEnemyDied(ABaseGameAgent* Enemy, AController* Killer)
{
}

void ABaseGameMode::StartGame()
{
}

void ABaseGameMode::EndGame(bool Succes)
{
}

void ABaseGameMode::SpawnEnemyFrom(TArray<ABaseGameAgent*> ClassList)
{
}

void ABaseGameMode::ResetGame()
{
}

void ABaseGameMode::TrySpawnPowerUp(FVector Location)
{
}

void ABaseGameMode::GetDistanceTravelled(float ReturnValue)
{
}
