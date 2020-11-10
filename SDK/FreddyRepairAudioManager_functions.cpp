
#include "../SDK.h"

// Name: Freddys, Version: 4.2.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function FreddyRepairAudioManager.FreddyRepairAudioManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFreddyRepairAudioManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FreddyRepairAudioManager.FreddyRepairAudioManager_C.UserConstructionScript");

	AFreddyRepairAudioManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreddyRepairAudioManager.FreddyRepairAudioManager_C.TriggerInstructions
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFreddyRepairAudioManager_C::TriggerInstructions(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function FreddyRepairAudioManager.FreddyRepairAudioManager_C.TriggerInstructions");

	AFreddyRepairAudioManager_C_TriggerInstructions_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreddyRepairAudioManager.FreddyRepairAudioManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFreddyRepairAudioManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FreddyRepairAudioManager.FreddyRepairAudioManager_C.ReceiveBeginPlay");

	AFreddyRepairAudioManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreddyRepairAudioManager.FreddyRepairAudioManager_C.Stop Audio
// (BlueprintCallable, BlueprintEvent)

void AFreddyRepairAudioManager_C::Stop_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function FreddyRepairAudioManager.FreddyRepairAudioManager_C.Stop Audio");

	AFreddyRepairAudioManager_C_Stop_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreddyRepairAudioManager.FreddyRepairAudioManager_C.ExecuteUbergraph_FreddyRepairAudioManager
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFreddyRepairAudioManager_C::ExecuteUbergraph_FreddyRepairAudioManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FreddyRepairAudioManager.FreddyRepairAudioManager_C.ExecuteUbergraph_FreddyRepairAudioManager");

	AFreddyRepairAudioManager_C_ExecuteUbergraph_FreddyRepairAudioManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
