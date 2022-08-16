// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstProject/FloorSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorSwitch() {}
// Cross Module References
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AFloorSwitch_NoRegister();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_AFloorSwitch();
	FIRSTPROJECT_API UClass* Z_Construct_UClass_ASwitchBase();
	UPackage* Z_Construct_UPackage__Script_FirstProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(AFloorSwitch::execUpdateSwitchLocation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSwitchLocation(Z_Param_Z);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFloorSwitch::execUpdateSwitchObjectLocation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSwitchObjectLocation(Z_Param_Z);
		P_NATIVE_END;
	}
	static FName NAME_AFloorSwitch_LowerDoor = FName(TEXT("LowerDoor"));
	void AFloorSwitch::LowerDoor()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFloorSwitch_LowerDoor),NULL);
	}
	static FName NAME_AFloorSwitch_LowerFloorSwitch = FName(TEXT("LowerFloorSwitch"));
	void AFloorSwitch::LowerFloorSwitch()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFloorSwitch_LowerFloorSwitch),NULL);
	}
	static FName NAME_AFloorSwitch_RaiseDoor = FName(TEXT("RaiseDoor"));
	void AFloorSwitch::RaiseDoor()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFloorSwitch_RaiseDoor),NULL);
	}
	static FName NAME_AFloorSwitch_RaiseFloorSwitch = FName(TEXT("RaiseFloorSwitch"));
	void AFloorSwitch::RaiseFloorSwitch()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFloorSwitch_RaiseFloorSwitch),NULL);
	}
	void AFloorSwitch::StaticRegisterNativesAFloorSwitch()
	{
		UClass* Class = AFloorSwitch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateSwitchLocation", &AFloorSwitch::execUpdateSwitchLocation },
			{ "UpdateSwitchObjectLocation", &AFloorSwitch::execUpdateSwitchObjectLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFloorSwitch_LowerDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_LowerDoor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_LowerDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "LowerDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_LowerDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_LowerDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorSwitch_LowerDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorSwitch_LowerDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloorSwitch_LowerFloorSwitch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_LowerFloorSwitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_LowerFloorSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "LowerFloorSwitch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_LowerFloorSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_LowerFloorSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorSwitch_LowerFloorSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorSwitch_LowerFloorSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloorSwitch_RaiseDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_RaiseDoor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_RaiseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "RaiseDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_RaiseDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_RaiseDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorSwitch_RaiseDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorSwitch_RaiseDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloorSwitch_RaiseFloorSwitch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_RaiseFloorSwitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_RaiseFloorSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "RaiseFloorSwitch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_RaiseFloorSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_RaiseFloorSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorSwitch_RaiseFloorSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorSwitch_RaiseFloorSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloorSwitch_UpdateSwitchLocation_Statics
	{
		struct FloorSwitch_eventUpdateSwitchLocation_Parms
		{
			float Z;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFloorSwitch_UpdateSwitchLocation_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventUpdateSwitchLocation_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloorSwitch_UpdateSwitchLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_UpdateSwitchLocation_Statics::NewProp_Z,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_UpdateSwitchLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_UpdateSwitchLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "UpdateSwitchLocation", nullptr, nullptr, sizeof(FloorSwitch_eventUpdateSwitchLocation_Parms), Z_Construct_UFunction_AFloorSwitch_UpdateSwitchLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_UpdateSwitchLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_UpdateSwitchLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_UpdateSwitchLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorSwitch_UpdateSwitchLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorSwitch_UpdateSwitchLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloorSwitch_UpdateSwitchObjectLocation_Statics
	{
		struct FloorSwitch_eventUpdateSwitchObjectLocation_Parms
		{
			float Z;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFloorSwitch_UpdateSwitchObjectLocation_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloorSwitch_eventUpdateSwitchObjectLocation_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloorSwitch_UpdateSwitchObjectLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_UpdateSwitchObjectLocation_Statics::NewProp_Z,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloorSwitch_UpdateSwitchObjectLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_UpdateSwitchObjectLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "UpdateSwitchObjectLocation", nullptr, nullptr, sizeof(FloorSwitch_eventUpdateSwitchObjectLocation_Parms), Z_Construct_UFunction_AFloorSwitch_UpdateSwitchObjectLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_UpdateSwitchObjectLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloorSwitch_UpdateSwitchObjectLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_UpdateSwitchObjectLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloorSwitch_UpdateSwitchObjectLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloorSwitch_UpdateSwitchObjectLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFloorSwitch_NoRegister()
	{
		return AFloorSwitch::StaticClass();
	}
	struct Z_Construct_UClass_AFloorSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialSwitchObjectLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialSwitchObjectLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialSwitchLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialSwitchLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloorSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASwitchBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFloorSwitch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFloorSwitch_LowerDoor, "LowerDoor" }, // 2326504994
		{ &Z_Construct_UFunction_AFloorSwitch_LowerFloorSwitch, "LowerFloorSwitch" }, // 3597203729
		{ &Z_Construct_UFunction_AFloorSwitch_RaiseDoor, "RaiseDoor" }, // 2460338238
		{ &Z_Construct_UFunction_AFloorSwitch_RaiseFloorSwitch, "RaiseFloorSwitch" }, // 2533339380
		{ &Z_Construct_UFunction_AFloorSwitch_UpdateSwitchLocation, "UpdateSwitchLocation" }, // 2088581451
		{ &Z_Construct_UFunction_AFloorSwitch_UpdateSwitchObjectLocation, "UpdateSwitchObjectLocation" }, // 818889153
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorSwitch_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FloorSwitch.h" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialSwitchObjectLocation_MetaData[] = {
		{ "Category", "Floor Switch" },
		{ "Comment", "//Initial Location for Object\n" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
		{ "ToolTip", "Initial Location for Object" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialSwitchObjectLocation = { "InitialSwitchObjectLocation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorSwitch, InitialSwitchObjectLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialSwitchObjectLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialSwitchObjectLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialSwitchLocation_MetaData[] = {
		{ "Category", "Floor Switch" },
		{ "Comment", "//Initial Location for Floor Switch\n" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
		{ "ToolTip", "Initial Location for Floor Switch" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialSwitchLocation = { "InitialSwitchLocation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloorSwitch, InitialSwitchLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialSwitchLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialSwitchLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialSwitchObjectLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialSwitchLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloorSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorSwitch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFloorSwitch_Statics::ClassParams = {
		&AFloorSwitch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFloorSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFloorSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloorSwitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFloorSwitch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFloorSwitch, 4159791433);
	template<> FIRSTPROJECT_API UClass* StaticClass<AFloorSwitch>()
	{
		return AFloorSwitch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloorSwitch(Z_Construct_UClass_AFloorSwitch, &AFloorSwitch::StaticClass, TEXT("/Script/FirstProject"), TEXT("AFloorSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
