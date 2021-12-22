// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "FNAFGamestate.generated.h"

UENUM(Blueprintable)
enum class EGLVictoryState : uint8
{
	InProgress = 0,
	Victory = 1,
	Defeat = 2
};

UENUM(Blueprintable)
enum class EGLGameState : uint8
{
	PreInit = 0,
	Init = 1,
	Progress = 2,
	Completed = 3
};

/**
 * 
 */
UCLASS()
class FREDDYS_API AFNAFGamestate : public AGameState
{
	GENERATED_BODY()

public:
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EGLVictoryState                                    VictoryState;                                            
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EGLGameState                                       GameState;                                               
			
	UFUNCTION(BlueprintCallable)
	void SetVictoryCondition(EGLVictoryState victory);
			
	UFUNCTION(BlueprintCallable)
	void SetGameState(EGLGameState State);
			
	UFUNCTION(BlueprintCallable)
	EGLVictoryState GetVictoryCondition();
			
	UFUNCTION(BlueprintCallable)
	EGLGameState GetGameState();

};
