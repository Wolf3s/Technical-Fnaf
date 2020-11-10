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

// Function ButtonIcon.ButtonIcon_C.Change Button And State
struct UButtonIcon_C_Change_Button_And_State_Params
{
	bool                                               Is_Pressed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EControllerButtonsEnum>                Button;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonIcon.ButtonIcon_C.Change Button
struct UButtonIcon_C_Change_Button_Params
{
	TEnumAsByte<EControllerButtonsEnum>                Controller_Button;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HaloOpacity;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonIcon.ButtonIcon_C.Change Button State
struct UButtonIcon_C_Change_Button_State_Params
{
	bool                                               Pressed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonIcon.ButtonIcon_C.OnControllerDeviceChanged
struct UButtonIcon_C_OnControllerDeviceChanged_Params
{
};

// Function ButtonIcon.ButtonIcon_C.PreConstruct
struct UButtonIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonIcon.ButtonIcon_C.Change Controller Overrides
struct UButtonIcon_C_Change_Controller_Overrides_Params
{
	TMap<EControllerType, TEnumAsByte<EControllerButtonsEnum>> ControllerOverrides;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ButtonIcon.ButtonIcon_C.Change Button Halo Opacity
struct UButtonIcon_C_Change_Button_Halo_Opacity_Params
{
	float                                              HaloOpacity;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonIcon.ButtonIcon_C.Change Button State and Halo Opacity
struct UButtonIcon_C_Change_Button_State_and_Halo_Opacity_Params
{
	float                                              HaloOpacity;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Pressed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EControllerButtonsEnum>                Button;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonIcon.ButtonIcon_C.UpdateDisplay
struct UButtonIcon_C_UpdateDisplay_Params
{
};

// Function ButtonIcon.ButtonIcon_C.ExecuteUbergraph_ButtonIcon
struct UButtonIcon_C_ExecuteUbergraph_ButtonIcon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
