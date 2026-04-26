// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGameAgent.h"

// Sets default values
ABaseGameAgent::ABaseGameAgent()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseGameAgent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseGameAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseGameAgent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABaseGameAgent::ChangeWeaponType(TSubclassOf<AActor> NewWeaponType)
{

}

void ABaseGameAgent::GetWeaponSpawnTransform()
{

}

void ABaseGameAgent::SpawnDefaultWeapon()
{

}

void ABaseGameAgent::StartFire()
{

}

void ABaseGameAgent::StopFire()
{

}

float ABaseGameAgent::TakeDamage(float Damage)
{
	float ActualDamage = 1;
	return ActualDamage;
}

bool ABaseGameAgent::IsAlive(bool Alive)
{
	return Alive;
}

void ABaseGameAgent::Died(APlayerController* Killer)
{

}

void ABaseGameAgent::PlayHitEffects()
{

}

void ABaseGameAgent::CleanUp()
{

}

void ABaseGameAgent::ApplyAgentInfo(FText NewAgentInfoName, TSubclassOf<AActor> NewAgentInfoWeaponType, USkeletalMesh* NewAgentInfoSkeletalMesh, UAnimInstance* NewAgentInfoAnimInstance, UTexture2D* NewAgentInfoImage, float NewAgentInfoSpeed, float NewAgentInfoHealth, float NewAgentInfoMeshScale, FColor NewAgentInfoColor)
{

}

void ABaseGameAgent::AimAt(FVector AimTarget)
{

}

void ABaseGameAgent::PlayDeathEffects()
{

}

void ABaseGameAgent::CheckForOutOfBonds()
{

}

