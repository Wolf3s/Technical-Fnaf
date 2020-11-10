#pragma once

#include "../SDK.h"

// Name: Freddys, Version: 4.2.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function IntroMenu.IntroMenu_C.OnControllerDeviceChanged
struct UIntroMenu_C_OnControllerDeviceChanged_Params
{
};

// Function IntroMenu.IntroMenu_C.HandleButtonPress
struct UIntroMenu_C_HandleButtonPress_Params
{
	TEnumAsByte<EIntroMenu_Enum>                       ButtonHit;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IntroMenu.IntroMenu_C.PaddingOnTranslation
struct UIntroMenu_C_PaddingOnTranslation_Params
{
};

// Function IntroMenu.IntroMenu_C.OnPadTrackingChanged
struct UIntroMenu_C_OnPadTrackingChanged_Params
{
};

// Function IntroMenu.IntroMenu_C.ResetMenu
struct UIntroMenu_C_ResetMenu_Params
{
};

// Function IntroMenu.IntroMenu_C.GoIntoSubMenu
struct UIntroMenu_C_GoIntoSubMenu_Params
{
};

// Function IntroMenu.IntroMenu_C.MoveCursor
struct UIntroMenu_C_MoveCursor_Params
{
	bool                                               UporDown;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IntroMenu.IntroMenu_C.Enter_IntroMenu
struct UIntroMenu_C_Enter_IntroMenu_Params
{
};

// Function IntroMenu.IntroMenu_C.IntroMenuUp
struct UIntroMenu_C_IntroMenuUp_Params
{
};

// Function IntroMenu.IntroMenu_C.IntroMenuDown
struct UIntroMenu_C_IntroMenuDown_Params
{
};

// Function IntroMenu.IntroMenu_C.IntroMenuLeft
struct UIntroMenu_C_IntroMenuLeft_Params
{
};

// Function IntroMenu.IntroMenu_C.IntroMenuRight
struct UIntroMenu_C_IntroMenuRight_Params
{
};

// Function IntroMenu.IntroMenu_C.ConfirmButtonClick
struct UIntroMenu_C_ConfirmButtonClick_Params
{
};

// Function IntroMenu.IntroMenu_C.OnInitialized
struct UIntroMenu_C_OnInitialized_Params
{
};

// Function IntroMenu.IntroMenu_C.BndEvt__NewGameButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UIntroMenu_C_BndEvt__NewGameButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function IntroMenu.IntroMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UIntroMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function IntroMenu.IntroMenu_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
struct UIntroMenu_C_BndEvt__CreditsButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function IntroMenu.IntroMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
struct UIntroMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function IntroMenu.IntroMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
struct UIntroMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function IntroMenu.IntroMenu_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
struct UIntroMenu_C_BndEvt__ClearButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function IntroMenu.IntroMenu_C.BndEvt__BackButton_Credits_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
struct UIntroMenu_C_BndEvt__BackButton_Credits_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function IntroMenu.IntroMenu_C.BndEvt__SubtitlesButton_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
struct UIntroMenu_C_BndEvt__SubtitlesButton_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function IntroMenu.IntroMenu_C.Construct
struct UIntroMenu_C_Construct_Params
{
};

// Function IntroMenu.IntroMenu_C.OnConfirmComplete
struct UIntroMenu_C_OnConfirmComplete_Params
{
};

// Function IntroMenu.IntroMenu_C.PreConstruct
struct UIntroMenu_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IntroMenu.IntroMenu_C.Tick
struct UIntroMenu_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IntroMenu.IntroMenu_C.BndEvt__Gamma_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
struct UIntroMenu_C_BndEvt__Gamma_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function IntroMenu.IntroMenu_C.BndEvt__VisualBackButton_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
struct UIntroMenu_C_BndEvt__VisualBackButton_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function IntroMenu.IntroMenu_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature
struct UIntroMenu_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function IntroMenu.IntroMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
struct UIntroMenu_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function IntroMenu.IntroMenu_C.EnableGammaTester
struct UIntroMenu_C_EnableGammaTester_Params
{
};

// Function IntroMenu.IntroMenu_C.EnableQualityMenu
struct UIntroMenu_C_EnableQualityMenu_Params
{
};

// Function IntroMenu.IntroMenu_C.SelectButtonClick
struct UIntroMenu_C_SelectButtonClick_Params
{
};

// Function IntroMenu.IntroMenu_C.ExecuteUbergraph_IntroMenu
struct UIntroMenu_C_ExecuteUbergraph_IntroMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IntroMenu.IntroMenu_C.ResetCameraPosition__DelegateSignature
struct UIntroMenu_C_ResetCameraPosition__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
