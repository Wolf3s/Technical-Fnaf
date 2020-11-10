
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

// Function Loading_NonVR.Loading_NonVR_C.TestingEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ULoading_NonVR_C::TestingEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Loading_NonVR.Loading_NonVR_C.TestingEvent");

	ULoading_NonVR_C_TestingEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Loading_NonVR.Loading_NonVR_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void ULoading_NonVR_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Loading_NonVR.Loading_NonVR_C.Reset");

	ULoading_NonVR_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Loading_NonVR.Loading_NonVR_C.SequenceEvent_1
// (BlueprintCallable, BlueprintEvent)

void ULoading_NonVR_C::SequenceEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Loading_NonVR.Loading_NonVR_C.SequenceEvent_1");

	ULoading_NonVR_C_SequenceEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Loading_NonVR.Loading_NonVR_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoading_NonVR_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Loading_NonVR.Loading_NonVR_C.Construct");

	ULoading_NonVR_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Loading_NonVR.Loading_NonVR_C.Update
// (BlueprintCallable, BlueprintEvent)

void ULoading_NonVR_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function Loading_NonVR.Loading_NonVR_C.Update");

	ULoading_NonVR_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Loading_NonVR.Loading_NonVR_C.ResetDoOnce
// (BlueprintCallable, BlueprintEvent)

void ULoading_NonVR_C::ResetDoOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Loading_NonVR.Loading_NonVR_C.ResetDoOnce");

	ULoading_NonVR_C_ResetDoOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Loading_NonVR.Loading_NonVR_C.ExecuteUbergraph_Loading_NonVR
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoading_NonVR_C::ExecuteUbergraph_Loading_NonVR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Loading_NonVR.Loading_NonVR_C.ExecuteUbergraph_Loading_NonVR");

	ULoading_NonVR_C_ExecuteUbergraph_Loading_NonVR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
