// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FIRSTPROJECT_WeaponBase_generated_h
#error "WeaponBase.generated.h already included, missing '#pragma once' in WeaponBase.h"
#endif
#define FIRSTPROJECT_WeaponBase_generated_h

#define FirstProject_Source_FirstProject_WeaponBase_h_27_SPARSE_DATA
#define FirstProject_Source_FirstProject_WeaponBase_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeactivateCollision); \
	DECLARE_FUNCTION(execActivateCollision); \
	DECLARE_FUNCTION(execOnCombatCollisionOverlapEnd); \
	DECLARE_FUNCTION(execOnCombatCollisionOverlapBegin);


#define FirstProject_Source_FirstProject_WeaponBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeactivateCollision); \
	DECLARE_FUNCTION(execActivateCollision); \
	DECLARE_FUNCTION(execOnCombatCollisionOverlapEnd); \
	DECLARE_FUNCTION(execOnCombatCollisionOverlapBegin);


#define FirstProject_Source_FirstProject_WeaponBase_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AItemBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define FirstProject_Source_FirstProject_WeaponBase_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AItemBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define FirstProject_Source_FirstProject_WeaponBase_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public:


#define FirstProject_Source_FirstProject_WeaponBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponBase)


#define FirstProject_Source_FirstProject_WeaponBase_h_27_PRIVATE_PROPERTY_OFFSET
#define FirstProject_Source_FirstProject_WeaponBase_h_24_PROLOG
#define FirstProject_Source_FirstProject_WeaponBase_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstProject_Source_FirstProject_WeaponBase_h_27_PRIVATE_PROPERTY_OFFSET \
	FirstProject_Source_FirstProject_WeaponBase_h_27_SPARSE_DATA \
	FirstProject_Source_FirstProject_WeaponBase_h_27_RPC_WRAPPERS \
	FirstProject_Source_FirstProject_WeaponBase_h_27_INCLASS \
	FirstProject_Source_FirstProject_WeaponBase_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstProject_Source_FirstProject_WeaponBase_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstProject_Source_FirstProject_WeaponBase_h_27_PRIVATE_PROPERTY_OFFSET \
	FirstProject_Source_FirstProject_WeaponBase_h_27_SPARSE_DATA \
	FirstProject_Source_FirstProject_WeaponBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstProject_Source_FirstProject_WeaponBase_h_27_INCLASS_NO_PURE_DECLS \
	FirstProject_Source_FirstProject_WeaponBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPROJECT_API UClass* StaticClass<class AWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstProject_Source_FirstProject_WeaponBase_h


#define FOREACH_ENUM_EWEAPONSTATE(op) \
	op(EWeaponState::EWS_Pickup) \
	op(EWeaponState::EWS_Equipped) 

enum class EWeaponState : uint8;
template<> FIRSTPROJECT_API UEnum* StaticEnum<EWeaponState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
