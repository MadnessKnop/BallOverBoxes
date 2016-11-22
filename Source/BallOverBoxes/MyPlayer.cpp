// Fill out your copyright notice in the Description page of Project Settings.

#include "BallOverBoxes.h"
#include "MyPlayer.h"


// Sets default values
AMyPlayer::AMyPlayer()
{
	Health = 1;
	float JumpHight = 100.0f;
	float Torque = 100.0f;

 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPlayer::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AMyPlayer::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);
	//InputComponent->BindAxis("MoveForward", this, &AMyPlayer::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AMyPlayer::MoveRight);

}


//void AMyPlayer::MoveForward(float amount)
//{
//	if (Controller && amount)
//	{
//		AddMovementInput(GetActorForwardVector(), amount);
//	}
//}

void AMyPlayer::MoveRight(float amount)
{
	if (Controller && amount)
	{
		AddMovementInput(GetActorRightVector(), amount);
	}
}

bool AMyPlayer::IsAlive()
{
	if (Health == 0)
	{
		Destroy();
		return false;
	}
	else
	{
		return true;
	}
	return true;
}

//bool AMyPlayer::InputLeftRight()
//{
//	return false;
//}
//
//bool AMyPlayer::IsJumping()
//{
//	return false;
//}
//
//bool AMyPlayer::IsFalling()
//{
//	return false;
//}

int32 AMyPlayer::GetDamage()
{
	return int32();
}

