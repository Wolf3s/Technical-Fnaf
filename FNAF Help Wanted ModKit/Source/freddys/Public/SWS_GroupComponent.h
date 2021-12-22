// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SWS_GroupComponent.generated.h"

UCLASS()
class FREDDYS_API ASWS_GroupComponent : public AActor
{
	GENERATED_BODY()
	
public:	

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class ASWS_AudioSource*>                    ListOfAudioSources;
	
	UFUNCTION(BlueprintCallable)
	void UnRegisterAudioSource(class ASWS_AudioSource* cue);
	
	UFUNCTION(BlueprintCallable)
	void RegisterAudioSource(class ASWS_AudioSource* cue);
	
	UFUNCTION(BlueprintCallable)
	void OnVolumeModified(float Volume);
	
	UFUNCTION(BlueprintCallable)
	void OnPitchModified(float Pitch);
	
	UFUNCTION(BlueprintCallable)
	void ModifyGroupVolumeMultiplier(float Volume);
	
	UFUNCTION(BlueprintCallable)
	void ModifyGroupPitchMultiplier(float Pitch);
	
	UFUNCTION(BlueprintCallable)
	int GetTotalFrequency();
	
	UFUNCTION(BlueprintCallable)
	int GetTotalAmplitude();
};
