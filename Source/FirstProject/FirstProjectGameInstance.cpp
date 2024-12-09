// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstProjectGameInstance.h"
#include "FirstSaveGame.h"
#include "CharacterBase.h"
#include "EnemyBase.h"
#include "MainPlayerController.h"
#include "ItemStorage.h"
#include "Kismet/GameplayStatics.h"
#include "WeaponBase.h"
#include "TimerManager.h"
#include "FirstInterface.h"
#include "Components/CapsuleComponent.h"

const FString UFirstProjectGameInstance::AutoSaveSlot = "AutoSave";
const FString UFirstProjectGameInstance::FirstSaveSlot = "Save_01";
const FString UFirstProjectGameInstance::SecondSaveSlot = "Save_02";
const FString UFirstProjectGameInstance::ThirdSaveSlot = "Save_03";
const FString UFirstProjectGameInstance::FourthSaveSlot = "Save_04";
const FString UFirstProjectGameInstance::FifthSaveSlot = "Save_05";
const FString UFirstProjectGameInstance::SixthSaveSlot = "Save_06";
const FString UFirstProjectGameInstance::SeventhSaveSlot = "Save_07";
const FString UFirstProjectGameInstance::EighthSaveSlot = "Save_08";
const FString UFirstProjectGameInstance::NinethSaveSlot = "Save_09";
const FString UFirstProjectGameInstance::TenthSaveSlot = "Save_10";
const FString UFirstProjectGameInstance::EleventhSaveSlot = "Save_11";
const FString UFirstProjectGameInstance::TwelfthSaveSlot = "Save_12";
const FString UFirstProjectGameInstance::ThirteenthSaveSlot = "Save_13";
const FString UFirstProjectGameInstance::FourteenthSaveSlot = "Save_14";
const FString UFirstProjectGameInstance::FifteenthSaveSlot = "Save_15";
const FString UFirstProjectGameInstance::SixteenthSaveSlot = "Save_16";
const FString UFirstProjectGameInstance::SeventeenthSaveSlot = "Save_17";
const FString UFirstProjectGameInstance::EighteenthSaveSlot = "Save_18";
const FString UFirstProjectGameInstance::NineteenthSaveSlot = "Save_19";
const FString UFirstProjectGameInstance::TwentithSaveSlot = "Save_20";

void UFirstProjectGameInstance::Init()
{
	SavedGameArray.Reserve(21);
	for (int i = 0; i <= 21; i++)
	{
		bool bDoesSaveExist = UGameplayStatics::DoesSaveGameExist(GetSaveSlotName(i), 0);
		if (bDoesSaveExist)
		{
			UFirstSaveGame* LoadGameInstance = Cast<UFirstSaveGame>(UGameplayStatics::LoadGameFromSlot(GetSaveSlotName(i), 0));
			SavedGameArray.Insert(LoadGameInstance, i);

		}
		else
		{
			UFirstSaveGame* SaveGameInstance = Cast<UFirstSaveGame>(UGameplayStatics::CreateSaveGameObject(UFirstSaveGame::StaticClass()));
			SaveGameInstance->CreateEmptySlot(i);
			SavedGameArray.Insert(SaveGameInstance, i);
		}


	}
	Super::Init();
	
}

void UFirstProjectGameInstance::SaveGame(int SlotToUse, bool IsAutoSaving)
{
	bIsAutoSave = IsAutoSaving;
	MC = Cast<ACharacterBase>(UGameplayStatics::GetPlayerCharacter(this, 0));

	check(MC);

	if (!CurrentSaveGame)
	{
		UFirstSaveGame* SaveGameInstance = Cast<UFirstSaveGame>(UGameplayStatics::CreateSaveGameObject(UFirstSaveGame::StaticClass()));
		SaveGameInstance->CharacterStats.Health = MC->Health;
		SaveGameInstance->CharacterStats.MaxHealth = MC->MaxHealth;
		SaveGameInstance->CharacterStats.Stamina = MC->Stamina;
		SaveGameInstance->CharacterStats.MaxStamina = MC->MaxStamina;
		SaveGameInstance->CharacterStats.Dirhams = MC->Dirhams;
		SaveGameInstance->CharacterStats.Location = MC->GetActorLocation();
		SaveGameInstance->CharacterStats.Rotation = MC->GetActorRotation();
		FString InDate = FDateTime::Now().GetDate().ToString();
		FString InTime = FDateTime::Now().GetTimeOfDay().ToString();
		FString Date;
		FString Time;
		ParseDate(InDate, Date);
		ParseTime(InTime, Time);
		SaveGameInstance->CharacterStats.Date = Date;
		SaveGameInstance->CharacterStats.Time = Time;
		FString MapName = GetWorld()->GetMapName();
		MapName.RemoveFromStart(GetWorld()->StreamingLevelsPrefix);
		SaveGameInstance->CharacterStats.MapName = MapName;
		SaveGameInstance->CharacterStats.bIsNewGame = MC->bIsNewGame;


		AWeaponBase* EquippedWeapon = MC->EquippedWeapon;
		if (EquippedWeapon)
		{
			SaveGameInstance->CharacterStats.WeaponName = EquippedWeapon->WeaponName;
		}
		

		CurrentSaveGame = SaveGameInstance;
	}
	else
	{
		CurrentSaveGame->CharacterStats.Health = MC->Health;
		CurrentSaveGame->CharacterStats.MaxHealth = MC->MaxHealth;
		CurrentSaveGame->CharacterStats.Stamina = MC->Stamina;
		CurrentSaveGame->CharacterStats.MaxStamina = MC->MaxStamina;
		CurrentSaveGame->CharacterStats.Dirhams = MC->Dirhams;
		CurrentSaveGame->CharacterStats.Location = MC->GetActorLocation();
		CurrentSaveGame->CharacterStats.Rotation = MC->GetActorRotation();
		FString InDate = FDateTime::Now().GetDate().ToString();
		FString InTime = FDateTime::Now().GetTimeOfDay().ToString();
		FString Date;
		FString Time;
		ParseDate(InDate, Date);
		ParseTime(InTime, Time);
		CurrentSaveGame->CharacterStats.Date = Date;
		CurrentSaveGame->CharacterStats.Time = Time;
		FString MapName = GetWorld()->GetMapName();
		MapName.RemoveFromStart(GetWorld()->StreamingLevelsPrefix);
		CurrentSaveGame->CharacterStats.MapName = MapName;
		CurrentSaveGame->CharacterStats.bIsNewGame = MC->bIsNewGame;


		AWeaponBase* EquippedWeapon = MC->EquippedWeapon;
		if (EquippedWeapon)
		{
			CurrentSaveGame->CharacterStats.WeaponName = EquippedWeapon->WeaponName;
		}
	

		
		
	}

	if (!bIsAutoSave)
	{
		ESaveSlot Slot = static_cast<ESaveSlot>(SlotToUse);
		switch (Slot)
		{
		case ESaveSlot::ESS_FirstSlot:
			SavedGameArray[1] = CurrentSaveGame;
			CurrentSaveGame->CreateSlot(FirstSaveSlot, 1);
			break;
		case ESaveSlot::ESS_SecondSlot:
			SavedGameArray[2] = CurrentSaveGame;
			CurrentSaveGame->CreateSlot(SecondSaveSlot, 2);
			break;
		case ESaveSlot::ESS_ThirdSlot:
			SavedGameArray[3] = CurrentSaveGame;
			CurrentSaveGame->CreateSlot(ThirdSaveSlot, 3);
			break;
		case ESaveSlot::ESS_FourthSlot:
			SavedGameArray[4] = CurrentSaveGame;
			CurrentSaveGame->CreateSlot(FourthSaveSlot, 4);
			break;
		case ESaveSlot::ESS_FifthSlot:
			SavedGameArray[5] = CurrentSaveGame;
			CurrentSaveGame->CreateSlot(FifthSaveSlot, 5);
			break;
		case ESaveSlot::ESS_SixthSlot:
			SavedGameArray[6] = CurrentSaveGame;
			CurrentSaveGame->CreateSlot(SixthSaveSlot, 6);
			break;
		case ESaveSlot::ESS_SeventhSlot:
			SavedGameArray[7] = CurrentSaveGame;
			CurrentSaveGame->CreateSlot(SeventhSaveSlot, 7);
			break;
		case ESaveSlot::ESS_EighthSlot:
			SavedGameArray[8] = CurrentSaveGame;
			CurrentSaveGame->CreateSlot(EighthSaveSlot, 8);
			break;
		case ESaveSlot::ESS_NinethSlot:
			SavedGameArray[9] = CurrentSaveGame;
			CurrentSaveGame->CreateSlot(NinethSaveSlot, 9);
			break;
		case ESaveSlot::ESS_TenthSlot:
			SavedGameArray[10] = CurrentSaveGame;
			CurrentSaveGame->CreateSlot(TenthSaveSlot, 10);
			break;
		case ESaveSlot::ESS_EleventhSlot:
			SavedGameArray[11] = CurrentSaveGame;
			CurrentSaveGame->CreateSlot(EleventhSaveSlot, 11);
			break;
		case ESaveSlot::ESS_TwelfthSlot:
			SavedGameArray[12] = CurrentSaveGame;
			CurrentSaveGame->CreateSlot(TwelfthSaveSlot, 12);
			break;
		case ESaveSlot::ESS_ThirteenthSlot:
			SavedGameArray[13] = CurrentSaveGame;
			CurrentSaveGame->CreateSlot(ThirteenthSaveSlot, 13);
			break;
		case ESaveSlot::ESS_FourteenthSlot:
			SavedGameArray[14] = CurrentSaveGame;
			CurrentSaveGame->CreateSlot(FourteenthSaveSlot, 14);
			break;
		case ESaveSlot::ESS_FifteenthSlot:
			SavedGameArray[15] = CurrentSaveGame;
			CurrentSaveGame->CreateSlot(FifteenthSaveSlot, 15);
			break;
		case ESaveSlot::ESS_SixteenthSlot:
			SavedGameArray[16] = CurrentSaveGame;
			CurrentSaveGame->CreateSlot(SixteenthSaveSlot, 16);
			break;
		case ESaveSlot::ESS_SeventeenthSlot:
			SavedGameArray[17] = CurrentSaveGame;
			CurrentSaveGame->CreateSlot(SeventeenthSaveSlot, 17);
			break;
		case ESaveSlot::ESS_EighteenthSlot:
			SavedGameArray[18] = CurrentSaveGame;
			CurrentSaveGame->CreateSlot(EighteenthSaveSlot, 18);
			break;
		case ESaveSlot::ESS_NineteenthSlot:
			SavedGameArray[19] = CurrentSaveGame;
			CurrentSaveGame->CreateSlot(NineteenthSaveSlot, 19);
			break;
		case ESaveSlot::ESS_TwentiethSlot:
			SavedGameArray[20] = CurrentSaveGame;
			CurrentSaveGame->CreateSlot(TwentithSaveSlot, 20);
			break;

		default:
			break;
		}

	}
	else
	{
		SavedGameArray[0] = CurrentSaveGame;
		CurrentSaveGame->CreateSlot(AutoSaveSlot, 0);
	}

	

	UGameplayStatics::SaveGameToSlot(CurrentSaveGame, CurrentSaveGame->SlotName, CurrentSaveGame->UserIndex);

	

}

void UFirstProjectGameInstance::LoadGame(FString SaveSlotName)
{

	PC = Cast<AMainPlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	check(PC);
	PC->ToggleLoadingScreen();
	MC = Cast<ACharacterBase>(UGameplayStatics::GetPlayerCharacter(this, 0));


//	UFirstSaveGame* LoadGame = Cast<UFirstSaveGame>(UGameplayStatics::CreateSaveGameObject(UFirstSaveGame::StaticClass()));

	UFirstSaveGame* LoadGameInstance = Cast<UFirstSaveGame>(UGameplayStatics::LoadGameFromSlot(SaveSlotName, 0));
	CurrentSaveGame = LoadGameInstance;

	if (LoadGameInstance)
	{
		if (!MC)
		{
			FActorSpawnParameters SpawnParams;
			TSubclassOf<ACharacterBase> CharacterClass = ACharacterBase::StaticClass();

			MC = GetWorld()->SpawnActor<ACharacterBase>(CharacterClass, LoadGameInstance->CharacterStats.Location, LoadGameInstance->CharacterStats.Rotation, SpawnParams);
		}

		bLoadingSave = true;
		MC->Health = LoadGameInstance->CharacterStats.Health;
		MC->MaxHealth = LoadGameInstance->CharacterStats.MaxHealth;
		MC->Stamina = LoadGameInstance->CharacterStats.Stamina;
		MC->MaxStamina = LoadGameInstance->CharacterStats.MaxStamina;
		MC->Dirhams = LoadGameInstance->CharacterStats.Dirhams;
		MC->bIsNewGame = LoadGameInstance->CharacterStats.bIsNewGame;

		if (MC->WeaponStorage)
		{
			AItemStorage* Weapons = GetWorld()->SpawnActor<AItemStorage>(MC->WeaponStorage);
			if (Weapons)
			{
				FString WeaponName = LoadGameInstance->CharacterStats.WeaponName;
				if (Weapons->WeaponMap.Contains(WeaponName))
				{
					AWeaponBase* WeaponToEquip = GetWorld()->SpawnActor<AWeaponBase>(Weapons->WeaponMap[WeaponName]);
					WeaponToEquip->Character = MC;
					WeaponToEquip->Equip(MC);
				}

			}
		}



		if (LoadGameInstance->CharacterStats.MapName != TEXT(""))
		{
			FName MapName(*LoadGameInstance->CharacterStats.MapName);
			MC->SwitchLevel(MapName);
		}


		if (!MC->Alive())
		{
			MC->SetMovementStatus(EMovementStatus::EMS_Normal);
			MC->GetMesh()->bPauseAnims = false;
			MC->GetMesh()->bNoSkeletonUpdate = false;
			MC->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		}
		bLoadingSave = false;


		check(PC);
		FInputModeGameOnly GameOnly;
		PC->SetInputMode(GameOnly);
		GetTimerManager().SetTimer(LoadingTimer, this, &UFirstProjectGameInstance::ToggleLoadingScreen, 5.f);
		bContinuing = false;
	}




}

void UFirstProjectGameInstance::LoadGameNoSwitch(bool bSetPosition, FString SaveSlotName)
{

	MC = Cast<ACharacterBase>(UGameplayStatics::GetPlayerCharacter(this, 0));
	check(MC);

	//UGameplayStatics::LoadDataFromSlot(OutSaveData, LoadGame->SlotName, LoadGame->UserIndex);

	UFirstSaveGame* LoadGameInstance = Cast<UFirstSaveGame>(UGameplayStatics::LoadGameFromSlot(SaveSlotName, 0));

	CurrentSaveGame = LoadGameInstance;

	if (LoadGameInstance)
	{
		bLoadingSave = true;
		MC->Health = LoadGameInstance->CharacterStats.Health;
		MC->MaxHealth = LoadGameInstance->CharacterStats.MaxHealth;
		MC->Stamina = LoadGameInstance->CharacterStats.Stamina;
		MC->MaxStamina = LoadGameInstance->CharacterStats.MaxStamina;
		MC->Dirhams = LoadGameInstance->CharacterStats.Dirhams;
		MC->bIsNewGame = LoadGameInstance->CharacterStats.bIsNewGame;
		if (MC->WeaponStorage)
		{

			AItemStorage* Weapons = GetWorld()->SpawnActor<AItemStorage>(MC->WeaponStorage);
			if (Weapons)
			{
				FString WeaponName = LoadGameInstance->CharacterStats.WeaponName;
				if (Weapons->WeaponMap.Contains(WeaponName))
				{
					AWeaponBase* WeaponToEquip = GetWorld()->SpawnActor<AWeaponBase>(Weapons->WeaponMap[WeaponName]);
					WeaponToEquip->Character = MC;
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

		bLoadingSave = false;
		/**
		if (LoadGameInstance->Enemies.Num() != 0)
		{
			for (int32 i = 0; i < LoadGameInstance->Enemies.Num(); ++i)
			{
				GetWorld()->SpawnActor<AEnemyBase>(LoadGameInstance->Enemies[i]);
			}
		}
		*/
	}
}

const FString UFirstProjectGameInstance::GetSaveSlotName(int SlotNumber)
{
	{
		ESaveSlot Slot = static_cast<ESaveSlot>(SlotNumber);
		switch (Slot)
		{
		case ESaveSlot::ESS_AutoSave:
			return AutoSaveSlot;
			break;
		case ESaveSlot::ESS_FirstSlot:
			return FirstSaveSlot;
			break;
		case ESaveSlot::ESS_SecondSlot:
			return SecondSaveSlot;
			break;
		case ESaveSlot::ESS_ThirdSlot:
			return ThirdSaveSlot;
			break;
		case ESaveSlot::ESS_FourthSlot:
			return FourthSaveSlot;
			break;
		case ESaveSlot::ESS_FifthSlot:
			return FifthSaveSlot;
			break;
		case ESaveSlot::ESS_SixthSlot:
			return SixthSaveSlot;
			break;
		case ESaveSlot::ESS_SeventhSlot:	
			return SeventhSaveSlot;
			break;
		case ESaveSlot::ESS_EighthSlot:
			return EighthSaveSlot;
			break;
		case ESaveSlot::ESS_NinethSlot:	
			return NinethSaveSlot;
			break;
		case ESaveSlot::ESS_TenthSlot:
			return TenthSaveSlot;
			break;
		case ESaveSlot::ESS_EleventhSlot:
			return EleventhSaveSlot;
			break;
		case ESaveSlot::ESS_TwelfthSlot:
			return TwelfthSaveSlot;
			break;
		case ESaveSlot::ESS_ThirteenthSlot:
			return ThirteenthSaveSlot;
			break;
		case ESaveSlot::ESS_FourteenthSlot:
			return FourteenthSaveSlot;
			break;
		case ESaveSlot::ESS_FifteenthSlot:
			return FifteenthSaveSlot;
			break;
		case ESaveSlot::ESS_SixteenthSlot:
			return SixteenthSaveSlot;
			break;
		case ESaveSlot::ESS_SeventeenthSlot:
			return SeventeenthSaveSlot;
			break;
		case ESaveSlot::ESS_EighteenthSlot:
			return EighteenthSaveSlot;
			break;
		case ESaveSlot::ESS_NineteenthSlot:
			return NineteenthSaveSlot;
			break;
		case ESaveSlot::ESS_TwentiethSlot:
			return TwentithSaveSlot;
			break;

		default:
			break;
		}

	}

	return TEXT("");
}

void UFirstProjectGameInstance::ToggleLoadingScreen()
{
	if (PC)
	{
		PC->ToggleLoadingScreen();
	}
}

bool UFirstProjectGameInstance::ParseDate(const FString& DateTimeString, FString& OutDate)
{
	TArray<FString> StringArray;
	FString FixedString = DateTimeString.Replace(TEXT("-"), TEXT(" "));
	FixedString.ReplaceInline(TEXT(":"), TEXT(" "), ESearchCase::CaseSensitive);
	FixedString.ReplaceInline(TEXT("."), TEXT("/"), ESearchCase::CaseSensitive);

	FixedString.ParseIntoArray(StringArray, TEXT(" "), true);

	if ((StringArray.Num() < 2 || StringArray.Num() == 0))
	{
		return false;
	}

	for (int32 i = 0; i < (StringArray.Num() - 1); ++i)
	{
		OutDate.Append(StringArray[i]);
	}

	return true;
}

bool UFirstProjectGameInstance::ParseTime(const FString& DateTimeString, FString& OutTime)
{
	TArray<FString> StringArray;
	FString FixedString = DateTimeString.Replace(TEXT("+"), TEXT(" "));
	FixedString.ReplaceInline(TEXT("."), TEXT(" "), ESearchCase::CaseSensitive);

	FixedString.ParseIntoArray(StringArray, TEXT(" "), true);

	if ((StringArray.Num() < 2 || StringArray.Num() == 0))
	{
		return false;
	}

	for (int32 i = 0; i < (StringArray.Num() - 1); ++i)
	{
		OutTime.Append(StringArray[i]);
	}
	return true;
}

