// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ABaseWeapon.h"
#include "ProjectileWeapon.generated.h"

/**
 * 
 */
UCLASS()
class AProjectileWeapon : public AABaseWeapon
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	AProjectileWeapon* ProjectileType;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float RefireTime;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float LastFireTime;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	int NumShots;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	bool bIsFiring;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float DesiredZ;

public:
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	AProjectileWeapon* SpawnProjectile(FTransform SpawnTransform);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FTransform GetProjectileSpawnTransform(int ShotNumber);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ReadyToFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool IsFiringChild();

};
