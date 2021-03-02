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

// Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.GetHoverCursorState
struct ANightTerrorNVRClosetLoc_C_GetHoverCursorState_Params
{
	TEnumAsByte<ECursorState>                          CursorState;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.UserConstructionScript
struct ANightTerrorNVRClosetLoc_C_UserConstructionScript_Params
{
};

// Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.ReceiveTick
struct ANightTerrorNVRClosetLoc_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.ZoomInteract
struct ANightTerrorNVRClosetLoc_C_ZoomInteract_Params
{
	class ASaul_MotionControllerPawn_C**               MotionControllerPawn;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            Hit_Component;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.ReceiveBeginPlay
struct ANightTerrorNVRClosetLoc_C_ReceiveBeginPlay_Params
{
};

// Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.ZoomEndInteract
struct ANightTerrorNVRClosetLoc_C_ZoomEndInteract_Params
{
	class ASaul_MotionControllerPawn_C*                MotionControllerPawn;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.OnVRHoverBegin
struct ANightTerrorNVRClosetLoc_C_OnVRHoverBegin_Params
{
	class ASWGVRCharacter**                            Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType*                                       Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.OnVRHoverEnd
struct ANightTerrorNVRClosetLoc_C_OnVRHoverEnd_Params
{
	class ASWGVRCharacter**                            Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType*                                       Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.ExecuteUbergraph_NightTerrorNVRClosetLoc
struct ANightTerrorNVRClosetLoc_C_ExecuteUbergraph_NightTerrorNVRClosetLoc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
