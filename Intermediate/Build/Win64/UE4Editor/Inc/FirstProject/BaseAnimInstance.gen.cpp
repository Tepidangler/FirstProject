// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/BaseAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAnimInstance() {}
// Cross Module References
	FIRSTPROJECT_API UClass* Z_Construct_UClass_UBaseAnimInstance_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_UBaseAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_FirstProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_ACharacterBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBaseAnimInstance::execPlaySwingEffortSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySwingEffortSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseAnimInstance::execGetNextAttackRecoverySection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetNextAttackRecoverySection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseAnimInstance::execUpdateAnimationProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnimationProperties();
		P_NATIVE_END;
	}
	void UBaseAnimInstance::StaticRegisterNativesUBaseAnimInstance()
	{
		UClass* Class = UBaseAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNextAttackRecoverySection", &UBaseAnimInstance::execGetNextAttackRecoverySection },
			{ "PlaySwingEffortSound", &UBaseAnimInstance::execPlaySwingEffortSound },
			{ "UpdateAnimationProperties", &UBaseAnimInstance::execUpdateAnimationProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseAnimInstance_GetNextAttackRecoverySection_Statics
	{
		struct BaseAnimInstance_eventGetNextAttackRecoverySection_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBaseAnimInstance_GetNextAttackRecoverySection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseAnimInstance_eventGetNextAttackRecoverySection_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAnimInstance_GetNextAttackRecoverySection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAnimInstance_GetNextAttackRecoverySection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAnimInstance_GetNextAttackRecoverySection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage | Section Name" },
		{ "ModuleRelativePath", "BaseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAnimInstance_GetNextAttackRecoverySection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAnimInstance, nullptr, "GetNextAttackRecoverySection", nullptr, nullptr, sizeof(BaseAnimInstance_eventGetNextAttackRecoverySection_Parms), Z_Construct_UFunction_UBaseAnimInstance_GetNextAttackRecoverySection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAnimInstance_GetNextAttackRecoverySection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseAnimInstance_GetNextAttackRecoverySection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAnimInstance_GetNextAttackRecoverySection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseAnimInstance_GetNextAttackRecoverySection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseAnimInstance_GetNextAttackRecoverySection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseAnimInstance_PlaySwingEffortSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAnimInstance_PlaySwingEffortSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "BaseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAnimInstance_PlaySwingEffortSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAnimInstance, nullptr, "PlaySwingEffortSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseAnimInstance_PlaySwingEffortSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAnimInstance_PlaySwingEffortSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseAnimInstance_PlaySwingEffortSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseAnimInstance_PlaySwingEffortSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseAnimInstance_UpdateAnimationProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationProperties" },
		{ "ModuleRelativePath", "BaseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAnimInstance_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAnimInstance, nullptr, "UpdateAnimationProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseAnimInstance_UpdateAnimationProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseAnimInstance_UpdateAnimationProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseAnimInstance_NoRegister()
	{
		return UBaseAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBaseAnimInstance_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MC;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWeaponEquipped_MetaData[];
#endif
		static void NewProp_bIsWeaponEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWeaponEquipped;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttackRecoverySections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackRecoverySections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttackRecoverySections;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MontageSections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageSections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MontageSections;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseAnimInstance_GetNextAttackRecoverySection, "GetNextAttackRecoverySection" }, // 3755906606
		{ &Z_Construct_UFunction_UBaseAnimInstance_PlaySwingEffortSound, "PlaySwingEffortSound" }, // 1978460591
		{ &Z_Construct_UFunction_UBaseAnimInstance_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 2859480820
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "BaseAnimInstance.h" },
		{ "ModuleRelativePath", "BaseAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BaseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAnimInstance, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsInAir_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BaseAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
	{
		((UBaseAnimInstance*)Obj)->bIsInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseAnimInstance), &Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_YawDelta_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BaseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_YawDelta = { "YawDelta", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAnimInstance, YawDelta), METADATA_PARAMS(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_YawDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_YawDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_RotationLastTick_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BaseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_RotationLastTick = { "RotationLastTick", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAnimInstance, RotationLastTick), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_RotationLastTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_RotationLastTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Pawn_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BaseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAnimInstance, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Pawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_MC_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BaseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_MC = { "MC", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAnimInstance, MC), Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_MC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_MC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BaseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAnimInstance, Pitch), METADATA_PARAMS(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Roll_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BaseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAnimInstance, Roll), METADATA_PARAMS(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Roll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Yaw_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BaseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAnimInstance, Yaw), METADATA_PARAMS(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_TargetRotation_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BaseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAnimInstance, TargetRotation), METADATA_PARAMS(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_TargetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_TargetRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsAccelerating_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BaseAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsAccelerating_SetBit(void* Obj)
	{
		((UBaseAnimInstance*)Obj)->bIsAccelerating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsAccelerating = { "bIsAccelerating", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseAnimInstance), &Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsAccelerating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsAccelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsAccelerating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsAttacking_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BaseAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
	{
		((UBaseAnimInstance*)Obj)->bIsAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseAnimInstance), &Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsFullBody_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BaseAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsFullBody_SetBit(void* Obj)
	{
		((UBaseAnimInstance*)Obj)->bIsFullBody = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsFullBody = { "bIsFullBody", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseAnimInstance), &Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsFullBody_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsFullBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsFullBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsWeaponEquipped_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BaseAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsWeaponEquipped_SetBit(void* Obj)
	{
		((UBaseAnimInstance*)Obj)->bIsWeaponEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsWeaponEquipped = { "bIsWeaponEquipped", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseAnimInstance), &Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsWeaponEquipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsWeaponEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsWeaponEquipped_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_AttackRecoverySections_Inner = { "AttackRecoverySections", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_AttackRecoverySections_MetaData[] = {
		{ "Category", "Montage | Section Names" },
		{ "ModuleRelativePath", "BaseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_AttackRecoverySections = { "AttackRecoverySections", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAnimInstance, AttackRecoverySections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_AttackRecoverySections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_AttackRecoverySections_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_MontageSections_Inner = { "MontageSections", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_MontageSections_MetaData[] = {
		{ "Category", "Montage | Section Names" },
		{ "ModuleRelativePath", "BaseAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_MontageSections = { "MontageSections", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseAnimInstance, MontageSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_MontageSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_MontageSections_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_MovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_YawDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_RotationLastTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_MC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Roll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_TargetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsAccelerating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsFullBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsWeaponEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_AttackRecoverySections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_AttackRecoverySections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_MontageSections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_MontageSections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseAnimInstance_Statics::ClassParams = {
		&UBaseAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseAnimInstance, 269341722);
	template<> FIRSTPROJECT_API UClass* StaticClass<UBaseAnimInstance>()
	{
		return UBaseAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseAnimInstance(Z_Construct_UClass_UBaseAnimInstance, &UBaseAnimInstance::StaticClass, TEXT("/Script/FirstProject"), TEXT("UBaseAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
