// Fill out your copyright notice in the Description page of Project Settings.

#include "Tank.h"
#include "AITankController.h"


void AAITankController::BeginPlay()
{
	Super::BeginPlay();

	auto PlayerController = GetPlayerTank();

	/*if (!PlayerController)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI does not see player"));
	}
	else { UE_LOG(LogTemp, Warning, TEXT("AI sees Player possessing %s"), *(PlayerController->GetName())); }*/
}


void AAITankController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (GetPlayerTank()) {
		//TODO move towards player

		//Aim towards player
		GetControlledTank()->AimAt(GetPlayerTank()->GetActorLocation());
		//UE_LOG(LogTemp, Warning, TEXT("AI focusing on %s"), *PlayerLocation.ToString());
	}

}

ATank* AAITankController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}


ATank* AAITankController::GetPlayerTank() const
{
	
	return Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
}


