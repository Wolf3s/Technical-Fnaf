// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SWGVRSettings.generated.h"

/**
 * 
 */
UCLASS()
class SWGVR_API USWGVRSettings : public UDeveloperSettings
{
	GENERATED_BODY()
	
public:
		
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bEnableCameraLocator;                                 
		
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bForcePickupTesting;                                  
		
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bForcePickupDebugDisplay;                             
		
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bForceDS4Enabled;                                     
		
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bAllowNonVR;                                          

};
