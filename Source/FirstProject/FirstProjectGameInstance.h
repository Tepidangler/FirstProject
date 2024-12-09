// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FirstProjectGameInstance.generated.h"


UENUM(BlueprintType)
enum class ESaveSlot : uint8
{
	ESS_AutoSave UMETA(DisplayName = "AutoSaveSlot"),
	ESS_FirstSlot UMETA(DisplayName = "Slot1"),
	ESS_SecondSlot UMETA(DisplayName = "Slot2"),
	ESS_ThirdSlot UMETA(DisplayName = "Slot3"),
	ESS_FourthSlot UMETA(DisplayName = "Slot4"),
	ESS_FifthSlot UMETA(DisplayName = "Slot5"),
	ESS_SixthSlot UMETA(DisplayName = "Slot6"),
	ESS_SeventhSlot UMETA(DisplayName = "Slot7"),
	ESS_EighthSlot UMETA(DisplayName = "Slot8"),
	ESS_NinethSlot UMETA(DisplayName = "Slot9"),
	ESS_TenthSlot UMETA(DisplayName = "Slot10"),
	ESS_EleventhSlot UMETA(DisplayName = "Slot11"),
	ESS_TwelfthSlot UMETA(DisplayName = "Slot12"),
	ESS_ThirteenthSlot UMETA(DisplayName = "Slot13"),
	ESS_FourteenthSlot UMETA(DisplayName = "Slot14"),
	ESS_FifteenthSlot UMETA(DisplayName = "Slot15"),
	ESS_SixteenthSlot UMETA(DisplayName = "Slot16"),
	ESS_SeventeenthSlot UMETA(DisplayName = "Slot17"),
	ESS_EighteenthSlot UMETA(DisplayName = "Slot18"),
	ESS_NineteenthSlot UMETA(DisplayName = "Slot19"),
	ESS_TwentiethSlot UMETA(DisplayName = "Slot20"),

	ESS_MAX UMETA(DisplayName = "SlotMAX")
};



/**
 * 
 */
UCLASS()
class FIRSTPROJECT_API UFirstProjectGameInstance : public UGameInstance
{
	GENERATED_BODY()

private:
	static const FString AutoSaveSlot;
	static const FString FirstSaveSlot;
	static const FString SecondSaveSlot;
	static const FString ThirdSaveSlot;
	static const FString FourthSaveSlot;
	static const FString FifthSaveSlot;
	static const FString SixthSaveSlot;
	static const FString SeventhSaveSlot;
	static const FString EighthSaveSlot;
	static const FString NinethSaveSlot;
	static const FString TenthSaveSlot;
	static const FString EleventhSaveSlot;
	static const FString TwelfthSaveSlot;
	static const FString ThirteenthSaveSlot;
	static const FString FourteenthSaveSlot;
	static const FString FifteenthSaveSlot;
	static const FString SixteenthSaveSlot;
	static const FString SeventeenthSaveSlot;
	static const FString EighteenthSaveSlot;
	static const FString NineteenthSaveSlot;
	static const FString TwentithSaveSlot;

protected:
	virtual void Init() override;

	bool ParseDate(const FString& DateTimeString, FString& OutDate);

	bool ParseTime(const FString& DateTimeString, FString& OutTime);


public:
	//Variables
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Save Game")
	class UFirstSaveGame* CurrentSaveGame = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "Save Game")
	class ACharacterBase* MC = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "Save Game")
	class AMainPlayerController* PC = nullptr;

	bool bIsAutoSave = true;

	bool bLoadingSave = false;

	bool bIsMovingToInteriorMap = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Booleans")
	bool bContinuing = false;

	FTimerHandle LoadingTimer;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Enums")
	ESaveSlot SaveSlot;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Save Game")
	TArray<UFirstSaveGame*> SavedGameArray;


public:
	//Functions
	UFUNCTION(BlueprintCallable)
		void SaveGame(int SlotToUse, bool IsAutoSaving);
	UFUNCTION(BlueprintCallable)
		void LoadGame(FString SaveSlotName);
	UFUNCTION(BlueprintCallable)
		void LoadGameNoSwitch(bool bSetPosition, FString SaveSlotName);

	const FString GetSaveSlotName(int SlotNumber);

	UFUNCTION()
	void ToggleLoadingScreen();
};
