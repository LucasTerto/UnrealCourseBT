// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"

//Enum for naming states
UENUM()
enum class EFiringState :uint8
{
	Reloading,
	Aiming,
	Locked,
	OutOfAmmo
};

//Forward declaration
class UTankBarrel; 
class UTankTurret;
class AProjectile;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLETANK_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UTankBarrel* Barrel = nullptr;
	UTankTurret* Turret = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = Firing)
	int32 RoundsLeft = 3;
	UPROPERTY(EditDefaultsOnly, Category = Firing)
	float LaunchSpeed = 400000; //find default
	FVector AimDirection;
	void MoveBarrelTowards(FVector AimDirection) const;

	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

	bool IsBarrelMoving();


protected:
	UPROPERTY(BlueprintReadOnly, Category = State)
	EFiringState FiringState = EFiringState::Reloading;

public:
	UPROPERTY(EditDefaultsOnly, Category = Firing)
	float ReloadTime = 3.0f;

	double LastFireTime = 0.0;
	
	EFiringState GetFiringState() const;

	UFUNCTION(BlueprintCallable, Category = Setup)
	void Initialise(UTankBarrel* BarreltoSet, UTankTurret* TurrettoSet);
	// Sets default values for this component's properties
	UTankAimingComponent();

	void AimAt(FVector AimTarget);

	UFUNCTION(BlueprintCallable, Category = Firing)
	void Fire();

	UPROPERTY(EditDefaultsOnly, Category = Setup)
	TSubclassOf<AProjectile> ProjectileBlueprint;

	UFUNCTION(BlueprintCallable, Category = Firing)
	int32 GetRoundsLeft() const;
};
