// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/TankAimingComponent.h"
#include "Tank.h"


// Sets default values
ATank::ATank()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	TankAimingComponent = CreateEditorOnlyDefaultSubobject<UTankAimingComponent>(FName("AimingComponenet"));

}

// Called when the game starts or when spawned
void ATank::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATank::SetBarrelReference(UTankBarrel * BarrelToSet)
{
	TankAimingComponent->SetBarrelReference(BarrelToSet);
}



// Called to bind functionality to input
void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ATank::AimAt(FVector HitLocation)
{
	TankAimingComponent->AimAt(HitLocation, LaunchSpeed);
}

