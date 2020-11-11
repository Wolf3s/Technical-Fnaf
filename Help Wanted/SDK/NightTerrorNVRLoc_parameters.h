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

// Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.GetHoverCursorState
struct ANightTerrorNVRLoc_C_GetHoverCursorState_Params
{
	TEnumAsByte<ECursorState>                          CursorState;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.UserConstructionScript
struct ANightTerrorNVRLoc_C_UserConstructionScript_Params
{
};

// Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.ReceiveBeginPlay
struct ANightTerrorNVRLoc_C_ReceiveBeginPlay_Params
{
};

// Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.ReceiveTick
struct ANightTerrorNVRLoc_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.ZoomInteract
struct ANightTerrorNVRLoc_C_ZoomInteract_Params
{
	class ASaul_MotionControllerPawn_C**               MotionControllerPawn;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            Hit_Component;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.ZoomEndInteract
struct ANightTerrorNVRLoc_C_ZoomEndInteract_Params
{
	class ASaul_MotionControllerPawn_C*                MotionControllerPawn;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.OnVRHoverBegin
struct ANightTerrorNVRLoc_C_OnVRHoverBegin_Params
{
	class ASWGVRCharacter**                            Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType*                                       Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.OnVRHoverEnd
struct ANightTerrorNVRLoc_C_OnVRHoverEnd_Params
{
	class ASWGVRCharacter**                            Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType*                                       Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.ExecuteUbergraph_NightTerrorNVRLoc
struct ANightTerrorNVRLoc_C_ExecuteUbergraph_NightTerrorNVRLoc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
