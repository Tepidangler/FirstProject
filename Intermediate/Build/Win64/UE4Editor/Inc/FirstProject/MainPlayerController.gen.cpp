// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/MainPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainPlayerController() {}
// Cross Module References
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AMainPlayerController_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AMainPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_FirstProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMainPlayerController::execToggleMainMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleMainMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainPlayerController::execRemovePauseMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePauseMenu_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainPlayerController::execDisplayPauseMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayPauseMenu_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainPlayerController::execRemoveOptionsMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveOptionsMenu_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainPlayerController::execDisplayOptionsMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayOptionsMenu_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainPlayerController::execRemoveLoadGameScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveLoadGameScreen_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainPlayerController::execDisplayLoadGameScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayLoadGameScreen_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainPlayerController::execRemoveDeathOverlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveDeathOverlay_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainPlayerController::execDisplayDeathOverlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayDeathOverlay_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainPlayerController::execRemoveMainMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMainMenu_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainPlayerController::execDisplayMainMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayMainMenu_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainPlayerController::execRemoveLoadingScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveLoadingScreen_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainPlayerController::execDisplayLoadingScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayLoadingScreen_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainPlayerController::execRemoveHUDOverlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveHUDOverlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainPlayerController::execDisplayHUDOverlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayHUDOverlay();
		P_NATIVE_END;
	}
	static FName NAME_AMainPlayerController_DisplayDeathOverlay = FName(TEXT("DisplayDeathOverlay"));
	void AMainPlayerController::DisplayDeathOverlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMainPlayerController_DisplayDeathOverlay),NULL);
	}
	static FName NAME_AMainPlayerController_DisplayLoadGameScreen = FName(TEXT("DisplayLoadGameScreen"));
	void AMainPlayerController::DisplayLoadGameScreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMainPlayerController_DisplayLoadGameScreen),NULL);
	}
	static FName NAME_AMainPlayerController_DisplayLoadingScreen = FName(TEXT("DisplayLoadingScreen"));
	void AMainPlayerController::DisplayLoadingScreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMainPlayerController_DisplayLoadingScreen),NULL);
	}
	static FName NAME_AMainPlayerController_DisplayMainMenu = FName(TEXT("DisplayMainMenu"));
	void AMainPlayerController::DisplayMainMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMainPlayerController_DisplayMainMenu),NULL);
	}
	static FName NAME_AMainPlayerController_DisplayOptionsMenu = FName(TEXT("DisplayOptionsMenu"));
	void AMainPlayerController::DisplayOptionsMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMainPlayerController_DisplayOptionsMenu),NULL);
	}
	static FName NAME_AMainPlayerController_DisplayPauseMenu = FName(TEXT("DisplayPauseMenu"));
	void AMainPlayerController::DisplayPauseMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMainPlayerController_DisplayPauseMenu),NULL);
	}
	static FName NAME_AMainPlayerController_RemoveDeathOverlay = FName(TEXT("RemoveDeathOverlay"));
	void AMainPlayerController::RemoveDeathOverlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMainPlayerController_RemoveDeathOverlay),NULL);
	}
	static FName NAME_AMainPlayerController_RemoveLoadGameScreen = FName(TEXT("RemoveLoadGameScreen"));
	void AMainPlayerController::RemoveLoadGameScreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMainPlayerController_RemoveLoadGameScreen),NULL);
	}
	static FName NAME_AMainPlayerController_RemoveLoadingScreen = FName(TEXT("RemoveLoadingScreen"));
	void AMainPlayerController::RemoveLoadingScreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMainPlayerController_RemoveLoadingScreen),NULL);
	}
	static FName NAME_AMainPlayerController_RemoveMainMenu = FName(TEXT("RemoveMainMenu"));
	void AMainPlayerController::RemoveMainMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMainPlayerController_RemoveMainMenu),NULL);
	}
	static FName NAME_AMainPlayerController_RemoveOptionsMenu = FName(TEXT("RemoveOptionsMenu"));
	void AMainPlayerController::RemoveOptionsMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMainPlayerController_RemoveOptionsMenu),NULL);
	}
	static FName NAME_AMainPlayerController_RemovePauseMenu = FName(TEXT("RemovePauseMenu"));
	void AMainPlayerController::RemovePauseMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMainPlayerController_RemovePauseMenu),NULL);
	}
	void AMainPlayerController::StaticRegisterNativesAMainPlayerController()
	{
		UClass* Class = AMainPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayDeathOverlay", &AMainPlayerController::execDisplayDeathOverlay },
			{ "DisplayHUDOverlay", &AMainPlayerController::execDisplayHUDOverlay },
			{ "DisplayLoadGameScreen", &AMainPlayerController::execDisplayLoadGameScreen },
			{ "DisplayLoadingScreen", &AMainPlayerController::execDisplayLoadingScreen },
			{ "DisplayMainMenu", &AMainPlayerController::execDisplayMainMenu },
			{ "DisplayOptionsMenu", &AMainPlayerController::execDisplayOptionsMenu },
			{ "DisplayPauseMenu", &AMainPlayerController::execDisplayPauseMenu },
			{ "RemoveDeathOverlay", &AMainPlayerController::execRemoveDeathOverlay },
			{ "RemoveHUDOverlay", &AMainPlayerController::execRemoveHUDOverlay },
			{ "RemoveLoadGameScreen", &AMainPlayerController::execRemoveLoadGameScreen },
			{ "RemoveLoadingScreen", &AMainPlayerController::execRemoveLoadingScreen },
			{ "RemoveMainMenu", &AMainPlayerController::execRemoveMainMenu },
			{ "RemoveOptionsMenu", &AMainPlayerController::execRemoveOptionsMenu },
			{ "RemovePauseMenu", &AMainPlayerController::execRemovePauseMenu },
			{ "ToggleMainMenu", &AMainPlayerController::execToggleMainMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMainPlayerController_DisplayDeathOverlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayerController_DisplayDeathOverlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_DisplayDeathOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "DisplayDeathOverlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayerController_DisplayDeathOverlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_DisplayDeathOverlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayerController_DisplayDeathOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayerController_DisplayDeathOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainPlayerController_DisplayHUDOverlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayerController_DisplayHUDOverlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_DisplayHUDOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "DisplayHUDOverlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayerController_DisplayHUDOverlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_DisplayHUDOverlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayerController_DisplayHUDOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayerController_DisplayHUDOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainPlayerController_DisplayLoadGameScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayerController_DisplayLoadGameScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_DisplayLoadGameScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "DisplayLoadGameScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayerController_DisplayLoadGameScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_DisplayLoadGameScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayerController_DisplayLoadGameScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayerController_DisplayLoadGameScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainPlayerController_DisplayLoadingScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayerController_DisplayLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_DisplayLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "DisplayLoadingScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayerController_DisplayLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_DisplayLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayerController_DisplayLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayerController_DisplayLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainPlayerController_DisplayMainMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayerController_DisplayMainMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_DisplayMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "DisplayMainMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayerController_DisplayMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_DisplayMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayerController_DisplayMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayerController_DisplayMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainPlayerController_DisplayOptionsMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayerController_DisplayOptionsMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_DisplayOptionsMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "DisplayOptionsMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayerController_DisplayOptionsMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_DisplayOptionsMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayerController_DisplayOptionsMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayerController_DisplayOptionsMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainPlayerController_DisplayPauseMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayerController_DisplayPauseMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_DisplayPauseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "DisplayPauseMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayerController_DisplayPauseMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_DisplayPauseMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayerController_DisplayPauseMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayerController_DisplayPauseMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainPlayerController_RemoveDeathOverlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayerController_RemoveDeathOverlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_RemoveDeathOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "RemoveDeathOverlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayerController_RemoveDeathOverlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_RemoveDeathOverlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayerController_RemoveDeathOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayerController_RemoveDeathOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainPlayerController_RemoveHUDOverlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayerController_RemoveHUDOverlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_RemoveHUDOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "RemoveHUDOverlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayerController_RemoveHUDOverlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_RemoveHUDOverlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayerController_RemoveHUDOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayerController_RemoveHUDOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainPlayerController_RemoveLoadGameScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayerController_RemoveLoadGameScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_RemoveLoadGameScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "RemoveLoadGameScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayerController_RemoveLoadGameScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_RemoveLoadGameScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayerController_RemoveLoadGameScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayerController_RemoveLoadGameScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainPlayerController_RemoveLoadingScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayerController_RemoveLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_RemoveLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "RemoveLoadingScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayerController_RemoveLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_RemoveLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayerController_RemoveLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayerController_RemoveLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainPlayerController_RemoveMainMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayerController_RemoveMainMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_RemoveMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "RemoveMainMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayerController_RemoveMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_RemoveMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayerController_RemoveMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayerController_RemoveMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainPlayerController_RemoveOptionsMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayerController_RemoveOptionsMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_RemoveOptionsMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "RemoveOptionsMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayerController_RemoveOptionsMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_RemoveOptionsMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayerController_RemoveOptionsMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayerController_RemoveOptionsMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainPlayerController_RemovePauseMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayerController_RemovePauseMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_RemovePauseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "RemovePauseMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayerController_RemovePauseMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_RemovePauseMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayerController_RemovePauseMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayerController_RemovePauseMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainPlayerController_ToggleMainMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayerController_ToggleMainMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_ToggleMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "ToggleMainMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayerController_ToggleMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_ToggleMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayerController_ToggleMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayerController_ToggleMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMainPlayerController_NoRegister()
	{
		return AMainPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMainPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDOverlayAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDOverlayAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WEnemyHealthBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WEnemyHealthBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyHealthBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyHealthBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WPauseMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WPauseMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PauseMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WMainMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WMainMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WLoadingScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WLoadingScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadingScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WLoadGameScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WLoadGameScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadGameScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadGameScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WOptionsMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WOptionsMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionsMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptionsMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WDeathOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WDeathOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathOverlay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMainPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainPlayerController_DisplayDeathOverlay, "DisplayDeathOverlay" }, // 1693045213
		{ &Z_Construct_UFunction_AMainPlayerController_DisplayHUDOverlay, "DisplayHUDOverlay" }, // 1003197236
		{ &Z_Construct_UFunction_AMainPlayerController_DisplayLoadGameScreen, "DisplayLoadGameScreen" }, // 2845779532
		{ &Z_Construct_UFunction_AMainPlayerController_DisplayLoadingScreen, "DisplayLoadingScreen" }, // 272569168
		{ &Z_Construct_UFunction_AMainPlayerController_DisplayMainMenu, "DisplayMainMenu" }, // 3426173088
		{ &Z_Construct_UFunction_AMainPlayerController_DisplayOptionsMenu, "DisplayOptionsMenu" }, // 2454917500
		{ &Z_Construct_UFunction_AMainPlayerController_DisplayPauseMenu, "DisplayPauseMenu" }, // 1041142313
		{ &Z_Construct_UFunction_AMainPlayerController_RemoveDeathOverlay, "RemoveDeathOverlay" }, // 4274156325
		{ &Z_Construct_UFunction_AMainPlayerController_RemoveHUDOverlay, "RemoveHUDOverlay" }, // 49028286
		{ &Z_Construct_UFunction_AMainPlayerController_RemoveLoadGameScreen, "RemoveLoadGameScreen" }, // 1617581119
		{ &Z_Construct_UFunction_AMainPlayerController_RemoveLoadingScreen, "RemoveLoadingScreen" }, // 1271556575
		{ &Z_Construct_UFunction_AMainPlayerController_RemoveMainMenu, "RemoveMainMenu" }, // 118502672
		{ &Z_Construct_UFunction_AMainPlayerController_RemoveOptionsMenu, "RemoveOptionsMenu" }, // 4272120166
		{ &Z_Construct_UFunction_AMainPlayerController_RemovePauseMenu, "RemovePauseMenu" }, // 1871704016
		{ &Z_Construct_UFunction_AMainPlayerController_ToggleMainMenu, "ToggleMainMenu" }, // 3519471934
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Added \"UMG\" to Public Dependency Module Names, and \"Slate\", \"SlateCore\"....\n *  to Private Dependency Module Names in FirstProject.Build.cs\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MainPlayerController.h" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
		{ "ToolTip", "Added \"UMG\" to Public Dependency Module Names, and \"Slate\", \"SlateCore\"....\nto Private Dependency Module Names in FirstProject.Build.cs" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlayAsset_MetaData[] = {
		{ "Category", "Widgets" },
		{ "Comment", "/**Reference to the UMG Asset in the editor*/" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
		{ "ToolTip", "Reference to the UMG Asset in the editor" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlayAsset = { "HUDOverlayAsset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, HUDOverlayAsset), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlayAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlayAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlay_MetaData[] = {
		{ "Category", "Widgets" },
		{ "Comment", "/**Variable to hold the Widget after creating it */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
		{ "ToolTip", "Variable to hold the Widget after creating it" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlay = { "HUDOverlay", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, HUDOverlay), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WEnemyHealthBar_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WEnemyHealthBar = { "WEnemyHealthBar", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, WEnemyHealthBar), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WEnemyHealthBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WEnemyHealthBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_EnemyHealthBar_MetaData[] = {
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_EnemyHealthBar = { "EnemyHealthBar", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, EnemyHealthBar), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_EnemyHealthBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_EnemyHealthBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WPauseMenu_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WPauseMenu = { "WPauseMenu", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, WPauseMenu), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WPauseMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WPauseMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PauseMenu_MetaData[] = {
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PauseMenu = { "PauseMenu", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, PauseMenu), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PauseMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PauseMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WMainMenu_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WMainMenu = { "WMainMenu", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, WMainMenu), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WMainMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WMainMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_MainMenu_MetaData[] = {
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_MainMenu = { "MainMenu", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, MainMenu), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_MainMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_MainMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WLoadingScreen_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WLoadingScreen = { "WLoadingScreen", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, WLoadingScreen), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WLoadingScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WLoadingScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_LoadingScreen_MetaData[] = {
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_LoadingScreen = { "LoadingScreen", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, LoadingScreen), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_LoadingScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_LoadingScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WLoadGameScreen_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WLoadGameScreen = { "WLoadGameScreen", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, WLoadGameScreen), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WLoadGameScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WLoadGameScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_LoadGameScreen_MetaData[] = {
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_LoadGameScreen = { "LoadGameScreen", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, LoadGameScreen), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_LoadGameScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_LoadGameScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WOptionsMenu_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WOptionsMenu = { "WOptionsMenu", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, WOptionsMenu), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WOptionsMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WOptionsMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_OptionsMenu_MetaData[] = {
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_OptionsMenu = { "OptionsMenu", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, OptionsMenu), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_OptionsMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_OptionsMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WDeathOverlay_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WDeathOverlay = { "WDeathOverlay", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, WDeathOverlay), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WDeathOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WDeathOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerController_Statics::NewProp_DeathOverlay_MetaData[] = {
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_DeathOverlay = { "DeathOverlay", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayerController, DeathOverlay), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_DeathOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::NewProp_DeathOverlay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlayAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WEnemyHealthBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_EnemyHealthBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WPauseMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PauseMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WMainMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_MainMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WLoadingScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_LoadingScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WLoadGameScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_LoadGameScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WOptionsMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_OptionsMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WDeathOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_DeathOverlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainPlayerController_Statics::ClassParams = {
		&AMainPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMainPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainPlayerController, 3102947818);
	template<> FIRSTPROJECT_API UClass* StaticClass<AMainPlayerController>()
	{
		return AMainPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainPlayerController(Z_Construct_UClass_AMainPlayerController, &AMainPlayerController::StaticClass, TEXT("/Script/FirstProject"), TEXT("AMainPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
