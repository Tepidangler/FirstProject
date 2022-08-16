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
#ifdef FIRSTPROJECT_SwitchBase_generated_h
#error "SwitchBase.generated.h already included, missing '#pragma once' in SwitchBase.h"
#endif
#define FIRSTPROJECT_SwitchBase_generated_h

#define FirstProject_Source_FirstProject_SwitchBase_h_12_SPARSE_DATA
#define FirstProject_Source_FirstProject_SwitchBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FirstProject_Source_FirstProject_SwitchBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FirstProject_Source_FirstProject_SwitchBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASwitchBase(); \
	friend struct Z_Construct_UClass_ASwitchBase_Statics; \
public: \
	DECLARE_CLASS(ASwitchBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(ASwitchBase)


#define FirstProject_Source_FirstProject_SwitchBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASwitchBase(); \
	friend struct Z_Construct_UClass_ASwitchBase_Statics; \
public: \
	DECLARE_CLASS(ASwitchBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(ASwitchBase)


#define FirstProject_Source_FirstProject_SwitchBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASwitchBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASwitchBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwitchBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwitchBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwitchBase(ASwitchBase&&); \
	NO_API ASwitchBase(const ASwitchBase&); \
public:


#define FirstProject_Source_FirstProject_SwitchBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwitchBase(ASwitchBase&&); \
	NO_API ASwitchBase(const ASwitchBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwitchBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwitchBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASwitchBase)


#define FirstProject_Source_FirstProject_SwitchBase_h_12_PRIVATE_PROPERTY_OFFSET
#define FirstProject_Source_FirstProject_SwitchBase_h_9_PROLOG
#define FirstProject_Source_FirstProject_SwitchBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstProject_Source_FirstProject_SwitchBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstProject_Source_FirstProject_SwitchBase_h_12_SPARSE_DATA \
	FirstProject_Source_FirstProject_SwitchBase_h_12_RPC_WRAPPERS \
	FirstProject_Source_FirstProject_SwitchBase_h_12_INCLASS \
	FirstProject_Source_FirstProject_SwitchBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstProject_Source_FirstProject_SwitchBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstProject_Source_FirstProject_SwitchBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstProject_Source_FirstProject_SwitchBase_h_12_SPARSE_DATA \
	FirstProject_Source_FirstProject_SwitchBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstProject_Source_FirstProject_SwitchBase_h_12_INCLASS_NO_PURE_DECLS \
	FirstProject_Source_FirstProject_SwitchBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPROJECT_API UClass* StaticClass<class ASwitchBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstProject_Source_FirstProject_SwitchBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
