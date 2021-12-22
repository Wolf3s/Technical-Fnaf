// Fill out your copyright notice in the Description page of Project Settings.

#include "FNAF_GameInstanceBase.h"

void UFNAF_GameInstanceBase::SwitchFNAFGameType(EFNAFGameType GameType)
{
}

void UFNAF_GameInstanceBase::StartAsyncSaveGame(USaveGame* SaveGame, FString SlotName, int UserIndex)
{
}

void UFNAF_GameInstanceBase::LoadLevelAsync(UObject* WorldContextObject, FName LevelName)
{
}

bool UFNAF_GameInstanceBase::IsInDemoMode()
{
	return false;
}

bool UFNAF_GameInstanceBase::HasDLC(EFNAFDLCType DLC)
{
	return false;
}

FString UFNAF_GameInstanceBase::GetPrimaryGPUBrand()
{
	return FPlatformMisc::GetCPUBrand();
}

FString UFNAF_GameInstanceBase::GetGPUBrandName()
{
	return FPlatformMisc::GetPrimaryGPUBrand();
}

EFNAFGameType UFNAF_GameInstanceBase::GetGameType()
{
	return EFNAFGameType();
}

int UFNAF_GameInstanceBase::GetForcedVariantNumber()
{
	return FPlatformMisc::GetCPUInfo();
}
