// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "ABaseWeapon.h"
#include "CoreMinimal.h"
#include "UObject/Class.h"
#include "AgentInfo.generated.h"

/**
 * 
 */
UCLASS()
class UAgentInfo : public UStruct
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	FText Name;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	AABaseWeapon* WeaponType;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	USkeletalMesh* SkeletalMesh;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	UAnimInstance* AnimInstance;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	UTexture2D* Image;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float Speed;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float Health;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float MeshScale;
	
	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	FLinearColor Color;

};
