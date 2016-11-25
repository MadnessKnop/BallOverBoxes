// Fill out your copyright notice in the Description page of Project Settings.

#include "BallOverBoxes.h"
#include "BallPlayer.h"


// Sets default values
ABallPlayer::ABallPlayer()
{
	//Ball = CreateDefaultSubobject<UStaticMeshComponent>
	
	Torque = 10000000.0f;
	JumpHight = 100000.0f;
	CanJump = true;

}

// Called to bind functionality to input
void ABallPlayer::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

void ABallPlayer::MoveRight(float Val)
{
}

void ABallPlayer::Jump()
{
}


