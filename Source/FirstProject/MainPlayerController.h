// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainPlayerController.generated.h"

/**
 *  Added "UMG" to Public Dependency Module Names, and "Slate", "SlateCore"....
 *  to Private Dependency Module Names in FirstProject.Build.cs
 */

UCLASS()
class FIRSTPROJECT_API AMainPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	//Variables
	
	/**Reference to the UMG Asset in the editor*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget> HUDOverlayAsset;

	/**Variable to hold the Widget after creating it */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* HUDOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<UUserWidget> WEnemyHealthBar;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* EnemyHealthBar;

	bool bEnemyHealthBarVisible;

	FVector EnemyLocation;

protected:

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

public:
	void DisplayEnemyHealthBar();
	void RemoveEnemyHealthBar();

};
