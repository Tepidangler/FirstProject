// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "FirstSaveGame.generated.h"

USTRUCT(BlueprintType)
struct FCharacterStats
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SaveGameData")
	FString Date;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SaveGameData")
	FString Time;
	UPROPERTY(VisibleAnywhere,Category = "SaveGameData")
	float Health;

	UPROPERTY(VisibleAnywhere, Category = "SaveGameData")
	float MaxHealth;

	UPROPERTY(VisibleAnywhere, Category = "SaveGameData")
	float Stamina;

	UPROPERTY(VisibleAnywhere, Category = "SaveGameData")
	float MaxStamina;

	UPROPERTY(VisibleAnywhere, Category = "SaveGameData")
	int32 Dirhams;

	UPROPERTY(VisibleAnywhere, Category = "SaveGameData")
	FVector Location;

	UPROPERTY(VisibleAnywhere, Category = "SaveGameData")
	FRotator Rotation;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SaveGameData")
	FString MapName;

	UPROPERTY(VisibleAnywhere, Category = "SaveGameData")
	FString WeaponName;

	UPROPERTY(VisibleAnywhere, Category = "SaveGameData")
	bool bIsNewGame;
};

USTRUCT(BlueprintType)
struct FEnemyInfo
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "SaveGameData")
	float Health;

	UPROPERTY(VisibleAnywhere, Category = "SaveGameData")
	FVector Location;

	UPROPERTY(VisibleAnywhere, Category = "SaveGameData")
	FRotator Rotation;

};


/**
 * 
 */
UCLASS()
class FIRSTPROJECT_API UFirstSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
// Variables

	UFirstSaveGame();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Basic)
	FString SlotName;
	UPROPERTY(VisibleAnywhere, Category = Basic)
	uint32 UserIndex;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Basic)
	FCharacterStats CharacterStats;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Basic)
	int SlotNumber;
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Basic)
	//TArray<AEnemyBase*> Enemies;

public:

	//Functions

	void CreateSlot(const FString& SaveSlotName, int SaveSlotNumber);

	void CreateEmptySlot(int SaveSlotNumber);

	FString GetSlotName();

};
