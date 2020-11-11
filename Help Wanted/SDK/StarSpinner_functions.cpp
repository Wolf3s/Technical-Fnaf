
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

// Function StarSpinner.StarSpinner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStarSpinner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StarSpinner.StarSpinner_C.UserConstructionScript");

	AStarSpinner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StarSpinner.StarSpinner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AStarSpinner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StarSpinner.StarSpinner_C.ReceiveBeginPlay");

	AStarSpinner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StarSpinner.StarSpinner_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStarSpinner_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function StarSpinner.StarSpinner_C.ReceiveTick");

	AStarSpinner_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StarSpinner.StarSpinner_C.ExecuteUbergraph_StarSpinner
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStarSpinner_C::ExecuteUbergraph_StarSpinner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StarSpinner.StarSpinner_C.ExecuteUbergraph_StarSpinner");

	AStarSpinner_C_ExecuteUbergraph_StarSpinner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
