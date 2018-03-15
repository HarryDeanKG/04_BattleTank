// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent), hidecategories = ("Collision"))
class MYPROJECT_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
	
public:
	//-1 is max downwards, +1 is the maximum upwards.
	void Elevate(float RelativeSpeed);

private:
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxDegreesPerSecond = 20;

	UPROPERTY(EditAnywhere, Category = Setup)
	float MinElevationDegrees = 0;

	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxElevationDegrees = 40;

};
