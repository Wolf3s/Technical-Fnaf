// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWGVR_SWGVRPlayerControllerBase_generated_h
#error "SWGVRPlayerControllerBase.generated.h already included, missing '#pragma once' in SWGVRPlayerControllerBase.h"
#endif
#define SWGVR_SWGVRPlayerControllerBase_generated_h

#define freddys_Plugins_SWGVR_Source_SWGVR_Public_SWGVRPlayerControllerBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsUsingGamepad) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsUsingGamepad(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUsingGamepadChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUsingGamepadChanged(); \
		P_NATIVE_END; \
	}


#define freddys_Plugins_SWGVR_Source_SWGVR_Public_SWGVRPlayerControllerBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsUsingGamepad) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsUsingGamepad(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUsingGamepadChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUsingGamepadChanged(); \
		P_NATIVE_END; \
	}


#define freddys_Plugins_SWGVR_Source_SWGVR_Public_SWGVRPlayerControllerBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASWGVRPlayerControllerBase(); \
	friend struct Z_Construct_UClass_ASWGVRPlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(ASWGVRPlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SWGVR"), NO_API) \
	DECLARE_SERIALIZER(ASWGVRPlayerControllerBase)


#define freddys_Plugins_SWGVR_Source_SWGVR_Public_SWGVRPlayerControllerBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASWGVRPlayerControllerBase(); \
	friend struct Z_Construct_UClass_ASWGVRPlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(ASWGVRPlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SWGVR"), NO_API) \
	DECLARE_SERIALIZER(ASWGVRPlayerControllerBase)


#define freddys_Plugins_SWGVR_Source_SWGVR_Public_SWGVRPlayerControllerBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASWGVRPlayerControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASWGVRPlayerControllerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWGVRPlayerControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWGVRPlayerControllerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWGVRPlayerControllerBase(ASWGVRPlayerControllerBase&&); \
	NO_API ASWGVRPlayerControllerBase(const ASWGVRPlayerControllerBase&); \
public:


#define freddys_Plugins_SWGVR_Source_SWGVR_Public_SWGVRPlayerControllerBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASWGVRPlayerControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWGVRPlayerControllerBase(ASWGVRPlayerControllerBase&&); \
	NO_API ASWGVRPlayerControllerBase(const ASWGVRPlayerControllerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWGVRPlayerControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWGVRPlayerControllerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASWGVRPlayerControllerBase)


#define freddys_Plugins_SWGVR_Source_SWGVR_Public_SWGVRPlayerControllerBase_h_15_PRIVATE_PROPERTY_OFFSET
#define freddys_Plugins_SWGVR_Source_SWGVR_Public_SWGVRPlayerControllerBase_h_12_PROLOG
#define freddys_Plugins_SWGVR_Source_SWGVR_Public_SWGVRPlayerControllerBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	freddys_Plugins_SWGVR_Source_SWGVR_Public_SWGVRPlayerControllerBase_h_15_PRIVATE_PROPERTY_OFFSET \
	freddys_Plugins_SWGVR_Source_SWGVR_Public_SWGVRPlayerControllerBase_h_15_RPC_WRAPPERS \
	freddys_Plugins_SWGVR_Source_SWGVR_Public_SWGVRPlayerControllerBase_h_15_INCLASS \
	freddys_Plugins_SWGVR_Source_SWGVR_Public_SWGVRPlayerControllerBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define freddys_Plugins_SWGVR_Source_SWGVR_Public_SWGVRPlayerControllerBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	freddys_Plugins_SWGVR_Source_SWGVR_Public_SWGVRPlayerControllerBase_h_15_PRIVATE_PROPERTY_OFFSET \
	freddys_Plugins_SWGVR_Source_SWGVR_Public_SWGVRPlayerControllerBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	freddys_Plugins_SWGVR_Source_SWGVR_Public_SWGVRPlayerControllerBase_h_15_INCLASS_NO_PURE_DECLS \
	freddys_Plugins_SWGVR_Source_SWGVR_Public_SWGVRPlayerControllerBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID freddys_Plugins_SWGVR_Source_SWGVR_Public_SWGVRPlayerControllerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
