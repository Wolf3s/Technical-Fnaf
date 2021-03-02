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

// Function Repair_Freddy.Repair_Freddy_C.CheckNightmareMode
struct ARepair_Freddy_C_CheckNightmareMode_Params
{
};

// Function Repair_Freddy.Repair_Freddy_C.UserConstructionScript
struct ARepair_Freddy_C_UserConstructionScript_Params
{
};

// Function Repair_Freddy.Repair_Freddy_C.BndEvt__RepairFreddy_v01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ARepair_Freddy_C_BndEvt__RepairFreddy_v01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Repair_Freddy.Repair_Freddy_C.ReceiveBeginPlay
struct ARepair_Freddy_C_ReceiveBeginPlay_Params
{
};

// Function Repair_Freddy.Repair_Freddy_C.OpenChest
struct ARepair_Freddy_C_OpenChest_Params
{
};

// Function Repair_Freddy.Repair_Freddy_C.CloseChest
struct ARepair_Freddy_C_CloseChest_Params
{
};

// Function Repair_Freddy.Repair_Freddy_C.ReceiveTick
struct ARepair_Freddy_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Repair_Freddy.Repair_Freddy_C.ExecuteUbergraph_Repair_Freddy
struct ARepair_Freddy_C_ExecuteUbergraph_Repair_Freddy_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Repair_Freddy.Repair_Freddy_C.Kill Player__DelegateSignature
struct ARepair_Freddy_C_Kill_Player__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
