
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

// Function ShowtimeLights.ShowtimeLights_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AShowtimeLights_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowtimeLights.ShowtimeLights_C.UserConstructionScript");

	AShowtimeLights_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowtimeLights.ShowtimeLights_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void AShowtimeLights_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowtimeLights.ShowtimeLights_C.Timeline_1__FinishedFunc");

	AShowtimeLights_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowtimeLights.ShowtimeLights_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void AShowtimeLights_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowtimeLights.ShowtimeLights_C.Timeline_1__UpdateFunc");

	AShowtimeLights_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowtimeLights.ShowtimeLights_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AShowtimeLights_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowtimeLights.ShowtimeLights_C.Timeline_0__FinishedFunc");

	AShowtimeLights_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowtimeLights.ShowtimeLights_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AShowtimeLights_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowtimeLights.ShowtimeLights_C.Timeline_0__UpdateFunc");

	AShowtimeLights_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowtimeLights.ShowtimeLights_C.EndLights
// (BlueprintCallable, BlueprintEvent)

void AShowtimeLights_C::EndLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowtimeLights.ShowtimeLights_C.EndLights");

	AShowtimeLights_C_EndLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowtimeLights.ShowtimeLights_C.StartLights
// (BlueprintCallable, BlueprintEvent)

void AShowtimeLights_C::StartLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowtimeLights.ShowtimeLights_C.StartLights");

	AShowtimeLights_C_StartLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowtimeLights.ShowtimeLights_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AShowtimeLights_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowtimeLights.ShowtimeLights_C.ReceiveBeginPlay");

	AShowtimeLights_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowtimeLights.ShowtimeLights_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShowtimeLights_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowtimeLights.ShowtimeLights_C.ReceiveTick");

	AShowtimeLights_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowtimeLights.ShowtimeLights_C.ExecuteUbergraph_ShowtimeLights
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShowtimeLights_C::ExecuteUbergraph_ShowtimeLights(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowtimeLights.ShowtimeLights_C.ExecuteUbergraph_ShowtimeLights");

	AShowtimeLights_C_ExecuteUbergraph_ShowtimeLights_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
