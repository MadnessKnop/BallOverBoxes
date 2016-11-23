// Fill out your copyright notice in the Description page of Project Settings.

#include "BallOverBoxes.h"
#include "BallOverBoxesGameMode.h"
#include "HUDInterface.h"
#include "MyPlayer.h"
#include "Blueprint/UserWidget.h"

void ABallOverBoxesGameMode::BeginPlay()
{
	Super::BeginPlay();

	AMyPlayer* MyCharacter = Cast<AMyPlayer>(UGameplayStatics::GetPlayerPawn(this, 0));

	if (BPInterfacePlayerClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), BPInterfacePlayerClass);

		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}
}

ABallOverBoxesGameMode::ABallOverBoxesGameMode()
{
	HUDClass = AHUDInterface::StaticClass();
}
