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

// Function MainMenuPlayer.MainMenuPlayer_C.UserConstructionScript
struct AMainMenuPlayer_C_UserConstructionScript_Params
{
};

// Function MainMenuPlayer.MainMenuPlayer_C.ReceiveBeginPlay
struct AMainMenuPlayer_C_ReceiveBeginPlay_Params
{
};

// Function MainMenuPlayer.MainMenuPlayer_C.ReceiveTick
struct AMainMenuPlayer_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenuPlayer.MainMenuPlayer_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AMainMenuPlayer_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function MainMenuPlayer.MainMenuPlayer_C.Deactivate
struct AMainMenuPlayer_C_Deactivate_Params
{
};

// Function MainMenuPlayer.MainMenuPlayer_C.Activate
struct AMainMenuPlayer_C_Activate_Params
{
};

// Function MainMenuPlayer.MainMenuPlayer_C.Teleporting to Prize Counter
struct AMainMenuPlayer_C_Teleporting_to_Prize_Counter_Params
{
	class AMasterButton_C*                             Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenuPlayer.MainMenuPlayer_C.Teleporting to Main Hub
struct AMainMenuPlayer_C_Teleporting_to_Main_Hub_Params
{
	class AMasterButton_C*                             Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenuPlayer.MainMenuPlayer_C.Camera Fade
struct AMainMenuPlayer_C_Camera_Fade_Params
{
};

// Function MainMenuPlayer.MainMenuPlayer_C.OnFinished_Event_1
struct AMainMenuPlayer_C_OnFinished_Event_1_Params
{
};

// Function MainMenuPlayer.MainMenuPlayer_C.ExecuteUbergraph_MainMenuPlayer
struct AMainMenuPlayer_C_ExecuteUbergraph_MainMenuPlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
