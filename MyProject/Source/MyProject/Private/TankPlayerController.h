// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"


UCLASS()
class ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
		virtual void BeginPlay() override;

		virtual void Tick(float DeltaTime) override;

public:
		ATank* GetControlledTank() const;
	
		//start the tank so that it hits at the crosshair
		void AimTowardsCrosshair();


private:
		bool GetSightRayHitLocation(FVector& OutHitLocation) const;
		bool GetLookDirection(FVector2D ScreenLocation, FVector & LookDirection) const;

		bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;

		UPROPERTY(EditAnywhere)
		float CrossHairXLocation = 0.5;

		UPROPERTY(EditAnywhere)
		float CrossHairYLocation = 0.33;

		UPROPERTY(EditAnywhere)
		float LineTraceRange = 1000000.0;

};
