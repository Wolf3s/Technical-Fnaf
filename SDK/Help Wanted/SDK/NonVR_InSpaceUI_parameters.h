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

// Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.UserConstructionScript
struct ANonVR_InSpaceUI_C_UserConstructionScript_Params
{
};

// Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.ReceiveBeginPlay
struct ANonVR_InSpaceUI_C_ReceiveBeginPlay_Params
{
};

// Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.Change Button
struct ANonVR_InSpaceUI_C_Change_Button_Params
{
	TEnumAsByte<EControllerButtonsEnum>                Controller_Button;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.ReceiveTick
struct ANonVR_InSpaceUI_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.Setup Controller Display
struct ANonVR_InSpaceUI_C_Setup_Controller_Display_Params
{
};

// Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.ExecuteUbergraph_NonVR_InSpaceUI
struct ANonVR_InSpaceUI_C_ExecuteUbergraph_NonVR_InSpaceUI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
