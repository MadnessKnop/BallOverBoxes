// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "BallPlayer.generated.h"

UCLASS()
class BALLOVERBOXES_API ABallPlayer : public APawn
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Ball, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* Ball;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Ball, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Ball, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;

public:
	// Sets default values for this pawn's properties
	ABallPlayer();
	UPROPERTY(EditAnywhere, Category = Ball)
	float JumpHight;
	UPROPERTY(EditAnywhere, Category = Ball)
	float Torque;
	bool CanJump;

protected:
	void MoveRight(float Val);
	void Jump();
	//virtual void NotifyHit(
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

public:
	FORCEINLINE class UStaticMeshComponent* GetBall() const 
	{
		return Ball;
	}
	FORCEINLINE class USpringArmComponent* GetSpringArm() const
	{
		return SpringArm;
	}
	FORCEINLINE class UCameraComponent* GetCamera() const
	{
		return Camera; 
	}
};
