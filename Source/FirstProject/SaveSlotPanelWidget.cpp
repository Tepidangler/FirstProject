// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveSlotPanelWidget.h"
#include "Components/VerticalBox.h"
#include "Kismet/GameplayStatics.h"
#include "SaveSlotWidget.h"
#include "Components/Button.h"
#include "MainPlayerController.h"

UVerticalBox* USaveSlotPanelWidget::StaticSlotScrollBox;

void USaveSlotPanelWidget::NativeConstruct()
{
	Super::NativeConstruct();

	StaticSlotScrollBox = SlotVerticalBox;
	check(SlotWidgetClass);
	if (SlotVerticalBox)
	{
		SlotVerticalBox->ClearChildren();
		//USaveSlotPanelWidget::StaticSlotScrollBox->ClearChildren();

		//UUserWidget* WSlot = CreateWidget(GetWorld(), SlotWidgetClass);
		for (int32 y = 0; y < Rows; y++)
		{
			SlotVerticalBox->AddChild(CreateWidget(GetWorld(), SlotWidgetClass));

			//USaveSlotPanelWidget::StaticSlotScrollBox->AddChild(CreateWidget(GetWorld(), SlotWidgetClass));
		}

	}


}

void USaveSlotPanelWidget::SynchronizeProperties()
{
	Super::SynchronizeProperties();

}


int32 USaveSlotPanelWidget::GetChildIndex(UWidget* Widget)
{
	int32 Index = USaveSlotPanelWidget::StaticSlotScrollBox->GetChildIndex(Widget);

	return Index;
}
 
void USaveSlotPanelWidget::RefreshWidgets()
{
	RebuildWidget();
	OnWidgetRebuilt();
}