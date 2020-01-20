// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTrack.generated.h"

/**
 * Tank Track is used to set maximum driving force, and apply forces to the tank
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankTrack : public UStaticMeshComponent
{
	GENERATED_BODY()
	
private:
	virtual void BeginPlay() override; 
	void DriveTrack(float CurrentThrottle);

	TArray<class ASprungWheel*> GetWheels() const;

	UPROPERTY(EditDefaultsOnly)
	float TrackMaxDrivingForce = 40000000.0f; // assume 40 ton tank and 1g acceleration

public:

	UTankTrack();
	UFUNCTION(BlueprintCallable, Category = Input)
	void SetThrottle(float Throttle);
};