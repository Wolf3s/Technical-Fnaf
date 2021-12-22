// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SWS_AudioSource.generated.h"

UCLASS()
class FREDDYS_API ASWS_AudioSource : public AActor
{
	GENERATED_BODY()
	
public:	

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue*                                   SoundCueFile;

	UFUNCTION(BlueprintCallable)
	void StopAudio(class UObject* WorldContextObject);
	
	UFUNCTION(BlueprintCallable)
	void PlayAudio(class UObject* WorldContextObject, class USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
	
	UFUNCTION(BlueprintCallable)
	void DestroyHandle();

};
