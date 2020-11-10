
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

// Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEULA_WidgetNonVR_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.Construct");

	UEULA_WidgetNonVR_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEULA_WidgetNonVR_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.Tick");

	UEULA_WidgetNonVR_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.ScrollText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ScrollOffset                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEULA_WidgetNonVR_C::ScrollText(float ScrollOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.ScrollText");

	UEULA_WidgetNonVR_C_ScrollText_Params params;
	params.ScrollOffset = ScrollOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.OnScrollUpPressed
// (BlueprintCallable, BlueprintEvent)

void UEULA_WidgetNonVR_C::OnScrollUpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.OnScrollUpPressed");

	UEULA_WidgetNonVR_C_OnScrollUpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.OnScrollUpReleased
// (BlueprintCallable, BlueprintEvent)

void UEULA_WidgetNonVR_C::OnScrollUpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.OnScrollUpReleased");

	UEULA_WidgetNonVR_C_OnScrollUpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.OnScrollDownPressed
// (BlueprintCallable, BlueprintEvent)

void UEULA_WidgetNonVR_C::OnScrollDownPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.OnScrollDownPressed");

	UEULA_WidgetNonVR_C_OnScrollDownPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.OnScrollDownReleased
// (BlueprintCallable, BlueprintEvent)

void UEULA_WidgetNonVR_C::OnScrollDownReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.OnScrollDownReleased");

	UEULA_WidgetNonVR_C_OnScrollDownReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.OnControllerTrackingChanged
// (BlueprintCallable, BlueprintEvent)

void UEULA_WidgetNonVR_C::OnControllerTrackingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.OnControllerTrackingChanged");

	UEULA_WidgetNonVR_C_OnControllerTrackingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.OnTextChanged_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEULA_WidgetNonVR_C::OnTextChanged_Event_1(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.OnTextChanged_Event_1");

	UEULA_WidgetNonVR_C_OnTextChanged_Event_1_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.ExecuteUbergraph_EULA_WidgetNonVR
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEULA_WidgetNonVR_C::ExecuteUbergraph_EULA_WidgetNonVR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.ExecuteUbergraph_EULA_WidgetNonVR");

	UEULA_WidgetNonVR_C_ExecuteUbergraph_EULA_WidgetNonVR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
