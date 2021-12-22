// Fill out your copyright notice in the Description page of Project Settings.

#include "SWS_AudioManager.h"

void ASWS_AudioManager::StopAudioByID(int ID)
{
}

void ASWS_AudioManager::StopAudioByHandle(FAudioHandle AudioHandle)
{
}

void ASWS_AudioManager::StopAudioByAsset(USoundBase* Base)
{
}

void ASWS_AudioManager::RefreshAudioHandlePool(FAudioHandle Handle)
{
}

FAudioHandle ASWS_AudioManager::PlayAudioByName(FString Name, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	return FAudioHandle();
}

FAudioHandle ASWS_AudioManager::PlayAudioByID(int ID, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	return FAudioHandle();
}

FAudioHandle ASWS_AudioManager::PlayAudioByAsset(USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	return FAudioHandle();
}

int ASWS_AudioManager::GetSoundID(USoundCue* cue)
{
	return 0;
}

USoundCue* ASWS_AudioManager::GetSoundCueByName(FString Name)
{
	return nullptr;
}

USoundCue* ASWS_AudioManager::GetSoundByID(int ID)
{
	return nullptr;
}

class ASWS_AudioManager* ASWS_AudioManager::GetAudioManager()
{
	return nullptr;
}
