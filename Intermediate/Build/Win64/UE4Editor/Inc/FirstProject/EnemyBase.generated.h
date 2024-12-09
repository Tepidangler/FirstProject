// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacterBase;
struct FHitResult;
class UPrimitiveComponent;
class AActor;
#ifdef FIRSTPROJECT_EnemyBase_generated_h
#error "EnemyBase.generated.h already included, missing '#pragma once' in EnemyBase.h"
#endif
#define FIRSTPROJECT_EnemyBase_generated_h

#define FirstProject_Source_FirstProject_EnemyBase_h_27_SPARSE_DATA
#define FirstProject_Source_FirstProject_EnemyBase_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeathEnd); \
	DECLARE_FUNCTION(execMoveToTarget); \
	DECLARE_FUNCTION(execIsCharacterInView); \
	DECLARE_FUNCTION(execCalculateDesperation); \
	DECLARE_FUNCTION(execAttackEnd); \
	DECLARE_FUNCTION(execPlayEffortSound); \
	DECLARE_FUNCTION(execSpawnMuzzleFlashParticles); \
	DECLARE_FUNCTION(execAttack); \
	DECLARE_FUNCTION(execUltimateAttackEnd); \
	DECLARE_FUNCTION(execRightGunAboutToFire); \
	DECLARE_FUNCTION(execLeftGunAboutToFire); \
	DECLARE_FUNCTION(execRightCombatAboutToCollide); \
	DECLARE_FUNCTION(execLeftCombatAboutToCollide); \
	DECLARE_FUNCTION(execPlaySwingSound); \
	DECLARE_FUNCTION(execDeactivateCollision); \
	DECLARE_FUNCTION(execActivateCollision); \
	DECLARE_FUNCTION(execRaycast); \
	DECLARE_FUNCTION(execRightCombatCollisionOnOverlapEnd); \
	DECLARE_FUNCTION(execRightCombatCollisionOnOverlapBegin); \
	DECLARE_FUNCTION(execLeftCombatCollisionOnOverlapEnd); \
	DECLARE_FUNCTION(execLeftCombatCollisionOnOverlapBegin); \
	DECLARE_FUNCTION(execCombatSphereOnOverlapEnd); \
	DECLARE_FUNCTION(execCombatSphereOnOverlapBegin); \
	DECLARE_FUNCTION(execAgroSphereOnOverlapEnd); \
	DECLARE_FUNCTION(execAgroSphereOnOverlapBegin);


#define FirstProject_Source_FirstProject_EnemyBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeathEnd); \
	DECLARE_FUNCTION(execMoveToTarget); \
	DECLARE_FUNCTION(execIsCharacterInView); \
	DECLARE_FUNCTION(execCalculateDesperation); \
	DECLARE_FUNCTION(execAttackEnd); \
	DECLARE_FUNCTION(execPlayEffortSound); \
	DECLARE_FUNCTION(execSpawnMuzzleFlashParticles); \
	DECLARE_FUNCTION(execAttack); \
	DECLARE_FUNCTION(execUltimateAttackEnd); \
	DECLARE_FUNCTION(execRightGunAboutToFire); \
	DECLARE_FUNCTION(execLeftGunAboutToFire); \
	DECLARE_FUNCTION(execRightCombatAboutToCollide); \
	DECLARE_FUNCTION(execLeftCombatAboutToCollide); \
	DECLARE_FUNCTION(execPlaySwingSound); \
	DECLARE_FUNCTION(execDeactivateCollision); \
	DECLARE_FUNCTION(execActivateCollision); \
	DECLARE_FUNCTION(execRaycast); \
	DECLARE_FUNCTION(execRightCombatCollisionOnOverlapEnd); \
	DECLARE_FUNCTION(execRightCombatCollisionOnOverlapBegin); \
	DECLARE_FUNCTION(execLeftCombatCollisionOnOverlapEnd); \
	DECLARE_FUNCTION(execLeftCombatCollisionOnOverlapBegin); \
	DECLARE_FUNCTION(execCombatSphereOnOverlapEnd); \
	DECLARE_FUNCTION(execCombatSphereOnOverlapBegin); \
	DECLARE_FUNCTION(execAgroSphereOnOverlapEnd); \
	DECLARE_FUNCTION(execAgroSphereOnOverlapBegin);


#define FirstProject_Source_FirstProject_EnemyBase_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyBase(); \
	friend struct Z_Construct_UClass_AEnemyBase_Statics; \
public: \
	DECLARE_CLASS(AEnemyBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(AEnemyBase) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemyBase*>(this); }


#define FirstProject_Source_FirstProject_EnemyBase_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyBase(); \
	friend struct Z_Construct_UClass_AEnemyBase_Statics; \
public: \
	DECLARE_CLASS(AEnemyBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(AEnemyBase) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemyBase*>(this); }


#define FirstProject_Source_FirstProject_EnemyBase_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyBase(AEnemyBase&&); \
	NO_API AEnemyBase(const AEnemyBase&); \
public:


#define FirstProject_Source_FirstProject_EnemyBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyBase(AEnemyBase&&); \
	NO_API AEnemyBase(const AEnemyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyBase)


#define FirstProject_Source_FirstProject_EnemyBase_h_27_PRIVATE_PROPERTY_OFFSET
#define FirstProject_Source_FirstProject_EnemyBase_h_24_PROLOG
#define FirstProject_Source_FirstProject_EnemyBase_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstProject_Source_FirstProject_EnemyBase_h_27_PRIVATE_PROPERTY_OFFSET \
	FirstProject_Source_FirstProject_EnemyBase_h_27_SPARSE_DATA \
	FirstProject_Source_FirstProject_EnemyBase_h_27_RPC_WRAPPERS \
	FirstProject_Source_FirstProject_EnemyBase_h_27_INCLASS \
	FirstProject_Source_FirstProject_EnemyBase_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstProject_Source_FirstProject_EnemyBase_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstProject_Source_FirstProject_EnemyBase_h_27_PRIVATE_PROPERTY_OFFSET \
	FirstProject_Source_FirstProject_EnemyBase_h_27_SPARSE_DATA \
	FirstProject_Source_FirstProject_EnemyBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstProject_Source_FirstProject_EnemyBase_h_27_INCLASS_NO_PURE_DECLS \
	FirstProject_Source_FirstProject_EnemyBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPROJECT_API UClass* StaticClass<class AEnemyBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstProject_Source_FirstProject_EnemyBase_h


#define FOREACH_ENUM_EENEMYMOVEMENTSTATUS(op) \
	op(EEnemyMovementStatus::EMS_Idle) \
	op(EEnemyMovementStatus::EMS_MoveToTarget) \
	op(EEnemyMovementStatus::EMS_Attacking) \
	op(EEnemyMovementStatus::EMS_Dead) 

enum class EEnemyMovementStatus : uint8;
template<> FIRSTPROJECT_API UEnum* StaticEnum<EEnemyMovementStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
