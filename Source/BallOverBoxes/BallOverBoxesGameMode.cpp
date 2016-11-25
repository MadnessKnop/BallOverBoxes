// Fill out your copyright notice in the Description page of Project Settings.

#include "BallOverBoxes.h"
#include "BallOverBoxesGameMode.h"
#include "HUDInterface.h"
#include "BallPLayer.h"
#include "Blueprint/UserWidget.h"

void ABallOverBoxesGameMode::BeginPlay()
{
	Super::BeginPlay();

	//AMyPlayer* MyCharacter = Cast<AMyPlayer>(UGameplayStatics::GetPlayerPawn(this, 0));

	if (BP_Interface_PlayerClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), BP_Interface_PlayerClass);

		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}
}

ABallOverBoxesGameMode::ABallOverBoxesGameMode() : Super()
{
	HUDClass = AHUDInterface::StaticClass();
	DefaultPawnClass = ABallPlayer::StaticClass();
}
