// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/EnemyBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyBase() {}
// Cross Module References
	FIRSTPROJECT_API UEnum* Z_Construct_UEnum_FirstProject_EEnemyMovementStatus();
	UPackage* Z_Construct_UPackage__Script_FirstProject();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AEnemyBase_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AEnemyBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_ACharacterBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AProjectileBase_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_UFirstInterface_NoRegister();
// End Cross Module References
	static UEnum* EEnemyMovementStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirstProject_EEnemyMovementStatus, Z_Construct_UPackage__Script_FirstProject(), TEXT("EEnemyMovementStatus"));
		}
		return Singleton;
	}
	template<> FIRSTPROJECT_API UEnum* StaticEnum<EEnemyMovementStatus>()
	{
		return EEnemyMovementStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnemyMovementStatus(EEnemyMovementStatus_StaticEnum, TEXT("/Script/FirstProject"), TEXT("EEnemyMovementStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirstProject_EEnemyMovementStatus_Hash() { return 164516555U; }
	UEnum* Z_Construct_UEnum_FirstProject_EEnemyMovementStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirstProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnemyMovementStatus"), 0, Get_Z_Construct_UEnum_FirstProject_EEnemyMovementStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnemyMovementStatus::EMS_Idle", (int64)EEnemyMovementStatus::EMS_Idle },
				{ "EEnemyMovementStatus::EMS_MoveToTarget", (int64)EEnemyMovementStatus::EMS_MoveToTarget },
				{ "EEnemyMovementStatus::EMS_Attacking", (int64)EEnemyMovementStatus::EMS_Attacking },
				{ "EEnemyMovementStatus::EMS_Dead", (int64)EEnemyMovementStatus::EMS_Dead },
				{ "EEnemyMovementStatus::EMS_MAX", (int64)EEnemyMovementStatus::EMS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EMS_Attacking.DisplayName", "Attacking" },
				{ "EMS_Attacking.Name", "EEnemyMovementStatus::EMS_Attacking" },
				{ "EMS_Dead.DisplayName", "Dead" },
				{ "EMS_Dead.Name", "EEnemyMovementStatus::EMS_Dead" },
				{ "EMS_Idle.DisplayName", "Idle" },
				{ "EMS_Idle.Name", "EEnemyMovementStatus::EMS_Idle" },
				{ "EMS_MAX.DisplayName", "Default_MAX" },
				{ "EMS_MAX.Name", "EEnemyMovementStatus::EMS_MAX" },
				{ "EMS_MoveToTarget.DisplayName", "MoveToTarget" },
				{ "EMS_MoveToTarget.Name", "EEnemyMovementStatus::EMS_MoveToTarget" },
				{ "ModuleRelativePath", "EnemyBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirstProject,
				nullptr,
				"EEnemyMovementStatus",
				"EEnemyMovementStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(AEnemyBase::execDeathEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeathEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execMoveToTarget)
	{
		P_GET_OBJECT(ACharacterBase,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveToTarget(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execIsCharacterInView)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCharacterInView();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execCalculateDesperation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculateDesperation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execAttackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execPlayEffortSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayEffortSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execSpawnMuzzleFlashParticles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnMuzzleFlashParticles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Attack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execUltimateAttackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UltimateAttackEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execRightGunAboutToFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RightGunAboutToFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execLeftGunAboutToFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LeftGunAboutToFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execRightCombatAboutToCollide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RightCombatAboutToCollide();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execLeftCombatAboutToCollide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LeftCombatAboutToCollide();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execPlaySwingSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySwingSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execDeactivateCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execActivateCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execRaycast)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Raycast(Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execRightCombatCollisionOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RightCombatCollisionOnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execRightCombatCollisionOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RightCombatCollisionOnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execLeftCombatCollisionOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LeftCombatCollisionOnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execLeftCombatCollisionOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LeftCombatCollisionOnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execCombatSphereOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CombatSphereOnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execCombatSphereOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CombatSphereOnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execAgroSphereOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AgroSphereOnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execAgroSphereOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AgroSphereOnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AEnemyBase::StaticRegisterNativesAEnemyBase()
	{
		UClass* Class = AEnemyBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateCollision", &AEnemyBase::execActivateCollision },
			{ "AgroSphereOnOverlapBegin", &AEnemyBase::execAgroSphereOnOverlapBegin },
			{ "AgroSphereOnOverlapEnd", &AEnemyBase::execAgroSphereOnOverlapEnd },
			{ "Attack", &AEnemyBase::execAttack },
			{ "AttackEnd", &AEnemyBase::execAttackEnd },
			{ "CalculateDesperation", &AEnemyBase::execCalculateDesperation },
			{ "CombatSphereOnOverlapBegin", &AEnemyBase::execCombatSphereOnOverlapBegin },
			{ "CombatSphereOnOverlapEnd", &AEnemyBase::execCombatSphereOnOverlapEnd },
			{ "DeactivateCollision", &AEnemyBase::execDeactivateCollision },
			{ "DeathEnd", &AEnemyBase::execDeathEnd },
			{ "IsCharacterInView", &AEnemyBase::execIsCharacterInView },
			{ "LeftCombatAboutToCollide", &AEnemyBase::execLeftCombatAboutToCollide },
			{ "LeftCombatCollisionOnOverlapBegin", &AEnemyBase::execLeftCombatCollisionOnOverlapBegin },
			{ "LeftCombatCollisionOnOverlapEnd", &AEnemyBase::execLeftCombatCollisionOnOverlapEnd },
			{ "LeftGunAboutToFire", &AEnemyBase::execLeftGunAboutToFire },
			{ "MoveToTarget", &AEnemyBase::execMoveToTarget },
			{ "PlayEffortSound", &AEnemyBase::execPlayEffortSound },
			{ "PlaySwingSound", &AEnemyBase::execPlaySwingSound },
			{ "Raycast", &AEnemyBase::execRaycast },
			{ "RightCombatAboutToCollide", &AEnemyBase::execRightCombatAboutToCollide },
			{ "RightCombatCollisionOnOverlapBegin", &AEnemyBase::execRightCombatCollisionOnOverlapBegin },
			{ "RightCombatCollisionOnOverlapEnd", &AEnemyBase::execRightCombatCollisionOnOverlapEnd },
			{ "RightGunAboutToFire", &AEnemyBase::execRightGunAboutToFire },
			{ "SpawnMuzzleFlashParticles", &AEnemyBase::execSpawnMuzzleFlashParticles },
			{ "UltimateAttackEnd", &AEnemyBase::execUltimateAttackEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyBase_ActivateCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_ActivateCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_ActivateCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "ActivateCollision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_ActivateCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_ActivateCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_ActivateCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_ActivateCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics
	{
		struct EnemyBase_eventAgroSphereOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventAgroSphereOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventAgroSphereOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventAgroSphereOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventAgroSphereOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((EnemyBase_eventAgroSphereOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EnemyBase_eventAgroSphereOnOverlapBegin_Parms), &Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventAgroSphereOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "AgroSphereOnOverlapBegin", nullptr, nullptr, sizeof(EnemyBase_eventAgroSphereOnOverlapBegin_Parms), Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd_Statics
	{
		struct EnemyBase_eventAgroSphereOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventAgroSphereOnOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventAgroSphereOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventAgroSphereOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventAgroSphereOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "AgroSphereOnOverlapEnd", nullptr, nullptr, sizeof(EnemyBase_eventAgroSphereOnOverlapEnd_Parms), Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_Attack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_Attack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "Attack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_Attack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_AttackEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_AttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_AttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "AttackEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_AttackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_AttackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_AttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_AttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_CalculateDesperation_Statics
	{
		struct EnemyBase_eventCalculateDesperation_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemyBase_CalculateDesperation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventCalculateDesperation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_CalculateDesperation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_CalculateDesperation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_CalculateDesperation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_CalculateDesperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "CalculateDesperation", nullptr, nullptr, sizeof(EnemyBase_eventCalculateDesperation_Parms), Z_Construct_UFunction_AEnemyBase_CalculateDesperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_CalculateDesperation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_CalculateDesperation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_CalculateDesperation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_CalculateDesperation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_CalculateDesperation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics
	{
		struct EnemyBase_eventCombatSphereOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventCombatSphereOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventCombatSphereOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventCombatSphereOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventCombatSphereOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((EnemyBase_eventCombatSphereOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EnemyBase_eventCombatSphereOnOverlapBegin_Parms), &Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventCombatSphereOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "CombatSphereOnOverlapBegin", nullptr, nullptr, sizeof(EnemyBase_eventCombatSphereOnOverlapBegin_Parms), Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd_Statics
	{
		struct EnemyBase_eventCombatSphereOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventCombatSphereOnOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventCombatSphereOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventCombatSphereOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventCombatSphereOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "CombatSphereOnOverlapEnd", nullptr, nullptr, sizeof(EnemyBase_eventCombatSphereOnOverlapEnd_Parms), Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_DeactivateCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_DeactivateCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_DeactivateCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "DeactivateCollision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_DeactivateCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_DeactivateCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_DeactivateCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_DeactivateCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_DeathEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_DeathEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_DeathEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "DeathEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_DeathEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_DeathEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_DeathEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_DeathEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_IsCharacterInView_Statics
	{
		struct EnemyBase_eventIsCharacterInView_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AEnemyBase_IsCharacterInView_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EnemyBase_eventIsCharacterInView_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyBase_IsCharacterInView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EnemyBase_eventIsCharacterInView_Parms), &Z_Construct_UFunction_AEnemyBase_IsCharacterInView_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_IsCharacterInView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_IsCharacterInView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_IsCharacterInView_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_IsCharacterInView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "IsCharacterInView", nullptr, nullptr, sizeof(EnemyBase_eventIsCharacterInView_Parms), Z_Construct_UFunction_AEnemyBase_IsCharacterInView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_IsCharacterInView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_IsCharacterInView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_IsCharacterInView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_IsCharacterInView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_IsCharacterInView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_LeftCombatAboutToCollide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_LeftCombatAboutToCollide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_LeftCombatAboutToCollide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "LeftCombatAboutToCollide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_LeftCombatAboutToCollide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_LeftCombatAboutToCollide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_LeftCombatAboutToCollide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_LeftCombatAboutToCollide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics
	{
		struct EnemyBase_eventLeftCombatCollisionOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventLeftCombatCollisionOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventLeftCombatCollisionOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventLeftCombatCollisionOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventLeftCombatCollisionOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((EnemyBase_eventLeftCombatCollisionOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EnemyBase_eventLeftCombatCollisionOnOverlapBegin_Parms), &Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventLeftCombatCollisionOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "LeftCombatCollisionOnOverlapBegin", nullptr, nullptr, sizeof(EnemyBase_eventLeftCombatCollisionOnOverlapBegin_Parms), Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd_Statics
	{
		struct EnemyBase_eventLeftCombatCollisionOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventLeftCombatCollisionOnOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventLeftCombatCollisionOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventLeftCombatCollisionOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventLeftCombatCollisionOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "LeftCombatCollisionOnOverlapEnd", nullptr, nullptr, sizeof(EnemyBase_eventLeftCombatCollisionOnOverlapEnd_Parms), Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_LeftGunAboutToFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_LeftGunAboutToFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_LeftGunAboutToFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "LeftGunAboutToFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_LeftGunAboutToFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_LeftGunAboutToFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_LeftGunAboutToFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_LeftGunAboutToFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_MoveToTarget_Statics
	{
		struct EnemyBase_eventMoveToTarget_Parms
		{
			ACharacterBase* Target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_MoveToTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventMoveToTarget_Parms, Target), Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_MoveToTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_MoveToTarget_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_MoveToTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_MoveToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "MoveToTarget", nullptr, nullptr, sizeof(EnemyBase_eventMoveToTarget_Parms), Z_Construct_UFunction_AEnemyBase_MoveToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_MoveToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_MoveToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_MoveToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_MoveToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_MoveToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_PlayEffortSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_PlayEffortSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_PlayEffortSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "PlayEffortSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_PlayEffortSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_PlayEffortSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_PlayEffortSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_PlayEffortSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_PlaySwingSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_PlaySwingSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_PlaySwingSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "PlaySwingSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_PlaySwingSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_PlaySwingSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_PlaySwingSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_PlaySwingSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_Raycast_Statics
	{
		struct EnemyBase_eventRaycast_Parms
		{
			FHitResult HitResult;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyBase_Raycast_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventRaycast_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AEnemyBase_Raycast_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EnemyBase_eventRaycast_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyBase_Raycast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EnemyBase_eventRaycast_Parms), &Z_Construct_UFunction_AEnemyBase_Raycast_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_Raycast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_Raycast_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_Raycast_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_Raycast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_Raycast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "Raycast", nullptr, nullptr, sizeof(EnemyBase_eventRaycast_Parms), Z_Construct_UFunction_AEnemyBase_Raycast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_Raycast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_Raycast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_Raycast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_Raycast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_Raycast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_RightCombatAboutToCollide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_RightCombatAboutToCollide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_RightCombatAboutToCollide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "RightCombatAboutToCollide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_RightCombatAboutToCollide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_RightCombatAboutToCollide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_RightCombatAboutToCollide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_RightCombatAboutToCollide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics
	{
		struct EnemyBase_eventRightCombatCollisionOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventRightCombatCollisionOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventRightCombatCollisionOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventRightCombatCollisionOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventRightCombatCollisionOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((EnemyBase_eventRightCombatCollisionOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EnemyBase_eventRightCombatCollisionOnOverlapBegin_Parms), &Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventRightCombatCollisionOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "RightCombatCollisionOnOverlapBegin", nullptr, nullptr, sizeof(EnemyBase_eventRightCombatCollisionOnOverlapBegin_Parms), Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd_Statics
	{
		struct EnemyBase_eventRightCombatCollisionOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventRightCombatCollisionOnOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventRightCombatCollisionOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventRightCombatCollisionOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBase_eventRightCombatCollisionOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "RightCombatCollisionOnOverlapEnd", nullptr, nullptr, sizeof(EnemyBase_eventRightCombatCollisionOnOverlapEnd_Parms), Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_RightGunAboutToFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_RightGunAboutToFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_RightGunAboutToFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "RightGunAboutToFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_RightGunAboutToFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_RightGunAboutToFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_RightGunAboutToFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_RightGunAboutToFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_SpawnMuzzleFlashParticles_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_SpawnMuzzleFlashParticles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_SpawnMuzzleFlashParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "SpawnMuzzleFlashParticles", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_SpawnMuzzleFlashParticles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_SpawnMuzzleFlashParticles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_SpawnMuzzleFlashParticles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_SpawnMuzzleFlashParticles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_UltimateAttackEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_UltimateAttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_UltimateAttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "UltimateAttackEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyBase_UltimateAttackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_UltimateAttackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyBase_UltimateAttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyBase_UltimateAttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemyBase_NoRegister()
	{
		return AEnemyBase::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnemyMovementStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyMovementStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnemyMovementStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgroSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AgroSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverlappingAgroSphere_MetaData[];
#endif
		static void NewProp_bOverlappingAgroSphere_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverlappingAgroSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombatSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftCombatCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftCombatCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightCombatCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightCombatCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwingSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwingSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffortSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffortSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverlappingCombatSphere_MetaData[];
#endif
		static void NewProp_bOverlappingCombatSphere_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverlappingCombatSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombatTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombatMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeathDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackMinTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackMinTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackMaxTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackMaxTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Desperation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Desperation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttacking_MetaData[];
#endif
		static void NewProp_bAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMeleeCombat_MetaData[];
#endif
		static void NewProp_bMeleeCombat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMeleeCombat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBossEnemy_MetaData[];
#endif
		static void NewProp_bIsBossEnemy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBossEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShooting_MetaData[];
#endif
		static void NewProp_bShooting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShooting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLeftGunFiring_MetaData[];
#endif
		static void NewProp_bLeftGunFiring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeftGunFiring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRightGunFiring_MetaData[];
#endif
		static void NewProp_bRightGunFiring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRightGunFiring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUltimateAttack_MetaData[];
#endif
		static void NewProp_bUltimateAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUltimateAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCharging_MetaData[];
#endif
		static void NewProp_bCharging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCharging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponFireParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponFireParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MuzzleOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyBase_ActivateCollision, "ActivateCollision" }, // 1601092389
		{ &Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapBegin, "AgroSphereOnOverlapBegin" }, // 1751746818
		{ &Z_Construct_UFunction_AEnemyBase_AgroSphereOnOverlapEnd, "AgroSphereOnOverlapEnd" }, // 1219562678
		{ &Z_Construct_UFunction_AEnemyBase_Attack, "Attack" }, // 1772083125
		{ &Z_Construct_UFunction_AEnemyBase_AttackEnd, "AttackEnd" }, // 3565118293
		{ &Z_Construct_UFunction_AEnemyBase_CalculateDesperation, "CalculateDesperation" }, // 3053988642
		{ &Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapBegin, "CombatSphereOnOverlapBegin" }, // 812691945
		{ &Z_Construct_UFunction_AEnemyBase_CombatSphereOnOverlapEnd, "CombatSphereOnOverlapEnd" }, // 4099229471
		{ &Z_Construct_UFunction_AEnemyBase_DeactivateCollision, "DeactivateCollision" }, // 22622056
		{ &Z_Construct_UFunction_AEnemyBase_DeathEnd, "DeathEnd" }, // 2625771603
		{ &Z_Construct_UFunction_AEnemyBase_IsCharacterInView, "IsCharacterInView" }, // 2815249943
		{ &Z_Construct_UFunction_AEnemyBase_LeftCombatAboutToCollide, "LeftCombatAboutToCollide" }, // 2975970297
		{ &Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapBegin, "LeftCombatCollisionOnOverlapBegin" }, // 3314428732
		{ &Z_Construct_UFunction_AEnemyBase_LeftCombatCollisionOnOverlapEnd, "LeftCombatCollisionOnOverlapEnd" }, // 3426603043
		{ &Z_Construct_UFunction_AEnemyBase_LeftGunAboutToFire, "LeftGunAboutToFire" }, // 3260977487
		{ &Z_Construct_UFunction_AEnemyBase_MoveToTarget, "MoveToTarget" }, // 155192528
		{ &Z_Construct_UFunction_AEnemyBase_PlayEffortSound, "PlayEffortSound" }, // 2688793904
		{ &Z_Construct_UFunction_AEnemyBase_PlaySwingSound, "PlaySwingSound" }, // 2248861105
		{ &Z_Construct_UFunction_AEnemyBase_Raycast, "Raycast" }, // 3620142750
		{ &Z_Construct_UFunction_AEnemyBase_RightCombatAboutToCollide, "RightCombatAboutToCollide" }, // 4220293078
		{ &Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapBegin, "RightCombatCollisionOnOverlapBegin" }, // 646650669
		{ &Z_Construct_UFunction_AEnemyBase_RightCombatCollisionOnOverlapEnd, "RightCombatCollisionOnOverlapEnd" }, // 1015936023
		{ &Z_Construct_UFunction_AEnemyBase_RightGunAboutToFire, "RightGunAboutToFire" }, // 2447075227
		{ &Z_Construct_UFunction_AEnemyBase_SpawnMuzzleFlashParticles, "SpawnMuzzleFlashParticles" }, // 2426169924
		{ &Z_Construct_UFunction_AEnemyBase_UltimateAttackEnd, "UltimateAttackEnd" }, // 134329933
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyBase.h" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_EnemyMovementStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_EnemyMovementStatus_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_EnemyMovementStatus = { "EnemyMovementStatus", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, EnemyMovementStatus), Z_Construct_UEnum_FirstProject_EEnemyMovementStatus, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_EnemyMovementStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_EnemyMovementStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_AgroSphere_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_AgroSphere = { "AgroSphere", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, AgroSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_AgroSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_AgroSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_bOverlappingAgroSphere_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	void Z_Construct_UClass_AEnemyBase_Statics::NewProp_bOverlappingAgroSphere_SetBit(void* Obj)
	{
		((AEnemyBase*)Obj)->bOverlappingAgroSphere = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_bOverlappingAgroSphere = { "bOverlappingAgroSphere", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemyBase), &Z_Construct_UClass_AEnemyBase_Statics::NewProp_bOverlappingAgroSphere_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_bOverlappingAgroSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_bOverlappingAgroSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_CombatSphere_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_CombatSphere = { "CombatSphere", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, CombatSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_CombatSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_CombatSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_LeftCombatCollision_MetaData[] = {
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_LeftCombatCollision = { "LeftCombatCollision", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, LeftCombatCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_LeftCombatCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_LeftCombatCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_RightCombatCollision_MetaData[] = {
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_RightCombatCollision = { "RightCombatCollision", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, RightCombatCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_RightCombatCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_RightCombatCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_HitSound_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_HitSound = { "HitSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, HitSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_HitSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_HitSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_SwingSound_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_SwingSound = { "SwingSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, SwingSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_SwingSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_SwingSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_EffortSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_EffortSound = { "EffortSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, EffortSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_EffortSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_EffortSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_AIController_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_AIController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_AIController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_bOverlappingCombatSphere_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	void Z_Construct_UClass_AEnemyBase_Statics::NewProp_bOverlappingCombatSphere_SetBit(void* Obj)
	{
		((AEnemyBase*)Obj)->bOverlappingCombatSphere = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_bOverlappingCombatSphere = { "bOverlappingCombatSphere", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemyBase), &Z_Construct_UClass_AEnemyBase_Statics::NewProp_bOverlappingCombatSphere_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_bOverlappingCombatSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_bOverlappingCombatSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_CombatTarget_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_CombatTarget = { "CombatTarget", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, CombatTarget), Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_CombatTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_CombatTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_CombatMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_CombatMontage = { "CombatMontage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, CombatMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_CombatMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_CombatMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_DeathDelay_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_DeathDelay = { "DeathDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, DeathDelay), METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_DeathDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_DeathDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_AttackMinTime_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_AttackMinTime = { "AttackMinTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, AttackMinTime), METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_AttackMinTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_AttackMinTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_AttackMaxTime_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_AttackMaxTime = { "AttackMaxTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, AttackMaxTime), METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_AttackMaxTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_AttackMaxTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, Health), METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, Damage), METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_Desperation_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_Desperation = { "Desperation", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, Desperation), METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_Desperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_Desperation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_HitParticles_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_HitParticles = { "HitParticles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, HitParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_HitParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_HitParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_DeathParticles_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_DeathParticles = { "DeathParticles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, DeathParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_DeathParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_DeathParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_bAttacking_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	void Z_Construct_UClass_AEnemyBase_Statics::NewProp_bAttacking_SetBit(void* Obj)
	{
		((AEnemyBase*)Obj)->bAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_bAttacking = { "bAttacking", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemyBase), &Z_Construct_UClass_AEnemyBase_Statics::NewProp_bAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_bAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_bAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_bMeleeCombat_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	void Z_Construct_UClass_AEnemyBase_Statics::NewProp_bMeleeCombat_SetBit(void* Obj)
	{
		((AEnemyBase*)Obj)->bMeleeCombat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_bMeleeCombat = { "bMeleeCombat", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemyBase), &Z_Construct_UClass_AEnemyBase_Statics::NewProp_bMeleeCombat_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_bMeleeCombat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_bMeleeCombat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_bIsBossEnemy_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	void Z_Construct_UClass_AEnemyBase_Statics::NewProp_bIsBossEnemy_SetBit(void* Obj)
	{
		((AEnemyBase*)Obj)->bIsBossEnemy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_bIsBossEnemy = { "bIsBossEnemy", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemyBase), &Z_Construct_UClass_AEnemyBase_Statics::NewProp_bIsBossEnemy_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_bIsBossEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_bIsBossEnemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_bShooting_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	void Z_Construct_UClass_AEnemyBase_Statics::NewProp_bShooting_SetBit(void* Obj)
	{
		((AEnemyBase*)Obj)->bShooting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_bShooting = { "bShooting", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemyBase), &Z_Construct_UClass_AEnemyBase_Statics::NewProp_bShooting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_bShooting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_bShooting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_bLeftGunFiring_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	void Z_Construct_UClass_AEnemyBase_Statics::NewProp_bLeftGunFiring_SetBit(void* Obj)
	{
		((AEnemyBase*)Obj)->bLeftGunFiring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_bLeftGunFiring = { "bLeftGunFiring", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemyBase), &Z_Construct_UClass_AEnemyBase_Statics::NewProp_bLeftGunFiring_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_bLeftGunFiring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_bLeftGunFiring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_bRightGunFiring_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	void Z_Construct_UClass_AEnemyBase_Statics::NewProp_bRightGunFiring_SetBit(void* Obj)
	{
		((AEnemyBase*)Obj)->bRightGunFiring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_bRightGunFiring = { "bRightGunFiring", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemyBase), &Z_Construct_UClass_AEnemyBase_Statics::NewProp_bRightGunFiring_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_bRightGunFiring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_bRightGunFiring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_bUltimateAttack_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	void Z_Construct_UClass_AEnemyBase_Statics::NewProp_bUltimateAttack_SetBit(void* Obj)
	{
		((AEnemyBase*)Obj)->bUltimateAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_bUltimateAttack = { "bUltimateAttack", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemyBase), &Z_Construct_UClass_AEnemyBase_Statics::NewProp_bUltimateAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_bUltimateAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_bUltimateAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_bCharging_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	void Z_Construct_UClass_AEnemyBase_Statics::NewProp_bCharging_SetBit(void* Obj)
	{
		((AEnemyBase*)Obj)->bCharging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_bCharging = { "bCharging", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemyBase), &Z_Construct_UClass_AEnemyBase_Statics::NewProp_bCharging_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_bCharging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_bCharging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_WeaponFireParticles_MetaData[] = {
		{ "Category", "Particles" },
		{ "Comment", "//Particles emitted when weapon fired\n" },
		{ "ModuleRelativePath", "EnemyBase.h" },
		{ "ToolTip", "Particles emitted when weapon fired" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_WeaponFireParticles = { "WeaponFireParticles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, WeaponFireParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_WeaponFireParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_WeaponFireParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_DamageTypeClass_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, DamageTypeClass), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_DamageTypeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_DamageTypeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_MuzzleOffset_MetaData[] = {
		{ "Category", "Combat | Projectile" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_MuzzleOffset = { "MuzzleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, MuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_MuzzleOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_MuzzleOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Combat | Projectile" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyBase, ProjectileClass), Z_Construct_UClass_AProjectileBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_ProjectileClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_EnemyMovementStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_EnemyMovementStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_AgroSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_bOverlappingAgroSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_CombatSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_LeftCombatCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_RightCombatCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_HitSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_SwingSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_EffortSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_bOverlappingCombatSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_CombatTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_CombatMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_DeathDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_AttackMinTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_AttackMaxTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_Desperation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_HitParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_DeathParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_bAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_bMeleeCombat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_bIsBossEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_bShooting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_bLeftGunFiring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_bRightGunFiring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_bUltimateAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_bCharging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_WeaponFireParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_DamageTypeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_MuzzleOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_ProjectileClass,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnemyBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFirstInterface_NoRegister, (int32)VTABLE_OFFSET(AEnemyBase, IFirstInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyBase_Statics::ClassParams = {
		&AEnemyBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyBase, 853146731);
	template<> FIRSTPROJECT_API UClass* StaticClass<AEnemyBase>()
	{
		return AEnemyBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyBase(Z_Construct_UClass_AEnemyBase, &AEnemyBase::StaticClass, TEXT("/Script/FirstProject"), TEXT("AEnemyBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
