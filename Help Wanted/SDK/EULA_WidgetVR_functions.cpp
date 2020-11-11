
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

// Function EULA_WidgetVR.EULA_WidgetVR_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEULA_WidgetVR_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EULA_WidgetVR.EULA_WidgetVR_C.Construct");

	UEULA_WidgetVR_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EULA_WidgetVR.EULA_WidgetVR_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEULA_WidgetVR_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EULA_WidgetVR.EULA_WidgetVR_C.Tick");

	UEULA_WidgetVR_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EULA_WidgetVR.EULA_WidgetVR_C.ScrollText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ScrollOffset                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEULA_WidgetVR_C::ScrollText(float ScrollOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function EULA_WidgetVR.EULA_WidgetVR_C.ScrollText");

	UEULA_WidgetVR_C_ScrollText_Params params;
	params.ScrollOffset = ScrollOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EULA_WidgetVR.EULA_WidgetVR_C.OnScrollUpPressed
// (BlueprintCallable, BlueprintEvent)

void UEULA_WidgetVR_C::OnScrollUpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EULA_WidgetVR.EULA_WidgetVR_C.OnScrollUpPressed");

	UEULA_WidgetVR_C_OnScrollUpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EULA_WidgetVR.EULA_WidgetVR_C.OnScrollUpReleased
// (BlueprintCallable, BlueprintEvent)

void UEULA_WidgetVR_C::OnScrollUpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function EULA_WidgetVR.EULA_WidgetVR_C.OnScrollUpReleased");

	UEULA_WidgetVR_C_OnScrollUpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EULA_WidgetVR.EULA_WidgetVR_C.OnScrollDownPressed
// (BlueprintCallable, BlueprintEvent)

void UEULA_WidgetVR_C::OnScrollDownPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EULA_WidgetVR.EULA_WidgetVR_C.OnScrollDownPressed");

	UEULA_WidgetVR_C_OnScrollDownPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EULA_WidgetVR.EULA_WidgetVR_C.OnScrollDownReleased
// (BlueprintCallable, BlueprintEvent)

void UEULA_WidgetVR_C::OnScrollDownReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function EULA_WidgetVR.EULA_WidgetVR_C.OnScrollDownReleased");

	UEULA_WidgetVR_C_OnScrollDownReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EULA_WidgetVR.EULA_WidgetVR_C.OnControllerTrackingChanged
// (BlueprintCallable, BlueprintEvent)

void UEULA_WidgetVR_C::OnControllerTrackingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function EULA_WidgetVR.EULA_WidgetVR_C.OnControllerTrackingChanged");

	UEULA_WidgetVR_C_OnControllerTrackingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EULA_WidgetVR.EULA_WidgetVR_C.ExecuteUbergraph_EULA_WidgetVR
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEULA_WidgetVR_C::ExecuteUbergraph_EULA_WidgetVR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EULA_WidgetVR.EULA_WidgetVR_C.ExecuteUbergraph_EULA_WidgetVR");

	UEULA_WidgetVR_C_ExecuteUbergraph_EULA_WidgetVR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
