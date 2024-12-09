// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SaveSlotPanelWidget.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, Abstract)
class FIRSTPROJECT_API USaveSlotPanelWidget : public UUserWidget
{
	GENERATED_BODY()
	

public:
	virtual void SynchronizeProperties() override;
	virtual void NativeConstruct() override;
	static int32 GetChildIndex(UWidget* Widget);
	UFUNCTION(BlueprintCallable)
	void RefreshWidgets();


	UPROPERTY(EditAnywhere, Category = "Save Game Panel")
	TSubclassOf<UUserWidget> SlotWidgetClass = nullptr;
	UPROPERTY(EditAnywhere, Category = "Save Game Panel")
	int32 Rows = 10;
	UPROPERTY(BlueprintReadOnly, Category = "Save Game Panel", meta = (BindWidget))
	class UVerticalBox* SlotVerticalBox;

	static UVerticalBox* StaticSlotScrollBox;

	bool bFirstInit = true;
};
