// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
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

};
