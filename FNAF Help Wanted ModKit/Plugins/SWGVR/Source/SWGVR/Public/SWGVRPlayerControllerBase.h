// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SWGVRPlayerControllerBase.generated.h"

/**
 * 
 */
UCLASS()
class SWGVR_API ASWGVRPlayerControllerBase : public APlayerController
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable)
	void OnUsingGamepadChanged();

	UFUNCTION(BlueprintCallable)
	bool IsUsingGamepad();
};
