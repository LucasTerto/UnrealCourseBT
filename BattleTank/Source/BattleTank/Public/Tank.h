// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Tank.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTankDelegate);
//Forward Declarations

UCLASS()
class BATTLETANK_API ATank : public APawn
{
	GENERATED_BODY()

public:
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const & DamageEvent, class AController * EventInstigator, AActor * DamageCauser) override;

	//Return current health as a percentage 
	UFUNCTION(BlueprintPure, Category = Health)
	float GetHealthPercentage();

	FTankDelegate OnDeath;
private:
	ATank();
	void BeginPlay() override;
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	int32 StartingHealth = 100;
	UPROPERTY(VisibleAnywhere, Category = Health)
	int32 CurrentHealth;
};