// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "BasePlayerState.generated.h"

/**
 * 
 */
UCLASS()
class ABasePlayerState : public APlayerState
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float PlayerScore;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	int RemainingLives;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float TimeOfLastDeath;

public:
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AddScore(float Amount);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ConsumeLife();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool HasRemainingLife();
};
