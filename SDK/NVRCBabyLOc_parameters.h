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

// Function NVRCBabyLOc.NVRCBabyLoc_C.GetHoverCursorState
struct ANVRCBabyLoc_C_GetHoverCursorState_Params
{
	TEnumAsByte<ECursorState>                          CursorState;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NVRCBabyLOc.NVRCBabyLoc_C.UserConstructionScript
struct ANVRCBabyLoc_C_UserConstructionScript_Params
{
};

// Function NVRCBabyLOc.NVRCBabyLoc_C.ZoomInteract
struct ANVRCBabyLoc_C_ZoomInteract_Params
{
	class ASaul_MotionControllerPawn_C**               MotionControllerPawn;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            Hit_Component;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function NVRCBabyLOc.NVRCBabyLoc_C.ZoomEndInteract
struct ANVRCBabyLoc_C_ZoomEndInteract_Params
{
	class ASaul_MotionControllerPawn_C*                MotionControllerPawn;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function NVRCBabyLOc.NVRCBabyLoc_C.OnVRHoverBegin
struct ANVRCBabyLoc_C_OnVRHoverBegin_Params
{
	class ASWGVRCharacter**                            Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType*                                       Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NVRCBabyLOc.NVRCBabyLoc_C.OnVRHoverEnd
struct ANVRCBabyLoc_C_OnVRHoverEnd_Params
{
	class ASWGVRCharacter**                            Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType*                                       Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NVRCBabyLOc.NVRCBabyLoc_C.ExecuteUbergraph_NVRCBabyLoc
struct ANVRCBabyLoc_C_ExecuteUbergraph_NVRCBabyLoc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
