// Fill out your copyright notice in the Description page of Project Settings.

#include "AITankController.h"

void AAITankController::BeginPlay()
{
	Super::BeginPlay();

	auto PlayerController = GetPlayerTank();

	if (!PlayerController)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI does not see player"));
	}
	else { UE_LOG(LogTemp, Warning, TEXT("AI sees Player possessing %s"), *(PlayerController->GetName())); }
}


void AAITankController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//UE_LOG(LogTemp, Warning, TEXT("TickWorking"));

}

ATank* AAITankController::GetControlledTank() const
{

	return Cast<ATank>(GetPawn());
}


ATank* AAITankController::GetPlayerTank() const
{

	return Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
}


