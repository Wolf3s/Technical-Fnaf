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

// Function EULA_WidgetVR.EULA_WidgetVR_C.Construct
struct UEULA_WidgetVR_C_Construct_Params
{
};

// Function EULA_WidgetVR.EULA_WidgetVR_C.Tick
struct UEULA_WidgetVR_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EULA_WidgetVR.EULA_WidgetVR_C.ScrollText
struct UEULA_WidgetVR_C_ScrollText_Params
{
	float                                              ScrollOffset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EULA_WidgetVR.EULA_WidgetVR_C.OnScrollUpPressed
struct UEULA_WidgetVR_C_OnScrollUpPressed_Params
{
};

// Function EULA_WidgetVR.EULA_WidgetVR_C.OnScrollUpReleased
struct UEULA_WidgetVR_C_OnScrollUpReleased_Params
{
};

// Function EULA_WidgetVR.EULA_WidgetVR_C.OnScrollDownPressed
struct UEULA_WidgetVR_C_OnScrollDownPressed_Params
{
};

// Function EULA_WidgetVR.EULA_WidgetVR_C.OnScrollDownReleased
struct UEULA_WidgetVR_C_OnScrollDownReleased_Params
{
};

// Function EULA_WidgetVR.EULA_WidgetVR_C.OnControllerTrackingChanged
struct UEULA_WidgetVR_C_OnControllerTrackingChanged_Params
{
};

// Function EULA_WidgetVR.EULA_WidgetVR_C.ExecuteUbergraph_EULA_WidgetVR
struct UEULA_WidgetVR_C_ExecuteUbergraph_EULA_WidgetVR_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
