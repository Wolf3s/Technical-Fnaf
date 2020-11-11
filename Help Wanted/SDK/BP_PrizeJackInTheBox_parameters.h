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

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.AttemptGrab
struct ABP_PrizeJackInTheBox_C_AttemptGrab_Params
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

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.AttemptRelease
struct ABP_PrizeJackInTheBox_C_AttemptRelease_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.UserConstructionScript
struct ABP_PrizeJackInTheBox_C_UserConstructionScript_Params
{
};

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.BOB__FinishedFunc
struct ABP_PrizeJackInTheBox_C_BOB__FinishedFunc_Params
{
};

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.BOB__UpdateFunc
struct ABP_PrizeJackInTheBox_C_BOB__UpdateFunc_Params
{
};

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.MoveUp__FinishedFunc
struct ABP_PrizeJackInTheBox_C_MoveUp__FinishedFunc_Params
{
};

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.MoveUp__UpdateFunc
struct ABP_PrizeJackInTheBox_C_MoveUp__UpdateFunc_Params
{
};

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRHoverComponentBegin
struct ABP_PrizeJackInTheBox_C_OnVRHoverComponentBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRHoverComponentEnd
struct ABP_PrizeJackInTheBox_C_OnVRHoverComponentEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.ReceiveTick
struct ABP_PrizeJackInTheBox_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.ReceiveBeginPlay
struct ABP_PrizeJackInTheBox_C_ReceiveBeginPlay_Params
{
};

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.BndEvt__Box1_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_PrizeJackInTheBox_C_BndEvt__Box1_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRGrabbed
struct ABP_PrizeJackInTheBox_C_OnVRGrabbed_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRReleased
struct ABP_PrizeJackInTheBox_C_OnVRReleased_Params
{
	class ASWGVRCharacter*                             Grabber;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReleaseVelocity;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnPrizeGrabbed
struct ABP_PrizeJackInTheBox_C_OnPrizeGrabbed_Params
{
	class APrize_Parent_C*                             Prize;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.StopBob
struct ABP_PrizeJackInTheBox_C_StopBob_Params
{
};

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnPrizeReleased
struct ABP_PrizeJackInTheBox_C_OnPrizeReleased_Params
{
	class APrize_Parent_C*                             Prize;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.DestroyPrize
struct ABP_PrizeJackInTheBox_C_DestroyPrize_Params
{
};

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.StartBob
struct ABP_PrizeJackInTheBox_C_StartBob_Params
{
};

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRHoverBegin
struct ABP_PrizeJackInTheBox_C_OnVRHoverBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRHoverEnd
struct ABP_PrizeJackInTheBox_C_OnVRHoverEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.NonVR Bypass
struct ABP_PrizeJackInTheBox_C_NonVR_Bypass_Params
{
};

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.ExecuteUbergraph_BP_PrizeJackInTheBox
struct ABP_PrizeJackInTheBox_C_ExecuteUbergraph_BP_PrizeJackInTheBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
