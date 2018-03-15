// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AITankController.generated.h"


class ATank;
/**
 * 
 */
UCLASS()
class AAITankController : public AAIController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

public:
	ATank * GetControlledTank() const;
	ATank * GetPlayerTank() const;
	
};
