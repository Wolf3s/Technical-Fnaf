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

// Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.GetHoverCursorState
struct AOffice01_NonVrHoverChecks_C_GetHoverCursorState_Params
{
	TEnumAsByte<ECursorState>                          CursorState;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.UserConstructionScript
struct AOffice01_NonVrHoverChecks_C_UserConstructionScript_Params
{
};

// Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.OnVRHoverComponentBegin
struct AOffice01_NonVrHoverChecks_C_OnVRHoverComponentBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.OnVRHoverComponentEnd
struct AOffice01_NonVrHoverChecks_C_OnVRHoverComponentEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.OnVRHoverEnd
struct AOffice01_NonVrHoverChecks_C_OnVRHoverEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.ReceiveBeginPlay
struct AOffice01_NonVrHoverChecks_C_ReceiveBeginPlay_Params
{
};

// Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.OnVRHoverBegin
struct AOffice01_NonVrHoverChecks_C_OnVRHoverBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.CheckCollision
struct AOffice01_NonVrHoverChecks_C_CheckCollision_Params
{
};

// Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.ExecuteUbergraph_Office01_NonVrHoverChecks
struct AOffice01_NonVrHoverChecks_C_ExecuteUbergraph_Office01_NonVrHoverChecks_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
