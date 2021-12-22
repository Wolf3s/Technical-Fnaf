// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SWGVR/Public/SWGVRCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSWGVRCharacter() {}
// Cross Module References
	SWGVR_API UEnum* Z_Construct_UEnum_SWGVR_EVRPlayType();
	UPackage* Z_Construct_UPackage__Script_SWGVR();
	SWGVR_API UEnum* Z_Construct_UEnum_SWGVR_EGrabSnapType();
	SWGVR_API UEnum* Z_Construct_UEnum_SWGVR_EControllerType();
	SWGVR_API UEnum* Z_Construct_UEnum_SWGVR_EVRHandType();
	SWGVR_API UScriptStruct* Z_Construct_UScriptStruct_FMotionControllerInfo();
	SWGVR_API UScriptStruct* Z_Construct_UScriptStruct_FHeldGrabbableInfo();
	SWGVR_API UScriptStruct* Z_Construct_UScriptStruct_FHeldCollisionInfo();
	SWGVR_API UClass* Z_Construct_UClass_ASWGVRCharacter_NoRegister();
	SWGVR_API UClass* Z_Construct_UClass_ASWGVRCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
// End Cross Module References
	static UEnum* EVRPlayType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SWGVR_EVRPlayType, Z_Construct_UPackage__Script_SWGVR(), TEXT("EVRPlayType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRPlayType(EVRPlayType_StaticEnum, TEXT("/Script/SWGVR"), TEXT("EVRPlayType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SWGVR_EVRPlayType_CRC() { return 3681751914U; }
	UEnum* Z_Construct_UEnum_SWGVR_EVRPlayType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SWGVR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRPlayType"), 0, Get_Z_Construct_UEnum_SWGVR_EVRPlayType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRPlayType::UsingVR", (int64)EVRPlayType::UsingVR },
				{ "EVRPlayType::NotUsingVR", (int64)EVRPlayType::NotUsingVR },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/SWGVRCharacter.h" },
				{ "ToolTip", "Enum SWGVR.EVRPlayType" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SWGVR,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVRPlayType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EVRPlayType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGrabSnapType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SWGVR_EGrabSnapType, Z_Construct_UPackage__Script_SWGVR(), TEXT("EGrabSnapType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGrabSnapType(EGrabSnapType_StaticEnum, TEXT("/Script/SWGVR"), TEXT("EGrabSnapType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SWGVR_EGrabSnapType_CRC() { return 1856275420U; }
	UEnum* Z_Construct_UEnum_SWGVR_EGrabSnapType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SWGVR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGrabSnapType"), 0, Get_Z_Construct_UEnum_SWGVR_EGrabSnapType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGrabSnapType::LocationToHand", (int64)EGrabSnapType::LocationToHand },
				{ "EGrabSnapType::SnapToHand", (int64)EGrabSnapType::SnapToHand },
				{ "EGrabSnapType::None", (int64)EGrabSnapType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/SWGVRCharacter.h" },
				{ "ToolTip", "Enum SWGVR.EGrabSnapType" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SWGVR,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGrabSnapType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EGrabSnapType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EControllerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SWGVR_EControllerType, Z_Construct_UPackage__Script_SWGVR(), TEXT("EControllerType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EControllerType(EControllerType_StaticEnum, TEXT("/Script/SWGVR"), TEXT("EControllerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SWGVR_EControllerType_CRC() { return 3148903952U; }
	UEnum* Z_Construct_UEnum_SWGVR_EControllerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SWGVR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EControllerType"), 0, Get_Z_Construct_UEnum_SWGVR_EControllerType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EControllerType::SteamVR", (int64)EControllerType::SteamVR },
				{ "EControllerType::Oculus", (int64)EControllerType::Oculus },
				{ "EControllerType::PS4Move", (int64)EControllerType::PS4Move },
				{ "EControllerType::DUALSHOCK4", (int64)EControllerType::DUALSHOCK4 },
				{ "EControllerType::DUALSHOCK4_VR", (int64)EControllerType::DUALSHOCK4_VR },
				{ "EControllerType::MouseAndKeyboard", (int64)EControllerType::MouseAndKeyboard },
				{ "EControllerType::Switch", (int64)EControllerType::Switch },
				{ "EControllerType::XBox", (int64)EControllerType::XBox },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/SWGVRCharacter.h" },
				{ "ToolTip", "Enum SWGVR.EControllerType" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SWGVR,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EControllerType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EControllerType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVRHandType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SWGVR_EVRHandType, Z_Construct_UPackage__Script_SWGVR(), TEXT("EVRHandType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRHandType(EVRHandType_StaticEnum, TEXT("/Script/SWGVR"), TEXT("EVRHandType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SWGVR_EVRHandType_CRC() { return 829438570U; }
	UEnum* Z_Construct_UEnum_SWGVR_EVRHandType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SWGVR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRHandType"), 0, Get_Z_Construct_UEnum_SWGVR_EVRHandType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRHandType::None", (int64)EVRHandType::None },
				{ "EVRHandType::Left", (int64)EVRHandType::Left },
				{ "EVRHandType::Right", (int64)EVRHandType::Right },
				{ "EVRHandType::Both", (int64)EVRHandType::Both },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/SWGVRCharacter.h" },
				{ "ToolTip", "Enum SWGVR.EVRHandType" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SWGVR,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVRHandType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EVRHandType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMotionControllerInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SWGVR_API uint32 Get_Z_Construct_UScriptStruct_FMotionControllerInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionControllerInfo, Z_Construct_UPackage__Script_SWGVR(), TEXT("MotionControllerInfo"), sizeof(FMotionControllerInfo), Get_Z_Construct_UScriptStruct_FMotionControllerInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMotionControllerInfo(FMotionControllerInfo::StaticStruct, TEXT("/Script/SWGVR"), TEXT("MotionControllerInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SWGVR_StaticRegisterNativesFMotionControllerInfo
{
	FScriptStruct_SWGVR_StaticRegisterNativesFMotionControllerInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MotionControllerInfo")),new UScriptStruct::TCppStructOps<FMotionControllerInfo>);
	}
} ScriptStruct_SWGVR_StaticRegisterNativesFMotionControllerInfo;
	struct Z_Construct_UScriptStruct_FMotionControllerInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionControllerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SWGVRCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotionControllerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionControllerInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionControllerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SWGVR,
		nullptr,
		&NewStructOps,
		"MotionControllerInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMotionControllerInfo),
		alignof(FMotionControllerInfo),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionControllerInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionControllerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMotionControllerInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMotionControllerInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SWGVR();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MotionControllerInfo"), sizeof(FMotionControllerInfo), Get_Z_Construct_UScriptStruct_FMotionControllerInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMotionControllerInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMotionControllerInfo_CRC() { return 3833634579U; }
class UScriptStruct* FHeldGrabbableInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SWGVR_API uint32 Get_Z_Construct_UScriptStruct_FHeldGrabbableInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeldGrabbableInfo, Z_Construct_UPackage__Script_SWGVR(), TEXT("HeldGrabbableInfo"), sizeof(FHeldGrabbableInfo), Get_Z_Construct_UScriptStruct_FHeldGrabbableInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHeldGrabbableInfo(FHeldGrabbableInfo::StaticStruct, TEXT("/Script/SWGVR"), TEXT("HeldGrabbableInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SWGVR_StaticRegisterNativesFHeldGrabbableInfo
{
	FScriptStruct_SWGVR_StaticRegisterNativesFHeldGrabbableInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HeldGrabbableInfo")),new UScriptStruct::TCppStructOps<FHeldGrabbableInfo>);
	}
} ScriptStruct_SWGVR_StaticRegisterNativesFHeldGrabbableInfo;
	struct Z_Construct_UScriptStruct_FHeldGrabbableInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeldGrabbableInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SWGVRCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHeldGrabbableInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeldGrabbableInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeldGrabbableInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SWGVR,
		nullptr,
		&NewStructOps,
		"HeldGrabbableInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FHeldGrabbableInfo),
		alignof(FHeldGrabbableInfo),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHeldGrabbableInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FHeldGrabbableInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHeldGrabbableInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHeldGrabbableInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SWGVR();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HeldGrabbableInfo"), sizeof(FHeldGrabbableInfo), Get_Z_Construct_UScriptStruct_FHeldGrabbableInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHeldGrabbableInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHeldGrabbableInfo_CRC() { return 2941575963U; }
class UScriptStruct* FHeldCollisionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SWGVR_API uint32 Get_Z_Construct_UScriptStruct_FHeldCollisionInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeldCollisionInfo, Z_Construct_UPackage__Script_SWGVR(), TEXT("HeldCollisionInfo"), sizeof(FHeldCollisionInfo), Get_Z_Construct_UScriptStruct_FHeldCollisionInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHeldCollisionInfo(FHeldCollisionInfo::StaticStruct, TEXT("/Script/SWGVR"), TEXT("HeldCollisionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SWGVR_StaticRegisterNativesFHeldCollisionInfo
{
	FScriptStruct_SWGVR_StaticRegisterNativesFHeldCollisionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HeldCollisionInfo")),new UScriptStruct::TCppStructOps<FHeldCollisionInfo>);
	}
} ScriptStruct_SWGVR_StaticRegisterNativesFHeldCollisionInfo;
	struct Z_Construct_UScriptStruct_FHeldCollisionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeldCollisionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SWGVRCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHeldCollisionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeldCollisionInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeldCollisionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SWGVR,
		nullptr,
		&NewStructOps,
		"HeldCollisionInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FHeldCollisionInfo),
		alignof(FHeldCollisionInfo),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHeldCollisionInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FHeldCollisionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHeldCollisionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHeldCollisionInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SWGVR();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HeldCollisionInfo"), sizeof(FHeldCollisionInfo), Get_Z_Construct_UScriptStruct_FHeldCollisionInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHeldCollisionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHeldCollisionInfo_CRC() { return 2865404621U; }
	void ASWGVRCharacter::StaticRegisterNativesASWGVRCharacter()
	{
	}
	UClass* Z_Construct_UClass_ASWGVRCharacter_NoRegister()
	{
		return ASWGVRCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASWGVRCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASWGVRCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SWGVR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWGVRCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SWGVRCharacter.h" },
		{ "ModuleRelativePath", "Public/SWGVRCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASWGVRCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASWGVRCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASWGVRCharacter_Statics::ClassParams = {
		&ASWGVRCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASWGVRCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASWGVRCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASWGVRCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASWGVRCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASWGVRCharacter, 4108857553);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASWGVRCharacter(Z_Construct_UClass_ASWGVRCharacter, &ASWGVRCharacter::StaticClass, TEXT("/Script/SWGVR"), TEXT("ASWGVRCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASWGVRCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
