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

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.AttemptGrab
struct ADLC_Office01_RebootLever_C_AttemptGrab_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canGrab;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EGrabSnapType                                      SnapType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               snapLocation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               snapRotation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AttachmentOffsetLocation;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AttachmentOffsetRotation;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.AttemptRelease
struct ADLC_Office01_RebootLever_C_AttemptRelease_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ResetLeverControls
struct ADLC_Office01_RebootLever_C_ResetLeverControls_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.UserConstructionScript
struct ADLC_Office01_RebootLever_C_UserConstructionScript_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.Timeline_0__FinishedFunc
struct ADLC_Office01_RebootLever_C_Timeline_0__FinishedFunc_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.Timeline_0__UpdateFunc
struct ADLC_Office01_RebootLever_C_Timeline_0__UpdateFunc_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.Timeline_1__FinishedFunc
struct ADLC_Office01_RebootLever_C_Timeline_1__FinishedFunc_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.Timeline_1__UpdateFunc
struct ADLC_Office01_RebootLever_C_Timeline_1__UpdateFunc_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.LeverHandlerNonVR__FinishedFunc
struct ADLC_Office01_RebootLever_C_LeverHandlerNonVR__FinishedFunc_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.LeverHandlerNonVR__UpdateFunc
struct ADLC_Office01_RebootLever_C_LeverHandlerNonVR__UpdateFunc_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ReceiveTick
struct ADLC_Office01_RebootLever_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRReleased
struct ADLC_Office01_RebootLever_C_OnVRReleased_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReleaseVelocity;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRGrabbed
struct ADLC_Office01_RebootLever_C_OnVRGrabbed_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ResetDoOnceNodes
struct ADLC_Office01_RebootLever_C_ResetDoOnceNodes_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRHoverEnd
struct ADLC_Office01_RebootLever_C_OnVRHoverEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRHoverBegin
struct ADLC_Office01_RebootLever_C_OnVRHoverBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.RebootPowerEvent
struct ADLC_Office01_RebootLever_C_RebootPowerEvent_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.TriggerPowerOutageEvent
struct ADLC_Office01_RebootLever_C_TriggerPowerOutageEvent_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ReceiveBeginPlay
struct ADLC_Office01_RebootLever_C_ReceiveBeginPlay_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.BndEvt__AttachPoint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ADLC_Office01_RebootLever_C_BndEvt__AttachPoint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.Debug_EventInput
struct ADLC_Office01_RebootLever_C_Debug_EventInput_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ResetLeverInteraction
struct ADLC_Office01_RebootLever_C_ResetLeverInteraction_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.PowerOutage
struct ADLC_Office01_RebootLever_C_PowerOutage_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.PowerSequenceStarted
struct ADLC_Office01_RebootLever_C_PowerSequenceStarted_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.EnableBlinkingLights
struct ADLC_Office01_RebootLever_C_EnableBlinkingLights_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.DisableBlinkingLights
struct ADLC_Office01_RebootLever_C_DisableBlinkingLights_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.DisableLeverLightNotify
struct ADLC_Office01_RebootLever_C_DisableLeverLightNotify_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRHoverComponentEnd
struct ADLC_Office01_RebootLever_C_OnVRHoverComponentEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRHoverComponentBegin
struct ADLC_Office01_RebootLever_C_OnVRHoverComponentBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnNonVRLineTraceInteract
struct ADLC_Office01_RebootLever_C_OnNonVRLineTraceInteract_Params
{
	class ASaul_MotionControllerPawn_C*                MotionControllerPawn;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Hit_Actor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.FireRebootProcess
struct ADLC_Office01_RebootLever_C_FireRebootProcess_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.RebootProcessFinishing
struct ADLC_Office01_RebootLever_C_RebootProcessFinishing_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.NonVR_GamepadInteraction
struct ADLC_Office01_RebootLever_C_NonVR_GamepadInteraction_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.LowerLever
struct ADLC_Office01_RebootLever_C_LowerLever_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.RaiseLever
struct ADLC_Office01_RebootLever_C_RaiseLever_Params
{
};

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ExecuteUbergraph_DLC_Office01_RebootLever
struct ADLC_Office01_RebootLever_C_ExecuteUbergraph_DLC_Office01_RebootLever_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
