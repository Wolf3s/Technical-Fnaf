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

// Function Main_Menu_Selector.Main_Menu_Selector_C.GetHoverCursorState
struct AMain_Menu_Selector_C_GetHoverCursorState_Params
{
	TEnumAsByte<ECursorState>                          CursorState;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.GetMainMenuWidget
struct AMain_Menu_Selector_C_GetMainMenuWidget_Params
{
	class UMain_Menu_C*                                Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.Initialize
struct AMain_Menu_Selector_C_Initialize_Params
{
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.UserConstructionScript
struct AMain_Menu_Selector_C_UserConstructionScript_Params
{
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.Timeline_0__FinishedFunc
struct AMain_Menu_Selector_C_Timeline_0__FinishedFunc_Params
{
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.Timeline_0__UpdateFunc
struct AMain_Menu_Selector_C_Timeline_0__UpdateFunc_Params
{
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.InpActEvt_MenuConfirm(NonVR)_K2Node_InputActionEvent_5
struct AMain_Menu_Selector_C_InpActEvt_MenuConfirm_NonVR__K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.InpActEvt_MenuLeft(NonVR)_K2Node_InputActionEvent_4
struct AMain_Menu_Selector_C_InpActEvt_MenuLeft_NonVR__K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.InpActEvt_MenuRight(NonVR)_K2Node_InputActionEvent_3
struct AMain_Menu_Selector_C_InpActEvt_MenuRight_NonVR__K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.InpActEvt_MenuPageLeft(NonVR)_K2Node_InputActionEvent_2
struct AMain_Menu_Selector_C_InpActEvt_MenuPageLeft_NonVR__K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.InpActEvt_MenuPageRight(NonVR)_K2Node_InputActionEvent_1
struct AMain_Menu_Selector_C_InpActEvt_MenuPageRight_NonVR__K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.OnVRHoverComponentBegin
struct AMain_Menu_Selector_C_OnVRHoverComponentBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.OnVRHoverComponentEnd
struct AMain_Menu_Selector_C_OnVRHoverComponentEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.OnNonVRLineTraceInteract
struct AMain_Menu_Selector_C_OnNonVRLineTraceInteract_Params
{
	class ASaul_MotionControllerPawn_C*                MotionControllerPawn;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Hit_Actor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.ReceiveBeginPlay
struct AMain_Menu_Selector_C_ReceiveBeginPlay_Params
{
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.ReceiveTick
struct AMain_Menu_Selector_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__ResetSave_Collider_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
struct AMain_Menu_Selector_C_BndEvt__ResetSave_Collider_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.ResetSave
struct AMain_Menu_Selector_C_ResetSave_Params
{
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__ResetSave_Collider_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature
struct AMain_Menu_Selector_C_BndEvt__ResetSave_Collider_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.EnterPass
struct AMain_Menu_Selector_C_EnterPass_Params
{
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.UpPass
struct AMain_Menu_Selector_C_UpPass_Params
{
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.DownPas
struct AMain_Menu_Selector_C_DownPas_Params
{
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.LeftPass
struct AMain_Menu_Selector_C_LeftPass_Params
{
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.DownPass
struct AMain_Menu_Selector_C_DownPass_Params
{
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AMain_Menu_Selector_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct AMain_Menu_Selector_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__Box1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct AMain_Menu_Selector_C_BndEvt__Box1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__Box1_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct AMain_Menu_Selector_C_BndEvt__Box1_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.ActivateScreenPass
struct AMain_Menu_Selector_C_ActivateScreenPass_Params
{
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__ClickCollision_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature
struct AMain_Menu_Selector_C_BndEvt__ClickCollision_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__ClickCollision_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature
struct AMain_Menu_Selector_C_BndEvt__ClickCollision_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__FingerToPointerColliderTEMP2_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
struct AMain_Menu_Selector_C_BndEvt__FingerToPointerColliderTEMP2_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__FingerToPointerColliderTEMP2_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature
struct AMain_Menu_Selector_C_BndEvt__FingerToPointerColliderTEMP2_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__FingerToPointerColliderTEMP1_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature
struct AMain_Menu_Selector_C_BndEvt__FingerToPointerColliderTEMP1_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__FingerToPointerColliderTEMP1_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature
struct AMain_Menu_Selector_C_BndEvt__FingerToPointerColliderTEMP1_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.SetupHandRef
struct AMain_Menu_Selector_C_SetupHandRef_Params
{
	class ASaul_BP_MotionController_C*                 Refto;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.ZoomInteract
struct AMain_Menu_Selector_C_ZoomInteract_Params
{
	class ASaul_MotionControllerPawn_C*                MotionControllerPawn;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Hit_Component;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.UnbindNonVR
struct AMain_Menu_Selector_C_UnbindNonVR_Params
{
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.MovingToPrizeCounter
struct AMain_Menu_Selector_C_MovingToPrizeCounter_Params
{
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.OnVRHoverBegin
struct AMain_Menu_Selector_C_OnVRHoverBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.OnVRHoverEnd
struct AMain_Menu_Selector_C_OnVRHoverEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Main_Menu_Selector.Main_Menu_Selector_C.ExecuteUbergraph_Main_Menu_Selector
struct AMain_Menu_Selector_C_ExecuteUbergraph_Main_Menu_Selector_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
