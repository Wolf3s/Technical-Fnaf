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

// Function Baloons.Baloons_C.PickRandomBaloonColor
struct ABaloons_C_PickRandomBaloonColor_Params
{
	int                                                BaloonID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Baloons.Baloons_C.UserConstructionScript
struct ABaloons_C_UserConstructionScript_Params
{
};

// Function Baloons.Baloons_C.nightmare mode triggered
struct ABaloons_C_nightmare_mode_triggered_Params
{
};

// Function Baloons.Baloons_C.Nightmare Mode Disabled
struct ABaloons_C_Nightmare_Mode_Disabled_Params
{
};

// Function Baloons.Baloons_C.ExecuteUbergraph_Baloons
struct ABaloons_C_ExecuteUbergraph_Baloons_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
