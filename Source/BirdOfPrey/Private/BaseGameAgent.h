// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ABaseWeapon.h"
#include "BaseGameAgent.generated.h"

UCLASS()
class ABaseGameAgent : public APawn
{
	GENERATED_BODY()

public:
	ABaseGameAgent();
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float Points;


protected:
	virtual void BeginPlay() override;



private:
	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float MoveSpeed;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	AABaseWeapon* Weapon;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	TSubclassOf<AABaseWeapon> DefaultWeaponType;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float Health;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	bool bCheckForOutOfBonds;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float OutOfBondsCheckTolerrance;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	FName WeaponSocketName;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	EAttachmentRule EAttachment;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	FVector TargetLocation;


public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ChangeWeaponType(TSubclassOf<AActor> NewWeaponType);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetWeaponSpawnTransform();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnDefaultWeapon();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	float TakeDamage(float Damage);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool IsAlive(bool Alive);


	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Died(APlayerController* Killer);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayHitEffects();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CleanUp();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey") 
	void ApplyAgentInfo(FText NewAgentInfoName, TSubclassOf<AActor> NewAgentInfoWeaponType, USkeletalMesh* NewAgentInfoSkeletalMesh, UAnimInstance* NewAgentInfoAnimInstance, UTexture2D* NewAgentInfoImage,float NewAgentInfoSpeed, float NewAgentInfoHealth, float NewAgentInfoMeshScale, FColor NewAgentInfoColor );

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AimAt(FVector AimTarget);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayDeathEffects();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckForOutOfBonds();
};
