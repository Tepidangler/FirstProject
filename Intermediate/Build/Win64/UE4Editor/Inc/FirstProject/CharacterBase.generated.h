// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPROJECT_CharacterBase_generated_h
#error "CharacterBase.generated.h already included, missing '#pragma once' in CharacterBase.h"
#endif
#define FIRSTPROJECT_CharacterBase_generated_h

#define FirstProject_Source_FirstProject_CharacterBase_h_34_SPARSE_DATA
#define FirstProject_Source_FirstProject_CharacterBase_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadGame); \
	DECLARE_FUNCTION(execSaveGame); \
	DECLARE_FUNCTION(execSwitchLevel); \
	DECLARE_FUNCTION(execUpdateCombatTarget); \
	DECLARE_FUNCTION(execPlaySwingSound); \
	DECLARE_FUNCTION(execShowPickupLocations); \
	DECLARE_FUNCTION(execAttackEnd); \
	DECLARE_FUNCTION(execDeathEnd); \
	DECLARE_FUNCTION(execDie);


#define FirstProject_Source_FirstProject_CharacterBase_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadGame); \
	DECLARE_FUNCTION(execSaveGame); \
	DECLARE_FUNCTION(execSwitchLevel); \
	DECLARE_FUNCTION(execUpdateCombatTarget); \
	DECLARE_FUNCTION(execPlaySwingSound); \
	DECLARE_FUNCTION(execShowPickupLocations); \
	DECLARE_FUNCTION(execAttackEnd); \
	DECLARE_FUNCTION(execDeathEnd); \
	DECLARE_FUNCTION(execDie);


#define FirstProject_Source_FirstProject_CharacterBase_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(ACharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ACharacterBase*>(this); }


#define FirstProject_Source_FirstProject_CharacterBase_h_34_INCLASS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(ACharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ACharacterBase*>(this); }


#define FirstProject_Source_FirstProject_CharacterBase_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterBase(ACharacterBase&&); \
	NO_API ACharacterBase(const ACharacterBase&); \
public:


#define FirstProject_Source_FirstProject_CharacterBase_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterBase(ACharacterBase&&); \
	NO_API ACharacterBase(const ACharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterBase)


#define FirstProject_Source_FirstProject_CharacterBase_h_34_PRIVATE_PROPERTY_OFFSET
#define FirstProject_Source_FirstProject_CharacterBase_h_31_PROLOG
#define FirstProject_Source_FirstProject_CharacterBase_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstProject_Source_FirstProject_CharacterBase_h_34_PRIVATE_PROPERTY_OFFSET \
	FirstProject_Source_FirstProject_CharacterBase_h_34_SPARSE_DATA \
	FirstProject_Source_FirstProject_CharacterBase_h_34_RPC_WRAPPERS \
	FirstProject_Source_FirstProject_CharacterBase_h_34_INCLASS \
	FirstProject_Source_FirstProject_CharacterBase_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstProject_Source_FirstProject_CharacterBase_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstProject_Source_FirstProject_CharacterBase_h_34_PRIVATE_PROPERTY_OFFSET \
	FirstProject_Source_FirstProject_CharacterBase_h_34_SPARSE_DATA \
	FirstProject_Source_FirstProject_CharacterBase_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstProject_Source_FirstProject_CharacterBase_h_34_INCLASS_NO_PURE_DECLS \
	FirstProject_Source_FirstProject_CharacterBase_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPROJECT_API UClass* StaticClass<class ACharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstProject_Source_FirstProject_CharacterBase_h


#define FOREACH_ENUM_ESTAMINASTATUS(op) \
	op(EStaminaStatus::ESS_Normal) \
	op(EStaminaStatus::ESS_Fatigued) \
	op(EStaminaStatus::ESS_Exhausted) \
	op(EStaminaStatus::ESS_ExhaustedRecovering) 

enum class EStaminaStatus : uint8;
template<> FIRSTPROJECT_API UEnum* StaticEnum<EStaminaStatus>();

#define FOREACH_ENUM_EMOVEMENTSTATUS(op) \
	op(EMovementStatus::EMS_Normal) \
	op(EMovementStatus::EMS_Sprinting) \
	op(EMovementStatus::EMS_Dead) 

enum class EMovementStatus : uint8;
template<> FIRSTPROJECT_API UEnum* StaticEnum<EMovementStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
