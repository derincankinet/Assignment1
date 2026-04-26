// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "BasePowerUp.h"
#include "BaseGameAgent.h"
#include "BasePlayerController.h"
#include "Camera/CameraComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BaseGameMode.generated.h"

/**
 * 
 */
UCLASS()
class ABaseGameMode : public AGameModeBase
{
	GENERATED_BODY()
	

private:
	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float WorldScroolSpeed;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	FVector2D MaxRelativePlayerOffset;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	UCameraComponent* WorldCameraActor;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	UDataTable* PlayerAgentInfoTable;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float RespawnDelay;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float SpawnOffset;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	FTimerHandle StationarySpawnTimer;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	FTimerHandle ShipSpawnTimer;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	TArray<ABasePowerUp*> PowerUpList;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float PickUpSpawnPercent;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	bool IsGameOverScreen;

public:
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FVector GetWorldScrollVelocity();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	UCameraComponent* GetWorldCameraActor();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	ABasePlayerController* OnPlayerDied(ABasePlayerController* Player);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnEnemyDied(ABaseGameAgent* Enemy, AController* Killer);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void EndGame(bool Succes);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnEnemyFrom(TArray<ABaseGameAgent*> ClassList);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ResetGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void TrySpawnPowerUp(FVector Location);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetDistanceTravelled(float ReturnValue);


};
