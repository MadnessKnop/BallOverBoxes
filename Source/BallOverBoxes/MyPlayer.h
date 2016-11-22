// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "MyPlayer.generated.h"

UCLASS()
class BALLOVERBOXES_API AMyPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyPlayer();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	UPROPERTY(EditAnywhere, Category = "Damage")
		int32 Health;
	UPROPERTY(EditAnywhere)
		float JumpHight;
	UPROPERTY(EditAnywhere)
		float Torque;

	//void MoveForward(float amount);
	void MoveRight(float amount);
	bool IsAlive();
	//bool InputLeftRight();
	//bool IsJumping();
	//bool IsFalling();
	int32 GetDamage();
	
};
