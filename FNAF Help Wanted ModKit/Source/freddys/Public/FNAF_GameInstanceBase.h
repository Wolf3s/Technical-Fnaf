// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FNAFEditorSettings.h"
#include "Engine/GameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "FNAF_GameInstanceBase.generated.h"

UENUM(Blueprintable)
enum class EFNAFDLCType : uint8
{
	BaseGame = 0,
	Halloween = 1
};


/**
 * 
 */
UCLASS()
class FREDDYS_API UFNAF_GameInstanceBase : public UGameInstance
{
	GENERATED_BODY()
	
public:
	
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int                                                ForcedVariantNumber;                                    

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass*                                      LoadingWidget;                                          
		
	UFUNCTION(BlueprintCallable)
	void SwitchFNAFGameType(EFNAFGameType GameType);
		
	UFUNCTION(BlueprintCallable)
	void StartAsyncSaveGame(class USaveGame* SaveGame, FString SlotName, int UserIndex);
		
	UFUNCTION(BlueprintCallable)
	void LoadLevelAsync(UObject* WorldContextObject, FName LevelName);
		
	UFUNCTION(BlueprintPure)
	bool IsInDemoMode();
		
	UFUNCTION(BlueprintPure)
	bool HasDLC(EFNAFDLCType DLC);
		
	UFUNCTION(BlueprintPure)
	static FString GetPrimaryGPUBrand();
		
	UFUNCTION(BlueprintPure)
	static FString GetGPUBrandName();
		
	UFUNCTION(BlueprintPure)
	EFNAFGameType GetGameType();
		
	UFUNCTION(BlueprintPure)
	int GetForcedVariantNumber();
};
