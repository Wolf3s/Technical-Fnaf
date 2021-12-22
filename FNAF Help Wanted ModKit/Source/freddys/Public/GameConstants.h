// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "FNAF_GameInstanceBase.h"
#include "FNAFGamestate.h"
#include "AICommonFunctionalities.h"
#include "GameConstants.generated.h"

// Enum freddys.ERegisterAudio
UENUM(Blueprintable)
enum class ERegisterAudio : uint8
{
	REGISTER = 0,
	UNREGISTER = 1
};


// Enum freddys.EAudioCategory
UENUM(Blueprintable)
enum class EAudioCategory : uint8
{
	UI = 0,
	FX = 1,
	DEATH = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct freddys.AIOffsetData
// 0x0038 (0x0040 - 0x0008)
USTRUCT(Blueprintable)
struct FAIOffsetData : public FTableRowBase
{
	GENERATED_BODY()

	EAIScareDirection                                  AIDir;                                                   
	struct FTransform                                  OffsettransformData;                                     
};

// ScriptStruct freddys.AIDirectionOffsetData
// 0x0018 (0x0020 - 0x0008)
USTRUCT(Blueprintable)
struct FAIDirectionOffsetData : public FTableRowBase
{
	GENERATED_BODY()

	class UClass*                                      AIType;                                                  
	TArray<struct FAIOffsetData>                       OffsettransformData;                                     
};

// ScriptStruct freddys.AIDatabase
// 0x0010 (0x0018 - 0x0008)
USTRUCT(Blueprintable)
struct FAIDatabase : public FTableRowBase
{
	GENERATED_BODY()

	TArray<struct FAIDirectionOffsetData>              AIScareData;                                             
};

// ScriptStruct freddys.SaveFileFormat
// 0x0018
USTRUCT(Blueprintable)
struct FSaveFileFormat
{
	GENERATED_BODY()

};

/**
 * 
 */
UCLASS()
class FREDDYS_API UGameConstants : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
};
