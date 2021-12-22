// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "LevelDB.generated.h"

UENUM(Blueprintable)
enum class ELevelType : uint8
{
	Playable = 0,
	Visual = 1
};

USTRUCT(Blueprintable)
struct FGameLevels : public FTableRowBase
{
	GENERATED_BODY()

	int                                                TokenRequired;                                     
	int                                                LevelID;                                           
	TEnumAsByte<ELevelType>                            LevelType;                                         
};

/**
 * 
 */
UCLASS()
class FREDDYS_API ULevelDB : public UObject
{
	GENERATED_BODY()
	
public:

	TArray<struct FGameLevels>                         GameLevels;     

	UFUNCTION(BlueprintCallable)
	void LoadLevelByName(FString LevelName);
	
	UFUNCTION(BlueprintCallable)
	void LoadLevelByID(int LevelID);
	
	UFUNCTION(BlueprintCallable)
	void LoadLevel();
	
	UFUNCTION(BlueprintCallable)
	int GetLevelIDByName(FString Name);
	
	UFUNCTION(BlueprintCallable)
	int GetLevelID();
	
	UFUNCTION(BlueprintCallable)
	static class ULevelDB* CreateLevelDB(class UObject* Owner);

};
