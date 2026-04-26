// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "BaseAIController.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BaseEnemyShip.generated.h"

UCLASS()
class ABaseEnemyShip : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABaseEnemyShip();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


private:

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	ABaseAIController* ShipAIController;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Move();
};
