// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/GameplayStatics.h"
#include "../Public/TankBarrel.h"


void UTankBarrel::Elevate(float RelativeSpeed)
{
	//Move the barrel the right amount this frame
	//Give a max elevation speed, and fram time
	//UE_LOG(LogTemp, Warning, TEXT("Tank Barrel"));
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, 1);

	auto ElevationChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto RawNewElevation = RelativeRotation.Pitch + ElevationChange;

	auto Elevation = FMath::Clamp<float>(
		RawNewElevation,
		MinElevationDegrees,
		MaxElevationDegrees);

	SetRelativeRotation(FRotator(Elevation, 0, 0));
}

