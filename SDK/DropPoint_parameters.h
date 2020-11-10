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

// Function DropPoint.DropPoint_C.SetDropPointActive
struct ADropPoint_C_SetDropPointActive_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DropPoint.DropPoint_C.UserConstructionScript
struct ADropPoint_C_UserConstructionScript_Params
{
};

// Function DropPoint.DropPoint_C.OnVRHoverComponentBegin
struct ADropPoint_C_OnVRHoverComponentBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DropPoint.DropPoint_C.OnVRHoverComponentEnd
struct ADropPoint_C_OnVRHoverComponentEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DropPoint.DropPoint_C.OnVRHoverBegin
struct ADropPoint_C_OnVRHoverBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DropPoint.DropPoint_C.OnVRHoverEnd
struct ADropPoint_C_OnVRHoverEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DropPoint.DropPoint_C.OnDropPointBeginHover
struct ADropPoint_C_OnDropPointBeginHover_Params
{
};

// Function DropPoint.DropPoint_C.OnDropPointEndHover
struct ADropPoint_C_OnDropPointEndHover_Params
{
};

// Function DropPoint.DropPoint_C.ReceiveBeginPlay
struct ADropPoint_C_ReceiveBeginPlay_Params
{
};

// Function DropPoint.DropPoint_C.OnPlayerGrabbedActor
struct ADropPoint_C_OnPlayerGrabbedActor_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DroppedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DropPoint.DropPoint_C.BindGrabbingEvents
struct ADropPoint_C_BindGrabbingEvents_Params
{
};

// Function DropPoint.DropPoint_C.UnbindGrabbingEvents
struct ADropPoint_C_UnbindGrabbingEvents_Params
{
};

// Function DropPoint.DropPoint_C.OnPlayerReleasedActor
struct ADropPoint_C_OnPlayerReleasedActor_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DroppedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DropPoint.DropPoint_C.ExecuteUbergraph_DropPoint
struct ADropPoint_C_ExecuteUbergraph_DropPoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
