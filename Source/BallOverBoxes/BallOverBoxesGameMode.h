// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameMode.h"
#include "BallOverBoxesGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BALLOVERBOXES_API ABallOverBoxesGameMode : public AGameMode
{
	GENERATED_BODY()

		virtual void BeginPlay() override;
public:
	ABallOverBoxesGameMode();
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", Meta = (BlueprintProtected = "true"))
		TSubclassOf<class UUserWidget> BPInterfacePlayerClass;

	UPROPERTY()
		class UUserWidget * CurrentWidget;
};
