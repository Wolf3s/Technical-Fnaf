// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "SWS_AudioManager.generated.h"

USTRUCT(Blueprintable)
struct FAudioData : public FTableRowBase
{
	GENERATED_BODY()

	float                                              NoiseValue;                                           
	FString											   AudioID;                                            
	FString											   Name;                                         
	class USoundCue*                                   SoundCue;                                     
	class USoundClass*                                 SoundCategory;                                
};

USTRUCT(Blueprintable)
struct FAudioHandle
{
	GENERATED_BODY()

	FAudioData                                  AudioData;              
	class UAudioComponent*                             AudioComponent;         
};

UCLASS()
class FREDDYS_API ASWS_AudioManager : public AActor
{
	GENERATED_BODY()
	
public:	

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UDataTable*                                  AudioAssetData;
	
	UFUNCTION(BlueprintCallable)
	void StopAudioByID(int ID);

	UFUNCTION(BlueprintCallable)
	void StopAudioByHandle(struct FAudioHandle AudioHandle);

	UFUNCTION(BlueprintCallable)
	void StopAudioByAsset(class USoundBase* Base);

	UFUNCTION(BlueprintCallable)
	void RefreshAudioHandlePool(struct FAudioHandle Handle);

	UFUNCTION(BlueprintCallable)
	struct FAudioHandle PlayAudioByName(FString Name, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);

	UFUNCTION(BlueprintCallable)
	struct FAudioHandle PlayAudioByID(int ID, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);

	UFUNCTION(BlueprintCallable)
	struct FAudioHandle PlayAudioByAsset(class USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);

	UFUNCTION(BlueprintPure)
	int GetSoundID(class USoundCue* cue);

	UFUNCTION(BlueprintPure)
	class USoundCue* GetSoundCueByName(FString Name);

	UFUNCTION(BlueprintPure)
	class USoundCue* GetSoundByID(int ID);

	UFUNCTION(BlueprintPure)
	static class ASWS_AudioManager* GetAudioManager();
};
