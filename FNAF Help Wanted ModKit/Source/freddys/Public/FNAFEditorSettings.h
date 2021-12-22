// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "FNAFEditorSettings.generated.h"

UENUM(Blueprintable)
enum class EFNAFGameType : uint8
{
	Demo = 0,
	Normal = 1,
	Arcade = 2
};

/**
 * 
 */
UCLASS()
class FREDDYS_API UFNAFEditorSettings : public UDeveloperSettings
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EFNAFGameType                                      GameType;    

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               HasHalloweenDLC;                                        
};
