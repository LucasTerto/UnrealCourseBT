// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NavMovementComponent.h"
#include "TankMovementComponent.generated.h"

class UTankTrack;
/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankMovementComponent : public UNavMovementComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = Input)
	void IntendMoveForward(float Throw);
	UFUNCTION(BlueprintCallable, Category = Setup)
	void Initialise(UTankTrack* LeftTracktoSet, UTankTrack *RightTracktoSet);

	UFUNCTION(BlueprintCallable, Category = Input)
	void IntendTurnRight(float Throw);


private:
	UTankTrack *LeftTrack = nullptr;
	UTankTrack *RightTrack = nullptr;

	//Call from the pathfinding logic by the AI controller
	virtual void RequestDirectMove(const FVector& MoveVelocity, bool bForceMaxSpeed) override;

};
