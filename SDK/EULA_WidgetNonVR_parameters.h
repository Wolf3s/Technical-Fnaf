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

// Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.Construct
struct UEULA_WidgetNonVR_C_Construct_Params
{
};

// Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.Tick
struct UEULA_WidgetNonVR_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.ScrollText
struct UEULA_WidgetNonVR_C_ScrollText_Params
{
	float                                              ScrollOffset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.OnScrollUpPressed
struct UEULA_WidgetNonVR_C_OnScrollUpPressed_Params
{
};

// Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.OnScrollUpReleased
struct UEULA_WidgetNonVR_C_OnScrollUpReleased_Params
{
};

// Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.OnScrollDownPressed
struct UEULA_WidgetNonVR_C_OnScrollDownPressed_Params
{
};

// Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.OnScrollDownReleased
struct UEULA_WidgetNonVR_C_OnScrollDownReleased_Params
{
};

// Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.OnControllerTrackingChanged
struct UEULA_WidgetNonVR_C_OnControllerTrackingChanged_Params
{
};

// Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.OnTextChanged_Event_1
struct UEULA_WidgetNonVR_C_OnTextChanged_Event_1_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function EULA_WidgetNonVR.EULA_WidgetNonVR_C.ExecuteUbergraph_EULA_WidgetNonVR
struct UEULA_WidgetNonVR_C_ExecuteUbergraph_EULA_WidgetNonVR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
