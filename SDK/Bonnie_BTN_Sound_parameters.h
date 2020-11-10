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

// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.GetHoverCursorState
struct ABonnie_BTN_Sound_C_GetHoverCursorState_Params
{
	TEnumAsByte<ECursorState>                          CursorState;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Create_Material_Instance
struct ABonnie_BTN_Sound_C_Create_Material_Instance_Params
{
	class UMaterialInstance*                           Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Move BTN
struct ABonnie_BTN_Sound_C_Move_BTN_Params
{
	float                                              Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.UserConstructionScript
struct ABonnie_BTN_Sound_C_UserConstructionScript_Params
{
};

// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Press BTN Down__FinishedFunc
struct ABonnie_BTN_Sound_C_Press_BTN_Down__FinishedFunc_Params
{
};

// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Press BTN Down__UpdateFunc
struct ABonnie_BTN_Sound_C_Press_BTN_Down__UpdateFunc_Params
{
};

// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Material Instance Param__FinishedFunc
struct ABonnie_BTN_Sound_C_Material_Instance_Param__FinishedFunc_Params
{
};

// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Material Instance Param__UpdateFunc
struct ABonnie_BTN_Sound_C_Material_Instance_Param__UpdateFunc_Params
{
};

// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.OnVRHoverEnd
struct ABonnie_BTN_Sound_C_OnVRHoverEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.BndEvt__BTN_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABonnie_BTN_Sound_C_BndEvt__BTN_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.OnVRHoverComponentEnd
struct ABonnie_BTN_Sound_C_OnVRHoverComponentEnd_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.OnVRHoverComponentBegin
struct ABonnie_BTN_Sound_C_OnVRHoverComponentBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.Reset_BTN
struct ABonnie_BTN_Sound_C_Reset_BTN_Params
{
};

// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.OnVRHoverBegin
struct ABonnie_BTN_Sound_C_OnVRHoverBegin_Params
{
	class ASWGVRCharacter*                             Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType                                        Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.ReceiveBeginPlay
struct ABonnie_BTN_Sound_C_ReceiveBeginPlay_Params
{
};

// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.ButtonBypass
struct ABonnie_BTN_Sound_C_ButtonBypass_Params
{
};

// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.NonVRClickButton
struct ABonnie_BTN_Sound_C_NonVRClickButton_Params
{
};

// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.OnNonVRLineTraceInteract
struct ABonnie_BTN_Sound_C_OnNonVRLineTraceInteract_Params
{
	class ASaul_MotionControllerPawn_C*                MotionControllerPawn;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Hit_Actor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bonnie_BTN_Sound.Bonnie_BTN_Sound_C.ExecuteUbergraph_Bonnie_BTN_Sound
struct ABonnie_BTN_Sound_C_ExecuteUbergraph_Bonnie_BTN_Sound_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
