

#include "MainPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetTree.h"
#include "Components/VerticalBox.h"
#include "Components/Button.h"
#include "SaveSlotWidget.h"
#include "FirstProjectGameInstance.h"
#include "FirstSaveGame.h"
#include "CharacterBase.h"

void AMainPlayerController::DisplayHUDOverlay()
{
	if (HUDOverlay)
	{
		bHUDOverlayVisible = true;
		HUDOverlay->SetVisibility(ESlateVisibility::Visible);
	}
}

void AMainPlayerController::RemoveHUDOverlay()
{
}

void AMainPlayerController::DisplayEnemyHealthBar()
{
	if (EnemyHealthBar)
	{
		bEnemyHealthBarVisible = true;
		EnemyHealthBar->SetVisibility(ESlateVisibility::Visible);
	}
	
}

void AMainPlayerController::RemoveEnemyHealthBar()
{
	if (EnemyHealthBar)
	{
		bEnemyHealthBarVisible = false;
		EnemyHealthBar->SetVisibility(ESlateVisibility::Hidden);
	}
	
}

void AMainPlayerController::DisplayLoadingScreen_Implementation()
{
	if (LoadingScreen)
	{
		bLoadingScreenVisible = true;
		LoadingScreen->SetVisibility(ESlateVisibility::Visible);

		FInputModeGameOnly InputModeGameOnly;
		SetInputMode(InputModeGameOnly);
		bShowMouseCursor = false;

	}
}

void AMainPlayerController::RemoveLoadingScreen_Implementation()
{
	if (LoadingScreen)
	{
		bLoadingScreenVisible = false;
		LoadingScreen->SetVisibility(ESlateVisibility::Hidden);

		FInputModeGameOnly InputModeGameOnly;
		SetInputMode(InputModeGameOnly);
		bShowMouseCursor = false;

	}
}

void AMainPlayerController::DisplayMainMenu_Implementation()
{
	if (MainMenu)
	{
		bMainMenuVisible = true;
		MainMenu->SetVisibility(ESlateVisibility::Visible);
		IgnoreLookInput = true;
		IgnoreMoveInput = true;
		MainMenu->GetWidgetFromName("NewGameButton")->SetUserFocus(this);
		FInputModeGameAndUI InputModeGameUI;
		SetInputMode(InputModeGameUI);
		bShowMouseCursor = true;
	}

}

void AMainPlayerController::RemoveMainMenu_Implementation()
{
	if (MainMenu)
	{
		bMainMenuVisible = false;
		MainMenu->SetVisibility(ESlateVisibility::Hidden);
		IgnoreLookInput = false;
		IgnoreMoveInput = false;
		FInputModeGameOnly InputModeGameOnly;
		SetInputMode(InputModeGameOnly);
		bShowMouseCursor = false;
	}
}

void AMainPlayerController::DisplayDeathOverlay_Implementation()
{
	if (DeathOverlay)
	{
		bDeathOverlayVisible = true;
		DeathOverlay->SetVisibility(ESlateVisibility::Visible);
		IgnoreLookInput = true;
		IgnoreMoveInput = true;
		DeathOverlay->GetWidgetFromName("ContinueButton")->SetUserFocus(this);
		
		FInputModeGameAndUI InputModeGameUI;
		SetInputMode(InputModeGameUI);
		bShowMouseCursor = false;
	}
}

void AMainPlayerController::RemoveDeathOverlay_Implementation()
{
	if (DeathOverlay)
	{
		bDeathOverlayVisible = false;
		DeathOverlay->SetVisibility(ESlateVisibility::Hidden);
		IgnoreLookInput = false;
		IgnoreMoveInput = false;
		FInputModeGameOnly InputModeGameOnly;
		SetInputMode(InputModeGameOnly);
		bShowMouseCursor = false;
	}
}

void AMainPlayerController::DisplayOptionsMenu_Implementation()
{
	if (OptionsMenu)
	{
		bOptionsMenuVisible = true;
		OptionsMenu->SetVisibility(ESlateVisibility::Visible);
		IgnoreLookInput = true;
		IgnoreMoveInput = true;
		FInputModeGameAndUI InputModeGameUI;
		SetInputMode(InputModeGameUI);
		bShowMouseCursor = true;
	}
}

void AMainPlayerController::RemoveOptionsMenu_Implementation()
{
	if (OptionsMenu)
	{
		bOptionsMenuVisible = false;
		OptionsMenu->SetVisibility(ESlateVisibility::Hidden);

		FInputModeGameOnly InputModeGameOnly;
		SetInputMode(InputModeGameOnly);
		bShowMouseCursor = false;
	}
}
void AMainPlayerController::DisplayPauseMenu_Implementation()
{
	if (PauseMenu)
	{
		bPauseMenuVisible = true;
		PauseMenu->SetVisibility(ESlateVisibility::Visible);
		PauseMenu->GetWidgetFromName("ResumeButton")->SetUserFocus(this);
		IgnoreLookInput = true;
		IgnoreMoveInput = true;
		FInputModeGameAndUI InputModeGameUI;
		SetInputMode(InputModeGameUI);
		bShowMouseCursor = true;
	}
}

void AMainPlayerController::RemovePauseMenu_Implementation()
{
	if (PauseMenu)
	{
		bPauseMenuVisible = false;
		PauseMenu->SetVisibility(ESlateVisibility::Hidden);
		FInputModeGameOnly InputModeGameOnly;
		if (!bLoadGameScreenVisible && !bSaveGameMenuVisible)
		{
			IgnoreLookInput = false;
			IgnoreMoveInput = false;
			SetInputMode(InputModeGameOnly);
			bShowMouseCursor = false;
		}

	}

}
void AMainPlayerController::DisplayLoadGameScreen_Implementation()
{
	if (LoadGameScreen)
	{
		bLoadGameScreenVisible = true;
		LoadGameScreen->SetVisibility(ESlateVisibility::Visible);
		Cast<UVerticalBox>(LoadGameScreen->GetWidgetFromName("SlotVerticalBox"))->GetChildAt(0)->SetUserFocus(this);
		IgnoreLookInput = true;
		IgnoreMoveInput = true;
		FInputModeGameAndUI InputModeGameUI;
		SetInputMode(InputModeGameUI);
		bShowMouseCursor = true;
	}
}

void AMainPlayerController::RemoveLoadGameScreen_Implementation()
{
	if (LoadGameScreen)
	{
		bLoadGameScreenVisible = false;
		LoadGameScreen->SetVisibility(ESlateVisibility::Hidden);
		IgnoreLookInput = false;
		IgnoreMoveInput = false;
		FInputModeGameOnly InputModeGameOnly;
		SetInputMode(InputModeGameOnly);
		bShowMouseCursor = false;
	}
}


void AMainPlayerController::DisplaySaveGameMenu_Implementation()
{
	check(SaveGameMenu);

	bSaveGameMenuVisible = true;
	SaveGameMenu->SetVisibility(ESlateVisibility::Visible);
	IgnoreLookInput = true;
	IgnoreMoveInput = true;
	Cast<UVerticalBox>(SaveGameMenu->GetWidgetFromName("SlotVerticalBox"))->GetChildAt(0)->SetUserFocus(this);
	FInputModeGameAndUI InputModeGameUI;
	SetInputMode(InputModeGameUI);
	bShowMouseCursor = true;


}

void AMainPlayerController::RemoveSaveGameMenu_Implementation()
{
	check(SaveGameMenu);

	bSaveGameMenuVisible = false;
	SaveGameMenu->SetVisibility(ESlateVisibility::Hidden);
	IgnoreLookInput = false;
	IgnoreMoveInput = false;
	FInputModeGameOnly  InputModeGameOnly;
	SetInputMode(InputModeGameOnly);
	bShowMouseCursor = false;
}

void AMainPlayerController::TogglePauseMenu()
{
	if (bPauseMenuVisible)
	{
		RemovePauseMenu();
	}
	else
	{
		DisplayPauseMenu();
	}
}

void AMainPlayerController::ToggleMainMenu()
{
	if (bMainMenuVisible)
	{
		RemoveMainMenu();
	}
	else
	{
		DisplayMainMenu();
	}
}

void AMainPlayerController::ToggleLoadGameScreen()
{
	if (bLoadGameScreenVisible)
	{
		RemoveLoadGameScreen();
	}
	else
	{
		DisplayLoadGameScreen();
	}
}

void AMainPlayerController::ToggleOptionsMenu()
{
	if (bOptionsMenuVisible)
	{
		RemoveOptionsMenu();
	}
	else
	{
		DisplayOptionsMenu();
	}
}

void AMainPlayerController::ToggleDeathOverlay()
{
	if (bDeathOverlayVisible)
	{
		RemoveDeathOverlay();
	}
	else
	{
		DisplayDeathOverlay();
	}
}

void AMainPlayerController::ToggleLoadingScreen()
{
	if (bLoadingScreenVisible)
	{
		RemoveLoadingScreen_Implementation();
	}
	else
	{
		DisplayLoadingScreen_Implementation();
	}
}

void AMainPlayerController::ToggleSaveGameMenu()
{
	if (bSaveGameMenuVisible)
	{
		RemoveSaveGameMenu();
	}
	else
	{
		DisplaySaveGameMenu();
	}
}

void AMainPlayerController::OnLoadGameClicked()
{
	if (bPauseMenuVisible)
	{
		TogglePauseMenu();
	}

	ToggleLoadGameScreen();
}

void AMainPlayerController::OnSaveGameClicked()
{
	if (bPauseMenuVisible)
	{
		TogglePauseMenu();
	}

	ToggleSaveGameMenu();
}

void AMainPlayerController::OnContinueClicked()
{
	RemoveDeathOverlay();
	GetGameInstance<UFirstProjectGameInstance>()->bContinuing = true;
	GetGameInstance<UFirstProjectGameInstance>()->LoadGame("AutoSave");

}

void AMainPlayerController::OnExitClicked()
{
	RemoveDeathOverlay();
	Cast<ACharacterBase>(GetCharacter())->SwitchLevel("MainMenuMap");
}

void AMainPlayerController::CancelDown()
{


	if (bLoadGameScreenVisible)
	{
		if (GetWorld()->GetName() == "MainMenuMap")
		{
			ToggleLoadGameScreen();
			ToggleMainMenu();
			return;
		}
		else
		{
			ToggleLoadGameScreen();
			TogglePauseMenu();
			return;
		}
	}

	if (bSaveGameMenuVisible)
	{
		ToggleSaveGameMenu();
		TogglePauseMenu();
		return;
	}

	if (bPauseMenuVisible)
	{
		TogglePauseMenu();
		return;
	}
}

void AMainPlayerController::CancelUp()
{
}

void AMainPlayerController::BeginPlay()
{
	Super::BeginPlay();

	check(HUDOverlayAsset);
	HUDOverlay = CreateWidget<UUserWidget>(this, HUDOverlayAsset);
	

	HUDOverlay->AddToViewport();
	HUDOverlay->SetVisibility(ESlateVisibility::Hidden);


	check(WEnemyHealthBar);
	FVector2D Alignment(0.f, 0.f);
	EnemyHealthBar = CreateWidget<UUserWidget>(this, WEnemyHealthBar);
	check(EnemyHealthBar);
	EnemyHealthBar->AddToViewport();
	EnemyHealthBar->SetVisibility(ESlateVisibility::Hidden);
			
	EnemyHealthBar->SetAlignmentInViewport(Alignment);
	


	check(WPauseMenu);
	PauseMenu = CreateWidget<UUserWidget>(this, WPauseMenu);
	Cast<UButton>(PauseMenu->GetWidgetFromName("LoadGameButton"))->OnClicked.AddDynamic(this, &AMainPlayerController::OnLoadGameClicked);
	Cast<UButton>(PauseMenu->GetWidgetFromName("SaveGameButton"))->OnClicked.AddDynamic(this, &AMainPlayerController::OnSaveGameClicked);
	check(PauseMenu)
	PauseMenu->AddToViewport();
	PauseMenu->SetVisibility(ESlateVisibility::Hidden);

	PauseMenu->SetAlignmentInViewport(Alignment);
	

	
	check(WMainMenu);
	FString MapName = GetWorld()->GetMapName();
	MainMenu = CreateWidget<UUserWidget>(this, WMainMenu);
	check(MainMenu)
	MainMenu->AddToViewport();
	MainMenu->SetVisibility(ESlateVisibility::Hidden);
	
	
	check(WLoadGameScreen);
	LoadGameScreen = CreateWidget<UUserWidget>(this, WLoadGameScreen);
	check(LoadGameScreen);
	LoadGameScreen->AddToViewport();
	LoadGameScreen->SetVisibility(ESlateVisibility::Hidden);
	
	check(WLoadingScreen);
	LoadingScreen = CreateWidget<UUserWidget>(this, WLoadingScreen);
	check(LoadingScreen);
	LoadingScreen->AddToViewport();
	LoadingScreen->SetVisibility(ESlateVisibility::Hidden);

	check(WOptionsMenu);
	OptionsMenu = CreateWidget<UUserWidget>(this, WOptionsMenu);
	check(OptionsMenu);
	OptionsMenu->AddToViewport();
	OptionsMenu->SetVisibility(ESlateVisibility::Hidden);
	
	
	{
		check(WDeathOverlay);
		DeathOverlay = CreateWidget<UUserWidget>(this, WDeathOverlay);
		Cast<UButton>(DeathOverlay->GetWidgetFromName("ContinueButton"))->OnClicked.AddDynamic(this, &AMainPlayerController::OnContinueClicked);
		Cast<UButton>(DeathOverlay->GetWidgetFromName("MainMenuButton"))->OnClicked.AddDynamic(this, &AMainPlayerController::OnExitClicked);
		check(DeathOverlay);
		DeathOverlay->AddToViewport();
		DeathOverlay->SetVisibility(ESlateVisibility::Hidden);
	}

	check(WSaveGameMenu);
	SaveGameMenu = CreateWidget<UUserWidget>(this, WSaveGameMenu);
	check(SaveGameMenu);
	SaveGameMenu->AddToViewport();
	SaveGameMenu->SetVisibility(ESlateVisibility::Hidden);
}

void AMainPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (EnemyHealthBar)
	{
		FVector2D PositionInViewport;
		ProjectWorldLocationToScreen(EnemyLocation, PositionInViewport);
		PositionInViewport.Y -= 50.f;
		PositionInViewport.X -= 35.f;

		FVector2D SizeInViewport = FVector2D(200.f, 25.f);

		EnemyHealthBar->SetPositionInViewport(PositionInViewport);
		EnemyHealthBar->SetDesiredSizeInViewport(SizeInViewport);
		
	}


}

void AMainPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("Cancel", IE_Pressed, this, &AMainPlayerController::CancelDown);
	InputComponent->BindAction("Cancel", IE_Released, this, &AMainPlayerController::CancelUp);
}
