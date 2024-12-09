// Copyright Epic Games, Inc. All Rights Reserved.


#include "FirstProjectGameModeBase.h"
#include "FirstSaveGame.h"
#include "CharacterBase.h"
#include "MainPlayerController.h"
#include "ItemStorage.h"
#include "Kismet/GameplayStatics.h"
#include "WeaponBase.h"
#include "FirstInterface.h"

/**
void AFirstProjectGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	MC = IFirstInterface::Execute_SetPlayerRef(UGameplayStatics::GetPlayerCharacter(this, 0));
	PC = Cast<AMainPlayerController>(UGameplayStatics::GetPlayerController(this, 0));
}

void AFirstProjectGameModeBase::SaveGame()
{
	check(MC);

	TArray<uint8> InSaveData;

	UFirstSaveGame* SaveGameInstance = Cast<UFirstSaveGame>(UGameplayStatics::CreateSaveGameObject(UFirstSaveGame::StaticClass()));

	SaveGameInstance->CharacterStats.Health = MC->Health;
	SaveGameInstance->CharacterStats.MaxHealth = MC->MaxHealth;
	SaveGameInstance->CharacterStats.Stamina = MC->Stamina;
	SaveGameInstance->CharacterStats.MaxStamina = MC->MaxStamina;
	SaveGameInstance->CharacterStats.Dirhams = MC->Dirhams;
	SaveGameInstance->CharacterStats.Location = MC->GetActorLocation();
	SaveGameInstance->CharacterStats.Rotation = MC->GetActorRotation();
	SaveGameInstance->CharacterStats.Date = FDateTime::Now().GetDate().ToString();
	SaveGameInstance->CharacterStats.Time = FDateTime::Now().GetTimeOfDay().ToString();
	FString MapName = GetWorld()->GetMapName();
	MapName.RemoveFromStart(GetWorld()->StreamingLevelsPrefix);
	SaveGameInstance->CharacterStats.MapName = MapName;


	AWeaponBase* EquippedWeapon = MC->EquippedWeapon;
	SaveGameInstance->CharacterStats.WeaponName = EquippedWeapon->WeaponName;
	

	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SaveGameInstance->SlotName, SaveGameInstance->UserIndex);

	//SavedGameArray.Add(SaveGameInstance);

}

void AFirstProjectGameModeBase::LoadGame(bool bSetPosition)
{
	TArray <uint8> OutSaveData;
	check(PC);

	PC->ToggleLoadingScreen();
	UFirstSaveGame* LoadGame = Cast<UFirstSaveGame>(UGameplayStatics::CreateSaveGameObject(UFirstSaveGame::StaticClass()));

	UGameplayStatics::LoadDataFromSlot(OutSaveData, LoadGame->SlotName, LoadGame->UserIndex);

	UFirstSaveGame* LoadGameInstance = Cast<UFirstSaveGame>(UGameplayStatics::LoadGameFromMemory(OutSaveData));

	if (LoadGameInstance)
	{
		MC->Health = LoadGameInstance->CharacterStats.Health;
		MC->MaxHealth = LoadGameInstance->CharacterStats.MaxHealth;
		MC->Stamina = LoadGameInstance->CharacterStats.Stamina;
		MC->MaxStamina = LoadGameInstance->CharacterStats.MaxStamina;
		MC->Dirhams = LoadGameInstance->CharacterStats.Dirhams;

		if (MC->WeaponStorage)
		{
			AItemStorage* Weapons = GetWorld()->SpawnActor<AItemStorage>(MC->WeaponStorage);
			if (Weapons)
			{
				FString WeaponName = LoadGameInstance->CharacterStats.WeaponName;
				if (Weapons->WeaponMap.Contains(WeaponName))
				{
					AWeaponBase* WeaponToEquip = GetWorld()->SpawnActor<AWeaponBase>(Weapons->WeaponMap[WeaponName]);
					WeaponToEquip->Equip(MC);
				}

			}
		}

		if (!MC->Alive())
		{
			MC->SetMovementStatus(EMovementStatus::EMS_Normal);
			MC->GetMesh()->bPauseAnims = false;
			MC->GetMesh()->bNoSkeletonUpdate = false;
		}


		if (bSetPosition)
		{
			MC->SetActorLocation(LoadGameInstance->CharacterStats.Location);
			MC->SetActorRotation(LoadGameInstance->CharacterStats.Rotation);
		}

		if (LoadGameInstance->CharacterStats.MapName != TEXT(""))
		{
			FName MapName(*LoadGameInstance->CharacterStats.MapName);
			MC->SwitchLevel(MapName);
		}

		check(PC);
		FInputModeGameOnly GameOnly;
		PC->SetInputMode(GameOnly);
		PC->ToggleLoadingScreen();
	}




}

void AFirstProjectGameModeBase::LoadGameNoSwitch()
{
	TArray <uint8> OutSaveData;
	check(PC);
	PC->ToggleLoadingScreen();

	//UGameplayStatics::LoadDataFromSlot(OutSaveData, LoadGame->SlotName, LoadGame->UserIndex);

	UFirstSaveGame* LoadGameInstance = Cast<UFirstSaveGame>(UGameplayStatics::LoadGameFromMemory(OutSaveData));

	if (LoadGameInstance)
	{
		MC->Health = LoadGameInstance->CharacterStats.Health;
		MC->MaxHealth = LoadGameInstance->CharacterStats.MaxHealth;
		MC->Stamina = LoadGameInstance->CharacterStats.Stamina;
		MC->MaxStamina = LoadGameInstance->CharacterStats.MaxStamina;
		MC->Dirhams = LoadGameInstance->CharacterStats.Dirhams;
		if (MC->WeaponStorage)
		{

			AItemStorage* Weapons = GetWorld()->SpawnActor<AItemStorage>(MC->WeaponStorage);
			if (Weapons)
			{
				FString WeaponName = LoadGameInstance->CharacterStats.WeaponName;
				if (Weapons->WeaponMap.Contains(WeaponName))
				{
					AWeaponBase* WeaponToEquip = GetWorld()->SpawnActor<AWeaponBase>(Weapons->WeaponMap[WeaponName]);
					WeaponToEquip->Equip(MC);
				}

			}
		}

		if (!MC->Alive())
		{
			MC->SetMovementStatus(EMovementStatus::EMS_Normal);
			MC->GetMesh()->bPauseAnims = false;
			MC->GetMesh()->bNoSkeletonUpdate = false;
		}
	}

	PC->ToggleLoadingScreen();
}
*/ 