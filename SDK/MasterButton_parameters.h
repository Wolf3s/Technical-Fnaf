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

// Function MasterButton.MasterButton_C.GetHoverCursorState
struct AMasterButton_C_GetHoverCursorState_Params
{
	TEnumAsByte<ECursorState>                          CursorState;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MasterButton.MasterButton_C.UserConstructionScript
struct AMasterButton_C_UserConstructionScript_Params
{
};

// Function MasterButton.MasterButton_C.Press__FinishedFunc
struct AMasterButton_C_Press__FinishedFunc_Params
{
};

// Function MasterButton.MasterButton_C.Press__UpdateFunc
struct AMasterButton_C_Press__UpdateFunc_Params
{
};

// Function MasterButton.MasterButton_C.Timeline_1__FinishedFunc
struct AMasterButton_C_Timeline_1__FinishedFunc_Params
{
};

// Function MasterButton.MasterButton_C.Timeline_1__UpdateFunc
struct AMasterButton_C_Timeline_1__UpdateFunc_Params
{
};

// Function MasterButton.MasterButton_C.OnVRHoverBegin
struct AMasterButton_C_OnVRHoverBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterButton.MasterButton_C.OnVRHoverComponentBegin
struct AMasterButton_C_OnVRHoverComponentBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterButton.MasterButton_C.OnVRHoverComponentEnd
struct AMasterButton_C_OnVRHoverComponentEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterButton.MasterButton_C.OnVRHoverEnd
struct AMasterButton_C_OnVRHoverEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterButton.MasterButton_C.ReceiveBeginPlay
struct AMasterButton_C_ReceiveBeginPlay_Params
{
};

// Function MasterButton.MasterButton_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AMasterButton_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function MasterButton.MasterButton_C.ButtonTriggered
struct AMasterButton_C_ButtonTriggered_Params
{
};

// Function MasterButton.MasterButton_C.ReceiveTick
struct AMasterButton_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterButton.MasterButton_C.OnNonVRLineTraceInteract
struct AMasterButton_C_OnNonVRLineTraceInteract_Params
{
	class ASaul_MotionControllerPawn_C*                MotionControllerPawn;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Hit_Actor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterButton.MasterButton_C.TryAgainBypass
struct AMasterButton_C_TryAgainBypass_Params
{
};

// Function MasterButton.MasterButton_C.ButtonPress
struct AMasterButton_C_ButtonPress_Params
{
};

// Function MasterButton.MasterButton_C.ExecuteUbergraph_MasterButton
struct AMasterButton_C_ExecuteUbergraph_MasterButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterButton.MasterButton_C.OnButtonPressed__DelegateSignature
struct AMasterButton_C_OnButtonPressed__DelegateSignature_Params
{
	class AMasterButton_C*                             Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
