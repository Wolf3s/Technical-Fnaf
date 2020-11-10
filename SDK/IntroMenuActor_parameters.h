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

// Function IntroMenuActor.IntroMenuActor_C.ResetCameraOrentation
struct AIntroMenuActor_C_ResetCameraOrentation_Params
{
};

// Function IntroMenuActor.IntroMenuActor_C.UserConstructionScript
struct AIntroMenuActor_C_UserConstructionScript_Params
{
};

// Function IntroMenuActor.IntroMenuActor_C.InpActEvt_MenuConfirm(NonVR)_K2Node_InputActionEvent_5
struct AIntroMenuActor_C_InpActEvt_MenuConfirm_NonVR__K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IntroMenuActor.IntroMenuActor_C.InpActEvt_MenuDown(NonVR)_K2Node_InputActionEvent_4
struct AIntroMenuActor_C_InpActEvt_MenuDown_NonVR__K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IntroMenuActor.IntroMenuActor_C.InpActEvt_MenuUp(NonVR)_K2Node_InputActionEvent_3
struct AIntroMenuActor_C_InpActEvt_MenuUp_NonVR__K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IntroMenuActor.IntroMenuActor_C.InpActEvt_MenuLeft(NonVR)_K2Node_InputActionEvent_2
struct AIntroMenuActor_C_InpActEvt_MenuLeft_NonVR__K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IntroMenuActor.IntroMenuActor_C.InpActEvt_MenuRight(NonVR)_K2Node_InputActionEvent_1
struct AIntroMenuActor_C_InpActEvt_MenuRight_NonVR__K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IntroMenuActor.IntroMenuActor_C.EnterPass
struct AIntroMenuActor_C_EnterPass_Params
{
};

// Function IntroMenuActor.IntroMenuActor_C.UpPass
struct AIntroMenuActor_C_UpPass_Params
{
};

// Function IntroMenuActor.IntroMenuActor_C.DownPas
struct AIntroMenuActor_C_DownPas_Params
{
};

// Function IntroMenuActor.IntroMenuActor_C.LeftPass
struct AIntroMenuActor_C_LeftPass_Params
{
};

// Function IntroMenuActor.IntroMenuActor_C.ReceiveBeginPlay
struct AIntroMenuActor_C_ReceiveBeginPlay_Params
{
};

// Function IntroMenuActor.IntroMenuActor_C.ActivateTMover
struct AIntroMenuActor_C_ActivateTMover_Params
{
};

// Function IntroMenuActor.IntroMenuActor_C.ReceiveTick
struct AIntroMenuActor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IntroMenuActor.IntroMenuActor_C.ResetVameraPositionPAss
struct AIntroMenuActor_C_ResetVameraPositionPAss_Params
{
};

// Function IntroMenuActor.IntroMenuActor_C.BndEvt__ClickCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AIntroMenuActor_C_BndEvt__ClickCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function IntroMenuActor.IntroMenuActor_C.BndEvt__ClickCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct AIntroMenuActor_C_BndEvt__ClickCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IntroMenuActor.IntroMenuActor_C.RightPass
struct AIntroMenuActor_C_RightPass_Params
{
};

// Function IntroMenuActor.IntroMenuActor_C.ExecuteUbergraph_IntroMenuActor
struct AIntroMenuActor_C_ExecuteUbergraph_IntroMenuActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
