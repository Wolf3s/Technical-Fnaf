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

// Function StarSpinner.StarSpinner_C.UserConstructionScript
struct AStarSpinner_C_UserConstructionScript_Params
{
};

// Function StarSpinner.StarSpinner_C.ReceiveBeginPlay
struct AStarSpinner_C_ReceiveBeginPlay_Params
{
};

// Function StarSpinner.StarSpinner_C.ReceiveTick
struct AStarSpinner_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StarSpinner.StarSpinner_C.ExecuteUbergraph_StarSpinner
struct AStarSpinner_C_ExecuteUbergraph_StarSpinner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
