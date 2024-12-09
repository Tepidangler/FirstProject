// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/EnemyAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAnimInstance() {}
// Cross Module References
	FIRSTPROJECT_API UClass* Z_Construct_UClass_UEnemyAnimInstance_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_UEnemyAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_FirstProject();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AEnemyBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(UEnemyAnimInstance::execUpdateAnimationProperties)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnimationProperties(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void UEnemyAnimInstance::StaticRegisterNativesUEnemyAnimInstance()
	{
		UClass* Class = UEnemyAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAnimationProperties", &UEnemyAnimInstance::execUpdateAnimationProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics
	{
		struct EnemyAnimInstance_eventUpdateAnimationProperties_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyAnimInstance_eventUpdateAnimationProperties_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationProperties" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyAnimInstance, nullptr, "UpdateAnimationProperties", nullptr, nullptr, sizeof(EnemyAnimInstance_eventUpdateAnimationProperties_Parms), Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnemyAnimInstance_NoRegister()
	{
		return UEnemyAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Roll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAccelerating_MetaData[];
#endif
		static void NewProp_bIsAccelerating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAccelerating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[];
#endif
		static void NewProp_bIsAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFullBody_MetaData[];
#endif
		static void NewProp_bIsFullBody_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFullBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[];
#endif
		static void NewProp_bIsInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationLastTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationLastTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemyAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 1951595812
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "EnemyAnimInstance.h" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//Variables\n" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
		{ "ToolTip", "Variables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyAnimInstance, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Pawn_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyAnimInstance, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Pawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Enemy_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyAnimInstance, Enemy), Z_Construct_UClass_AEnemyBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Enemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Enemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyAnimInstance, Pitch), METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Roll_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyAnimInstance, Roll), METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Roll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Yaw_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyAnimInstance, Yaw), METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_TargetRotation_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyAnimInstance, TargetRotation), METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_TargetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_TargetRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsAccelerating_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsAccelerating_SetBit(void* Obj)
	{
		((UEnemyAnimInstance*)Obj)->bIsAccelerating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsAccelerating = { "bIsAccelerating", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnemyAnimInstance), &Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsAccelerating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsAccelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsAccelerating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsAttacking_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
	{
		((UEnemyAnimInstance*)Obj)->bIsAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnemyAnimInstance), &Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsFullBody_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsFullBody_SetBit(void* Obj)
	{
		((UEnemyAnimInstance*)Obj)->bIsFullBody = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsFullBody = { "bIsFullBody", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnemyAnimInstance), &Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsFullBody_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsFullBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsFullBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsInAir_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
	{
		((UEnemyAnimInstance*)Obj)->bIsInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnemyAnimInstance), &Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_YawDelta_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_YawDelta = { "YawDelta", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyAnimInstance, YawDelta), METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_YawDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_YawDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_RotationLastTick_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_RotationLastTick = { "RotationLastTick", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyAnimInstance, RotationLastTick), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_RotationLastTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_RotationLastTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyAnimInstance, Direction), METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_StopDirection_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_StopDirection = { "StopDirection", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyAnimInstance, StopDirection), METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_StopDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_StopDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_MovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Enemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Roll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_TargetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsAccelerating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsFullBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_bIsInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_YawDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_RotationLastTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_StopDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyAnimInstance_Statics::ClassParams = {
		&UEnemyAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyAnimInstance, 243874848);
	template<> FIRSTPROJECT_API UClass* StaticClass<UEnemyAnimInstance>()
	{
		return UEnemyAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyAnimInstance(Z_Construct_UClass_UEnemyAnimInstance, &UEnemyAnimInstance::StaticClass, TEXT("/Script/FirstProject"), TEXT("UEnemyAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
