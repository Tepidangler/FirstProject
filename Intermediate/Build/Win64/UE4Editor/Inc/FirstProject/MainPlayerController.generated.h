// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPROJECT_MainPlayerController_generated_h
#error "MainPlayerController.generated.h already included, missing '#pragma once' in MainPlayerController.h"
#endif
#define FIRSTPROJECT_MainPlayerController_generated_h

#define FirstProject_Source_FirstProject_MainPlayerController_h_17_SPARSE_DATA
#define FirstProject_Source_FirstProject_MainPlayerController_h_17_RPC_WRAPPERS \
	virtual void RemovePauseMenu_Implementation(); \
	virtual void DisplayPauseMenu_Implementation(); \
	virtual void RemoveOptionsMenu_Implementation(); \
	virtual void DisplayOptionsMenu_Implementation(); \
	virtual void RemoveLoadGameScreen_Implementation(); \
	virtual void DisplayLoadGameScreen_Implementation(); \
	virtual void RemoveDeathOverlay_Implementation(); \
	virtual void DisplayDeathOverlay_Implementation(); \
	virtual void RemoveMainMenu_Implementation(); \
	virtual void DisplayMainMenu_Implementation(); \
	virtual void RemoveLoadingScreen_Implementation(); \
	virtual void DisplayLoadingScreen_Implementation(); \
 \
	DECLARE_FUNCTION(execToggleMainMenu); \
	DECLARE_FUNCTION(execRemovePauseMenu); \
	DECLARE_FUNCTION(execDisplayPauseMenu); \
	DECLARE_FUNCTION(execRemoveOptionsMenu); \
	DECLARE_FUNCTION(execDisplayOptionsMenu); \
	DECLARE_FUNCTION(execRemoveLoadGameScreen); \
	DECLARE_FUNCTION(execDisplayLoadGameScreen); \
	DECLARE_FUNCTION(execRemoveDeathOverlay); \
	DECLARE_FUNCTION(execDisplayDeathOverlay); \
	DECLARE_FUNCTION(execRemoveMainMenu); \
	DECLARE_FUNCTION(execDisplayMainMenu); \
	DECLARE_FUNCTION(execRemoveLoadingScreen); \
	DECLARE_FUNCTION(execDisplayLoadingScreen); \
	DECLARE_FUNCTION(execRemoveHUDOverlay); \
	DECLARE_FUNCTION(execDisplayHUDOverlay);


#define FirstProject_Source_FirstProject_MainPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RemovePauseMenu_Implementation(); \
	virtual void DisplayPauseMenu_Implementation(); \
	virtual void RemoveOptionsMenu_Implementation(); \
	virtual void DisplayOptionsMenu_Implementation(); \
	virtual void RemoveLoadGameScreen_Implementation(); \
	virtual void DisplayLoadGameScreen_Implementation(); \
	virtual void RemoveDeathOverlay_Implementation(); \
	virtual void DisplayDeathOverlay_Implementation(); \
	virtual void RemoveMainMenu_Implementation(); \
	virtual void DisplayMainMenu_Implementation(); \
	virtual void RemoveLoadingScreen_Implementation(); \
	virtual void DisplayLoadingScreen_Implementation(); \
 \
	DECLARE_FUNCTION(execToggleMainMenu); \
	DECLARE_FUNCTION(execRemovePauseMenu); \
	DECLARE_FUNCTION(execDisplayPauseMenu); \
	DECLARE_FUNCTION(execRemoveOptionsMenu); \
	DECLARE_FUNCTION(execDisplayOptionsMenu); \
	DECLARE_FUNCTION(execRemoveLoadGameScreen); \
	DECLARE_FUNCTION(execDisplayLoadGameScreen); \
	DECLARE_FUNCTION(execRemoveDeathOverlay); \
	DECLARE_FUNCTION(execDisplayDeathOverlay); \
	DECLARE_FUNCTION(execRemoveMainMenu); \
	DECLARE_FUNCTION(execDisplayMainMenu); \
	DECLARE_FUNCTION(execRemoveLoadingScreen); \
	DECLARE_FUNCTION(execDisplayLoadingScreen); \
	DECLARE_FUNCTION(execRemoveHUDOverlay); \
	DECLARE_FUNCTION(execDisplayHUDOverlay);


#define FirstProject_Source_FirstProject_MainPlayerController_h_17_EVENT_PARMS
#define FirstProject_Source_FirstProject_MainPlayerController_h_17_CALLBACK_WRAPPERS
#define FirstProject_Source_FirstProject_MainPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainPlayerController(); \
	friend struct Z_Construct_UClass_AMainPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMainPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayerController)


#define FirstProject_Source_FirstProject_MainPlayerController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAMainPlayerController(); \
	friend struct Z_Construct_UClass_AMainPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMainPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayerController)


#define FirstProject_Source_FirstProject_MainPlayerController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayerController(AMainPlayerController&&); \
	NO_API AMainPlayerController(const AMainPlayerController&); \
public:


#define FirstProject_Source_FirstProject_MainPlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayerController(AMainPlayerController&&); \
	NO_API AMainPlayerController(const AMainPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainPlayerController)


#define FirstProject_Source_FirstProject_MainPlayerController_h_17_PRIVATE_PROPERTY_OFFSET
#define FirstProject_Source_FirstProject_MainPlayerController_h_14_PROLOG \
	FirstProject_Source_FirstProject_MainPlayerController_h_17_EVENT_PARMS


#define FirstProject_Source_FirstProject_MainPlayerController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstProject_Source_FirstProject_MainPlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	FirstProject_Source_FirstProject_MainPlayerController_h_17_SPARSE_DATA \
	FirstProject_Source_FirstProject_MainPlayerController_h_17_RPC_WRAPPERS \
	FirstProject_Source_FirstProject_MainPlayerController_h_17_CALLBACK_WRAPPERS \
	FirstProject_Source_FirstProject_MainPlayerController_h_17_INCLASS \
	FirstProject_Source_FirstProject_MainPlayerController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstProject_Source_FirstProject_MainPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstProject_Source_FirstProject_MainPlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	FirstProject_Source_FirstProject_MainPlayerController_h_17_SPARSE_DATA \
	FirstProject_Source_FirstProject_MainPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstProject_Source_FirstProject_MainPlayerController_h_17_CALLBACK_WRAPPERS \
	FirstProject_Source_FirstProject_MainPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FirstProject_Source_FirstProject_MainPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPROJECT_API UClass* StaticClass<class AMainPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstProject_Source_FirstProject_MainPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
