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

// Function ContinueButton.ContinueButton_C.UserConstructionScript
struct AContinueButton_C_UserConstructionScript_Params
{
};

// Function ContinueButton.ContinueButton_C.EnableButton
struct AContinueButton_C_EnableButton_Params
{
	bool                                               enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContinueButton.ContinueButton_C.ButtonTriggered
struct AContinueButton_C_ButtonTriggered_Params
{
};

// Function ContinueButton.ContinueButton_C.ReceiveBeginPlay
struct AContinueButton_C_ReceiveBeginPlay_Params
{
};

// Function ContinueButton.ContinueButton_C.ExecuteUbergraph_ContinueButton
struct AContinueButton_C_ExecuteUbergraph_ContinueButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
