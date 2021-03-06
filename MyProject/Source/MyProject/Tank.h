// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Tank.generated.h"

class UTankBarrel;

class UTankAimingComponent;

UCLASS()
class MYPROJECT_API ATank : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATank();

	virtual void BeginPlay() override;
	
	UFUNCTION(BlueprintCallable, Category = Setup)
	void SetBarrelReference(UTankBarrel* BarrelToSet);

protected:
	// Called when the game starts or when spawned
	UTankAimingComponent * TankAimingComponent = nullptr;
	
public:	

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void AimAt(FVector HitLocation);
	
private:
	UPROPERTY(EditAnywhere, Category = Firing)
	float LaunchSpeed = 100000; //TODO  Find a good fireing speed


};
