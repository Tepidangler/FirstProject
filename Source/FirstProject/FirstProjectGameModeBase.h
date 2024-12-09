// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FirstProjectGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTPROJECT_API AFirstProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
protected:
	/**
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Menus")
	class UFirstProjectGameInstance* GameInstance;

	//virtual void BeginPlay() override;

//	class ACharacterBase* MC;

	//class AMainPlayerController* PC;

public:
	/**
	UFUNCTION(BlueprintCallable)
		void SaveGame();
	UFUNCTION(BlueprintCallable)
		void LoadGame(bool bSetPosition);
	UFUNCTION(BlueprintCallable)
		void LoadGameNoSwitch();
	*/
};
