// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawn_CloseCombat.h"

// Sets default values
APawn_CloseCombat::APawn_CloseCombat()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APawn_CloseCombat::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APawn_CloseCombat::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APawn_CloseCombat::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

