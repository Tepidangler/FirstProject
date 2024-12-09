// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveSlotWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/ScrollBox.h"
#include "FirstSaveGame.h"
#include "FirstProjectGameInstance.h"
#include "MainPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "SaveSlotPanelWidget.h"


void USaveSlotWidget::NativeConstruct()
{
	Super::NativeConstruct();
	UFirstProjectGameInstance* GameInstance = Cast<UFirstProjectGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	check(GameInstance);

	MapName->SetText(FText::FromString(GameInstance->SavedGameArray[USaveSlotPanelWidget::GetChildIndex(this) + 1 ]->CharacterStats.MapName));
	Date->SetText(FText::FromString(GameInstance->SavedGameArray[USaveSlotPanelWidget::GetChildIndex(this) + 1]->CharacterStats.Date));
	Time->SetText(FText::FromString(GameInstance->SavedGameArray[USaveSlotPanelWidget::GetChildIndex(this) + 1]->CharacterStats.Time));
	SlotName->SetText(FText::FromString(GameInstance->SavedGameArray[USaveSlotPanelWidget::GetChildIndex(this) + 1]->SlotName));
	SlotNumber = GameInstance->SavedGameArray[USaveSlotPanelWidget::GetChildIndex(this) + 1]->SlotNumber;
	SlotButton->IsFocusable = true;
	
}



void USaveSlotWidget::SaveGame(int SlotToUse)
{
	UFirstProjectGameInstance* GameInstance = Cast<UFirstProjectGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	check(GameInstance);

	GameInstance->SaveGame(SlotToUse, false);

	RebuildWidget();
	OnWidgetRebuilt();

}

void USaveSlotWidget::LoadGame(FString SlotToUse)
{
	UFirstProjectGameInstance* GameInstance = Cast<UFirstProjectGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	check(GameInstance);

	GameInstance->LoadGame(SlotToUse);
}

