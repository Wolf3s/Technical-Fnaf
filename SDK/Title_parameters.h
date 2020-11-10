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

// Function Title.Title_C.Construct
struct UTitle_C_Construct_Params
{
};

// Function Title.Title_C.PlayAnim
struct UTitle_C_PlayAnim_Params
{
};

// Function Title.Title_C.TurnOffPull
struct UTitle_C_TurnOffPull_Params
{
};

// Function Title.Title_C.OnControllerTrackingChanged
struct UTitle_C_OnControllerTrackingChanged_Params
{
};

// Function Title.Title_C.PreConstruct
struct UTitle_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Title.Title_C.FadeStartTrigger
struct UTitle_C_FadeStartTrigger_Params
{
};

// Function Title.Title_C.PlayStartTrigger
struct UTitle_C_PlayStartTrigger_Params
{
};

// Function Title.Title_C.ExecuteUbergraph_Title
struct UTitle_C_ExecuteUbergraph_Title_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
