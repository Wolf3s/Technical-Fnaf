// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NPCBaseInterface.generated.h"

UENUM(Blueprintable)
enum class EAILifeCycle : uint8
{
	Alive = 0,
	Dead = 1
};

UCLASS()
class FREDDYS_API UNPCBaseInterface : public UObject
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable)
	void SetHealth(float health);
		
	UFUNCTION(BlueprintCallable)
	void SetAILifeCycle(EAILifeCycle lifeCycle);
		
	UFUNCTION(BlueprintCallable)
	float GetHealth();

};
