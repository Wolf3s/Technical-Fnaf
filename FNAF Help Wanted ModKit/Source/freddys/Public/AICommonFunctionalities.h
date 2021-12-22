// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AICommonFunctionalities.generated.h"

UENUM(Blueprintable)
enum class EAIScareDirection : uint8
{
	Right = 0,
	Left = 1,
	Up = 2,
	Down = 3
};

UENUM(Blueprintable)
enum class EAIBaseAxisDirection : uint8
{
	Horizontal = 0,
	Vertical = 1
};

/**
 * 
 */
UCLASS()
class FREDDYS_API UAICommonFunctionalities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
		
	UFUNCTION(BlueprintCallable)
	static bool isVerticalAxis(EAIScareDirection Direction);
			
	UFUNCTION(BlueprintCallable)
	static bool isValidAxisDirection(EAIBaseAxisDirection Axis, EAIScareDirection Direction);
			
	UFUNCTION(BlueprintCallable)
	static bool isHorizontalAxis(EAIScareDirection Direction);
};
