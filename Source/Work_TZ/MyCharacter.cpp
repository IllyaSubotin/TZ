// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 
}

void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyCharacter::MoveRight);
}

void AMyCharacter::MoveRight(float Value)
{
	AddMovementInput(GetActorRightVector() * Value);
}
// Called to bind functionality to input


