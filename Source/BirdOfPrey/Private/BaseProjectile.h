// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "BaseGameAgent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseProjectile.generated.h"

UCLASS()
class ABaseProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float ProjectileSpeed;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float Damage;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	UParticleSystem* DetonationEmitter;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float GroundUnitCheckDistance;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	ABaseGameAgent* GroundTarget;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	float DesiredZ;

	UPROPERTY(EditAnywhere, Category = "BirdOfPrey")
	USoundBase* ImpactSound;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void InitilaseProjectile(FVector Direction, float Speed);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void DealDamageTo(AActor* Damaging, float DealtDamage);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor );

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	ECollisionChannel GetInstigatorCollisionChannel();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckForGroundUnitTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldCheckForGroundTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AdjustToTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool IsEnemyProjectile();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AdjustToDesiredZ();

};
