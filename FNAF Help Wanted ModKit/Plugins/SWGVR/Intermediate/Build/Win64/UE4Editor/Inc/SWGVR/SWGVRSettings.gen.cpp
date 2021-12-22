// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SWGVR/Public/SWGVRSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSWGVRSettings() {}
// Cross Module References
	SWGVR_API UClass* Z_Construct_UClass_USWGVRSettings_NoRegister();
	SWGVR_API UClass* Z_Construct_UClass_USWGVRSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_SWGVR();
// End Cross Module References
	void USWGVRSettings::StaticRegisterNativesUSWGVRSettings()
	{
	}
	UClass* Z_Construct_UClass_USWGVRSettings_NoRegister()
	{
		return USWGVRSettings::StaticClass();
	}
	struct Z_Construct_UClass_USWGVRSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowNonVR_MetaData[];
#endif
		static void NewProp_bAllowNonVR_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowNonVR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceDS4Enabled_MetaData[];
#endif
		static void NewProp_bForceDS4Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceDS4Enabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForcePickupDebugDisplay_MetaData[];
#endif
		static void NewProp_bForcePickupDebugDisplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForcePickupDebugDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForcePickupTesting_MetaData[];
#endif
		static void NewProp_bForcePickupTesting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForcePickupTesting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraLocator_MetaData[];
#endif
		static void NewProp_bEnableCameraLocator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraLocator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USWGVRSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_SWGVR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USWGVRSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SWGVRSettings.h" },
		{ "ModuleRelativePath", "Public/SWGVRSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bAllowNonVR_MetaData[] = {
		{ "Category", "SWGVRSettings" },
		{ "ModuleRelativePath", "Public/SWGVRSettings.h" },
	};
#endif
	void Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bAllowNonVR_SetBit(void* Obj)
	{
		((USWGVRSettings*)Obj)->bAllowNonVR = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bAllowNonVR = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowNonVR", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USWGVRSettings), &Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bAllowNonVR_SetBit, METADATA_PARAMS(Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bAllowNonVR_MetaData, ARRAY_COUNT(Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bAllowNonVR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bForceDS4Enabled_MetaData[] = {
		{ "Category", "SWGVRSettings" },
		{ "ModuleRelativePath", "Public/SWGVRSettings.h" },
	};
#endif
	void Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bForceDS4Enabled_SetBit(void* Obj)
	{
		((USWGVRSettings*)Obj)->bForceDS4Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bForceDS4Enabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceDS4Enabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USWGVRSettings), &Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bForceDS4Enabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bForceDS4Enabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bForceDS4Enabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bForcePickupDebugDisplay_MetaData[] = {
		{ "Category", "SWGVRSettings" },
		{ "ModuleRelativePath", "Public/SWGVRSettings.h" },
	};
#endif
	void Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bForcePickupDebugDisplay_SetBit(void* Obj)
	{
		((USWGVRSettings*)Obj)->bForcePickupDebugDisplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bForcePickupDebugDisplay = { UE4CodeGen_Private::EPropertyClass::Bool, "bForcePickupDebugDisplay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USWGVRSettings), &Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bForcePickupDebugDisplay_SetBit, METADATA_PARAMS(Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bForcePickupDebugDisplay_MetaData, ARRAY_COUNT(Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bForcePickupDebugDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bForcePickupTesting_MetaData[] = {
		{ "Category", "SWGVRSettings" },
		{ "ModuleRelativePath", "Public/SWGVRSettings.h" },
	};
#endif
	void Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bForcePickupTesting_SetBit(void* Obj)
	{
		((USWGVRSettings*)Obj)->bForcePickupTesting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bForcePickupTesting = { UE4CodeGen_Private::EPropertyClass::Bool, "bForcePickupTesting", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USWGVRSettings), &Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bForcePickupTesting_SetBit, METADATA_PARAMS(Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bForcePickupTesting_MetaData, ARRAY_COUNT(Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bForcePickupTesting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bEnableCameraLocator_MetaData[] = {
		{ "Category", "SWGVRSettings" },
		{ "ModuleRelativePath", "Public/SWGVRSettings.h" },
	};
#endif
	void Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bEnableCameraLocator_SetBit(void* Obj)
	{
		((USWGVRSettings*)Obj)->bEnableCameraLocator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bEnableCameraLocator = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableCameraLocator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USWGVRSettings), &Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bEnableCameraLocator_SetBit, METADATA_PARAMS(Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bEnableCameraLocator_MetaData, ARRAY_COUNT(Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bEnableCameraLocator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USWGVRSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bAllowNonVR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bForceDS4Enabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bForcePickupDebugDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bForcePickupTesting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USWGVRSettings_Statics::NewProp_bEnableCameraLocator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USWGVRSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USWGVRSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USWGVRSettings_Statics::ClassParams = {
		&USWGVRSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_USWGVRSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USWGVRSettings_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USWGVRSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USWGVRSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USWGVRSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USWGVRSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USWGVRSettings, 22890072);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USWGVRSettings(Z_Construct_UClass_USWGVRSettings, &USWGVRSettings::StaticClass, TEXT("/Script/SWGVR"), TEXT("USWGVRSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USWGVRSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
