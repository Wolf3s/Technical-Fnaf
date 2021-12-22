// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "FNAFGameMode.generated.h"

/**
 * 
 */
UCLASS()
class FREDDYS_API AFNAFGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass*                                      LevelDBClass;                                          
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<class ULevelDB>                                    LevelDBInstance;                                       

	UFUNCTION(BlueprintCallable)
	void SpawnLevelDB();

	UFUNCTION(BlueprintCallable)
	void OnSetLevelDB();

};
