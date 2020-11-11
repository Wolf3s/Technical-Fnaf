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

// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.UserConstructionScript
struct AMonitorButton_MaintanceButton_C_UserConstructionScript_Params
{
};

// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.BndEvt__BoxCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AMonitorButton_MaintanceButton_C_BndEvt__BoxCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.ResetBtnPosition
struct AMonitorButton_MaintanceButton_C_ResetBtnPosition_Params
{
};

// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.AdjustBtnPosition
struct AMonitorButton_MaintanceButton_C_AdjustBtnPosition_Params
{
};

// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.ReceiveTick
struct AMonitorButton_MaintanceButton_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.BndEvt__BoxCollider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct AMonitorButton_MaintanceButton_C_BndEvt__BoxCollider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.ReceiveBeginPlay
struct AMonitorButton_MaintanceButton_C_ReceiveBeginPlay_Params
{
};

// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.NonVRReleaseChild
struct AMonitorButton_MaintanceButton_C_NonVRReleaseChild_Params
{
};

// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.OnNonVRLineTraceInteract
struct AMonitorButton_MaintanceButton_C_OnNonVRLineTraceInteract_Params
{
	class ASaul_MotionControllerPawn_C**               MotionControllerPawn;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Hit_Actor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.NonVR_GamepadInteraction
struct AMonitorButton_MaintanceButton_C_NonVR_GamepadInteraction_Params
{
};

// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.NONVR_MaintainceButton_Reset
struct AMonitorButton_MaintanceButton_C_NONVR_MaintainceButton_Reset_Params
{
};

// Function MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C.ExecuteUbergraph_MonitorButton_MaintanceButton
struct AMonitorButton_MaintanceButton_C_ExecuteUbergraph_MonitorButton_MaintanceButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
