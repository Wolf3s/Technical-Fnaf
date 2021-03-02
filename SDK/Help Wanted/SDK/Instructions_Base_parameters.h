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

// Function Instructions_Base.Instructions_Base_C.PreConstruct
struct UInstructions_Base_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Instructions_Base.Instructions_Base_C.TriggerPullWidget
struct UInstructions_Base_C_TriggerPullWidget_Params
{
};

// Function Instructions_Base.Instructions_Base_C.On Controller Tracking Changed
struct UInstructions_Base_C_On_Controller_Tracking_Changed_Params
{
};

// Function Instructions_Base.Instructions_Base_C.Setup With Skip
struct UInstructions_Base_C_Setup_With_Skip_Params
{
	TArray<int>                                        FramesToSkip;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Instructions_Base.Instructions_Base_C.TriggerPullWidgetReverse
struct UInstructions_Base_C_TriggerPullWidgetReverse_Params
{
};

// Function Instructions_Base.Instructions_Base_C.Setup Inputs
struct UInstructions_Base_C_Setup_Inputs_Params
{
};

// Function Instructions_Base.Instructions_Base_C.Setup Without Skip
struct UInstructions_Base_C_Setup_Without_Skip_Params
{
};

// Function Instructions_Base.Instructions_Base_C.Update Displays
struct UInstructions_Base_C_Update_Displays_Params
{
};

// Function Instructions_Base.Instructions_Base_C.ExecuteUbergraph_Instructions_Base
struct UInstructions_Base_C_ExecuteUbergraph_Instructions_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
