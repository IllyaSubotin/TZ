// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class WORK_TZ_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	
	AMyCharacter();

protected:

	void MoveRight(float Value);

public:	
	
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent);
};
