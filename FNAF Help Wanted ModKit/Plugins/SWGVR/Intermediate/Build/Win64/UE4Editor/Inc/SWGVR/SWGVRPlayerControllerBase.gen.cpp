// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SWGVR/Public/SWGVRPlayerControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSWGVRPlayerControllerBase() {}
// Cross Module References
	SWGVR_API UClass* Z_Construct_UClass_ASWGVRPlayerControllerBase_NoRegister();
	SWGVR_API UClass* Z_Construct_UClass_ASWGVRPlayerControllerBase();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_SWGVR();
	SWGVR_API UFunction* Z_Construct_UFunction_ASWGVRPlayerControllerBase_IsUsingGamepad();
	SWGVR_API UFunction* Z_Construct_UFunction_ASWGVRPlayerControllerBase_OnUsingGamepadChanged();
// End Cross Module References
	void ASWGVRPlayerControllerBase::StaticRegisterNativesASWGVRPlayerControllerBase()
	{
		UClass* Class = ASWGVRPlayerControllerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsUsingGamepad", &ASWGVRPlayerControllerBase::execIsUsingGamepad },
			{ "OnUsingGamepadChanged", &ASWGVRPlayerControllerBase::execOnUsingGamepadChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASWGVRPlayerControllerBase_IsUsingGamepad_Statics
	{
		struct SWGVRPlayerControllerBase_eventIsUsingGamepad_Parms
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
	void Z_Construct_UFunction_ASWGVRPlayerControllerBase_IsUsingGamepad_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SWGVRPlayerControllerBase_eventIsUsingGamepad_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASWGVRPlayerControllerBase_IsUsingGamepad_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SWGVRPlayerControllerBase_eventIsUsingGamepad_Parms), &Z_Construct_UFunction_ASWGVRPlayerControllerBase_IsUsingGamepad_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASWGVRPlayerControllerBase_IsUsingGamepad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASWGVRPlayerControllerBase_IsUsingGamepad_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWGVRPlayerControllerBase_IsUsingGamepad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SWGVRPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWGVRPlayerControllerBase_IsUsingGamepad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWGVRPlayerControllerBase, "IsUsingGamepad", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SWGVRPlayerControllerBase_eventIsUsingGamepad_Parms), Z_Construct_UFunction_ASWGVRPlayerControllerBase_IsUsingGamepad_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASWGVRPlayerControllerBase_IsUsingGamepad_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWGVRPlayerControllerBase_IsUsingGamepad_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASWGVRPlayerControllerBase_IsUsingGamepad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWGVRPlayerControllerBase_IsUsingGamepad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWGVRPlayerControllerBase_IsUsingGamepad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASWGVRPlayerControllerBase_OnUsingGamepadChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWGVRPlayerControllerBase_OnUsingGamepadChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SWGVRPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWGVRPlayerControllerBase_OnUsingGamepadChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWGVRPlayerControllerBase, "OnUsingGamepadChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWGVRPlayerControllerBase_OnUsingGamepadChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASWGVRPlayerControllerBase_OnUsingGamepadChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWGVRPlayerControllerBase_OnUsingGamepadChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWGVRPlayerControllerBase_OnUsingGamepadChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASWGVRPlayerControllerBase_NoRegister()
	{
		return ASWGVRPlayerControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_ASWGVRPlayerControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASWGVRPlayerControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SWGVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASWGVRPlayerControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASWGVRPlayerControllerBase_IsUsingGamepad, "IsUsingGamepad" }, // 1504779091
		{ &Z_Construct_UFunction_ASWGVRPlayerControllerBase_OnUsingGamepadChanged, "OnUsingGamepadChanged" }, // 3840092380
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWGVRPlayerControllerBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SWGVRPlayerControllerBase.h" },
		{ "ModuleRelativePath", "Public/SWGVRPlayerControllerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASWGVRPlayerControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASWGVRPlayerControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASWGVRPlayerControllerBase_Statics::ClassParams = {
		&ASWGVRPlayerControllerBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASWGVRPlayerControllerBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASWGVRPlayerControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASWGVRPlayerControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASWGVRPlayerControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASWGVRPlayerControllerBase, 871837804);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASWGVRPlayerControllerBase(Z_Construct_UClass_ASWGVRPlayerControllerBase, &ASWGVRPlayerControllerBase::StaticClass, TEXT("/Script/SWGVR"), TEXT("ASWGVRPlayerControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASWGVRPlayerControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
