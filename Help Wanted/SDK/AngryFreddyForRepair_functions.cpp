
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

// Function AngryFreddyForRepair.AngryFreddyForRepair_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAngryFreddyForRepair_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AngryFreddyForRepair.AngryFreddyForRepair_C.UserConstructionScript");

	AAngryFreddyForRepair_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngryFreddyForRepair.AngryFreddyForRepair_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAngryFreddyForRepair_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AngryFreddyForRepair.AngryFreddyForRepair_C.ReceiveTick");

	AAngryFreddyForRepair_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngryFreddyForRepair.AngryFreddyForRepair_C.StartAnger
// (BlueprintCallable, BlueprintEvent)

void AAngryFreddyForRepair_C::StartAnger()
{
	static auto fn = UObject::FindObject<UFunction>("Function AngryFreddyForRepair.AngryFreddyForRepair_C.StartAnger");

	AAngryFreddyForRepair_C_StartAnger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngryFreddyForRepair.AngryFreddyForRepair_C.EndAnger
// (BlueprintCallable, BlueprintEvent)

void AAngryFreddyForRepair_C::EndAnger()
{
	static auto fn = UObject::FindObject<UFunction>("Function AngryFreddyForRepair.AngryFreddyForRepair_C.EndAnger");

	AAngryFreddyForRepair_C_EndAnger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngryFreddyForRepair.AngryFreddyForRepair_C.Stop Audio
// (BlueprintCallable, BlueprintEvent)

void AAngryFreddyForRepair_C::Stop_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function AngryFreddyForRepair.AngryFreddyForRepair_C.Stop Audio");

	AAngryFreddyForRepair_C_Stop_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AngryFreddyForRepair.AngryFreddyForRepair_C.ExecuteUbergraph_AngryFreddyForRepair
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAngryFreddyForRepair_C::ExecuteUbergraph_AngryFreddyForRepair(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AngryFreddyForRepair.AngryFreddyForRepair_C.ExecuteUbergraph_AngryFreddyForRepair");

	AAngryFreddyForRepair_C_ExecuteUbergraph_AngryFreddyForRepair_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
