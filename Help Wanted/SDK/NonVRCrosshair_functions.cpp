
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

// Function NonVRCrosshair.NonVRCrosshair_C.Get_Center_Brush_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNonVRCrosshair_C::Get_Center_Brush_1(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVRCrosshair.NonVRCrosshair_C.Get_Center_Brush_1");

	UNonVRCrosshair_C_Get_Center_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function NonVRCrosshair.NonVRCrosshair_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNonVRCrosshair_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVRCrosshair.NonVRCrosshair_C.Tick");

	UNonVRCrosshair_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NonVRCrosshair.NonVRCrosshair_C.RecticleLookAt
// (BlueprintCallable, BlueprintEvent)

void UNonVRCrosshair_C::RecticleLookAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVRCrosshair.NonVRCrosshair_C.RecticleLookAt");

	UNonVRCrosshair_C_RecticleLookAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NonVRCrosshair.NonVRCrosshair_C.RecticleReset
// (BlueprintCallable, BlueprintEvent)

void UNonVRCrosshair_C::RecticleReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVRCrosshair.NonVRCrosshair_C.RecticleReset");

	UNonVRCrosshair_C_RecticleReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NonVRCrosshair.NonVRCrosshair_C.ReticleInteract
// (BlueprintCallable, BlueprintEvent)

void UNonVRCrosshair_C::ReticleInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVRCrosshair.NonVRCrosshair_C.ReticleInteract");

	UNonVRCrosshair_C_ReticleInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NonVRCrosshair.NonVRCrosshair_C.ExecuteUbergraph_NonVRCrosshair
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNonVRCrosshair_C::ExecuteUbergraph_NonVRCrosshair(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVRCrosshair.NonVRCrosshair_C.ExecuteUbergraph_NonVRCrosshair");

	UNonVRCrosshair_C_ExecuteUbergraph_NonVRCrosshair_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
