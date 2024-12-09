// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstSaveGame.h"

UFirstSaveGame::UFirstSaveGame()
{
	SlotName = "Autosave";
	SlotNumber = 0;
	UserIndex = 0;
	CharacterStats.WeaponName = TEXT("");
	CharacterStats.MapName = TEXT("");

}

void UFirstSaveGame::CreateSlot(const FString& SaveSlotName, int SaveSlotNumber)
{
		SlotName = SaveSlotName;
		SlotNumber = SaveSlotNumber;
		UserIndex = 0;

	
}

void UFirstSaveGame::CreateEmptySlot(int SaveSlotNumber)
{
	SlotName = "Empty Slot";
	SlotNumber = SaveSlotNumber;
	UserIndex = 0;
	CharacterStats.WeaponName = TEXT("");
	CharacterStats.MapName = TEXT("");
}
FString UFirstSaveGame::GetSlotName()
{
	return SlotName;
}