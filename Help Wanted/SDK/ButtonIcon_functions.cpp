
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

// Function ButtonIcon.ButtonIcon_C.Change Button And State
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Pressed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EControllerButtonsEnum> Button                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButtonIcon_C::Change_Button_And_State(bool Is_Pressed, TEnumAsByte<EControllerButtonsEnum> Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonIcon.ButtonIcon_C.Change Button And State");

	UButtonIcon_C_Change_Button_And_State_Params params;
	params.Is_Pressed = Is_Pressed;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonIcon.ButtonIcon_C.Change Button
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EControllerButtonsEnum> Controller_Button              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HaloOpacity                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButtonIcon_C::Change_Button(TEnumAsByte<EControllerButtonsEnum> Controller_Button, float HaloOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonIcon.ButtonIcon_C.Change Button");

	UButtonIcon_C_Change_Button_Params params;
	params.Controller_Button = Controller_Button;
	params.HaloOpacity = HaloOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonIcon.ButtonIcon_C.Change Button State
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Pressed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButtonIcon_C::Change_Button_State(bool Pressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonIcon.ButtonIcon_C.Change Button State");

	UButtonIcon_C_Change_Button_State_Params params;
	params.Pressed = Pressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonIcon.ButtonIcon_C.OnControllerDeviceChanged
// (BlueprintCallable, BlueprintEvent)

void UButtonIcon_C::OnControllerDeviceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonIcon.ButtonIcon_C.OnControllerDeviceChanged");

	UButtonIcon_C_OnControllerDeviceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonIcon.ButtonIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButtonIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonIcon.ButtonIcon_C.PreConstruct");

	UButtonIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonIcon.ButtonIcon_C.Change Controller Overrides
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EControllerType, TEnumAsByte<EControllerButtonsEnum>> ControllerOverrides            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UButtonIcon_C::Change_Controller_Overrides(TMap<EControllerType, TEnumAsByte<EControllerButtonsEnum>> ControllerOverrides)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonIcon.ButtonIcon_C.Change Controller Overrides");

	UButtonIcon_C_Change_Controller_Overrides_Params params;
	params.ControllerOverrides = ControllerOverrides;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonIcon.ButtonIcon_C.Change Button Halo Opacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HaloOpacity                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButtonIcon_C::Change_Button_Halo_Opacity(float HaloOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonIcon.ButtonIcon_C.Change Button Halo Opacity");

	UButtonIcon_C_Change_Button_Halo_Opacity_Params params;
	params.HaloOpacity = HaloOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonIcon.ButtonIcon_C.Change Button State and Halo Opacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HaloOpacity                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Is_Pressed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EControllerButtonsEnum> Button                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButtonIcon_C::Change_Button_State_and_Halo_Opacity(float HaloOpacity, bool Is_Pressed, TEnumAsByte<EControllerButtonsEnum> Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonIcon.ButtonIcon_C.Change Button State and Halo Opacity");

	UButtonIcon_C_Change_Button_State_and_Halo_Opacity_Params params;
	params.HaloOpacity = HaloOpacity;
	params.Is_Pressed = Is_Pressed;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonIcon.ButtonIcon_C.UpdateDisplay
// (BlueprintCallable, BlueprintEvent)

void UButtonIcon_C::UpdateDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonIcon.ButtonIcon_C.UpdateDisplay");

	UButtonIcon_C_UpdateDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonIcon.ButtonIcon_C.ExecuteUbergraph_ButtonIcon
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButtonIcon_C::ExecuteUbergraph_ButtonIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonIcon.ButtonIcon_C.ExecuteUbergraph_ButtonIcon");

	UButtonIcon_C_ExecuteUbergraph_ButtonIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
