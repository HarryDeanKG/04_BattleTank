// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTankAimingComponent();

	void  SetBarrelReference(UStaticMeshComponent* BarrelToSet);

	void AimAt(FVector HitLocation, float LaunchSpeed);

	void MoveBarrel(FVector AimDirection);

private:
	UStaticMeshComponent * Barrel = nullptr;
	
};
