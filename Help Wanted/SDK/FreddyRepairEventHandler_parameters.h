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

// Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.UserConstructionScript
struct AFreddyRepairEventHandler_C_UserConstructionScript_Params
{
};

// Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.OverlapWithFloor
struct AFreddyRepairEventHandler_C_OverlapWithFloor_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.StageCheck
struct AFreddyRepairEventHandler_C_StageCheck_Params
{
	int                                                StageCompleted;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.Win
struct AFreddyRepairEventHandler_C_Win_Params
{
};

// Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.Fail
struct AFreddyRepairEventHandler_C_Fail_Params
{
};

// Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.ReceiveBeginPlay
struct AFreddyRepairEventHandler_C_ReceiveBeginPlay_Params
{
};

// Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.ExecuteUbergraph_FreddyRepairEventHandler
struct AFreddyRepairEventHandler_C_ExecuteUbergraph_FreddyRepairEventHandler_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
