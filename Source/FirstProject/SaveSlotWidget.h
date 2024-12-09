// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SaveSlotWidget.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, Abstract)
class FIRSTPROJECT_API USaveSlotWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;



	UFUNCTION(BlueprintCallable)
	void SaveGame(int SlotToUse);
	UFUNCTION(BlueprintCallable)
	void LoadGame(FString SlotToUse);


	UPROPERTY()
	class USaveSlotPanelWidget* PanelWidget = nullptr;
	UPROPERTY(EditAnywhere, Category = "Save Game Panel")
		class UFirstSaveGame* SavedGame = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UTextBlock* MapName = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		UTextBlock* Date = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		UTextBlock* Time = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		UTextBlock* SlotName = nullptr;
	UPROPERTY(BlueprintReadOnly)
	int32 SlotNumber = 0;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UButton* SlotButton = nullptr;
};
