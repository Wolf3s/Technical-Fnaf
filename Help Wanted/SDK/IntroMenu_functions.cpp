
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

// Function IntroMenu.IntroMenu_C.OnControllerDeviceChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UIntroMenu_C::OnControllerDeviceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.OnControllerDeviceChanged");

	UIntroMenu_C_OnControllerDeviceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.HandleButtonPress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EIntroMenu_Enum>   ButtonHit                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIntroMenu_C::HandleButtonPress(TEnumAsByte<EIntroMenu_Enum> ButtonHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.HandleButtonPress");

	UIntroMenu_C_HandleButtonPress_Params params;
	params.ButtonHit = ButtonHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.PaddingOnTranslation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIntroMenu_C::PaddingOnTranslation()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.PaddingOnTranslation");

	UIntroMenu_C_PaddingOnTranslation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.OnPadTrackingChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UIntroMenu_C::OnPadTrackingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.OnPadTrackingChanged");

	UIntroMenu_C_OnPadTrackingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.ResetMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UIntroMenu_C::ResetMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.ResetMenu");

	UIntroMenu_C_ResetMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.GoIntoSubMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UIntroMenu_C::GoIntoSubMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.GoIntoSubMenu");

	UIntroMenu_C_GoIntoSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.MoveCursor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UporDown                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIntroMenu_C::MoveCursor(bool UporDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.MoveCursor");

	UIntroMenu_C_MoveCursor_Params params;
	params.UporDown = UporDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.Enter_IntroMenu
// (BlueprintCallable, BlueprintEvent)

void UIntroMenu_C::Enter_IntroMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.Enter_IntroMenu");

	UIntroMenu_C_Enter_IntroMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.IntroMenuUp
// (BlueprintCallable, BlueprintEvent)

void UIntroMenu_C::IntroMenuUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.IntroMenuUp");

	UIntroMenu_C_IntroMenuUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.IntroMenuDown
// (BlueprintCallable, BlueprintEvent)

void UIntroMenu_C::IntroMenuDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.IntroMenuDown");

	UIntroMenu_C_IntroMenuDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.IntroMenuLeft
// (BlueprintCallable, BlueprintEvent)

void UIntroMenu_C::IntroMenuLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.IntroMenuLeft");

	UIntroMenu_C_IntroMenuLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.IntroMenuRight
// (BlueprintCallable, BlueprintEvent)

void UIntroMenu_C::IntroMenuRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.IntroMenuRight");

	UIntroMenu_C_IntroMenuRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.ConfirmButtonClick
// (BlueprintCallable, BlueprintEvent)

void UIntroMenu_C::ConfirmButtonClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.ConfirmButtonClick");

	UIntroMenu_C_ConfirmButtonClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIntroMenu_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.OnInitialized");

	UIntroMenu_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.BndEvt__NewGameButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UIntroMenu_C::BndEvt__NewGameButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.BndEvt__NewGameButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UIntroMenu_C_BndEvt__NewGameButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UIntroMenu_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UIntroMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UIntroMenu_C::BndEvt__CreditsButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UIntroMenu_C_BndEvt__CreditsButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UIntroMenu_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UIntroMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UIntroMenu_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");

	UIntroMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UIntroMenu_C::BndEvt__ClearButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");

	UIntroMenu_C_BndEvt__ClearButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.BndEvt__BackButton_Credits_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UIntroMenu_C::BndEvt__BackButton_Credits_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.BndEvt__BackButton_Credits_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");

	UIntroMenu_C_BndEvt__BackButton_Credits_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.BndEvt__SubtitlesButton_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UIntroMenu_C::BndEvt__SubtitlesButton_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.BndEvt__SubtitlesButton_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature");

	UIntroMenu_C_BndEvt__SubtitlesButton_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIntroMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.Construct");

	UIntroMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.OnConfirmComplete
// (BlueprintCallable, BlueprintEvent)

void UIntroMenu_C::OnConfirmComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.OnConfirmComplete");

	UIntroMenu_C_OnConfirmComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIntroMenu_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.PreConstruct");

	UIntroMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIntroMenu_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.Tick");

	UIntroMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.BndEvt__Gamma_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UIntroMenu_C::BndEvt__Gamma_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.BndEvt__Gamma_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature");

	UIntroMenu_C_BndEvt__Gamma_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.BndEvt__VisualBackButton_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UIntroMenu_C::BndEvt__VisualBackButton_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.BndEvt__VisualBackButton_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature");

	UIntroMenu_C_BndEvt__VisualBackButton_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UIntroMenu_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature");

	UIntroMenu_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UIntroMenu_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature");

	UIntroMenu_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.EnableGammaTester
// (BlueprintCallable, BlueprintEvent)

void UIntroMenu_C::EnableGammaTester()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.EnableGammaTester");

	UIntroMenu_C_EnableGammaTester_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.EnableQualityMenu
// (BlueprintCallable, BlueprintEvent)

void UIntroMenu_C::EnableQualityMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.EnableQualityMenu");

	UIntroMenu_C_EnableQualityMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.SelectButtonClick
// (BlueprintCallable, BlueprintEvent)

void UIntroMenu_C::SelectButtonClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.SelectButtonClick");

	UIntroMenu_C_SelectButtonClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.ExecuteUbergraph_IntroMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIntroMenu_C::ExecuteUbergraph_IntroMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.ExecuteUbergraph_IntroMenu");

	UIntroMenu_C_ExecuteUbergraph_IntroMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroMenu.IntroMenu_C.ResetCameraPosition__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UIntroMenu_C::ResetCameraPosition__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroMenu.IntroMenu_C.ResetCameraPosition__DelegateSignature");

	UIntroMenu_C_ResetCameraPosition__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
