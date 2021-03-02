
#include "../SDK.h"

// Name: Freddys, Version: 4.2.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFreddyRepairEventHandler_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.UserConstructionScript");

	AFreddyRepairEventHandler_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.OverlapWithFloor
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AFreddyRepairEventHandler_C::OverlapWithFloor(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.OverlapWithFloor");

	AFreddyRepairEventHandler_C_OverlapWithFloor_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.StageCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StageCompleted                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFreddyRepairEventHandler_C::StageCheck(int StageCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.StageCheck");

	AFreddyRepairEventHandler_C_StageCheck_Params params;
	params.StageCompleted = StageCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.Win
// (BlueprintCallable, BlueprintEvent)

void AFreddyRepairEventHandler_C::Win()
{
	static auto fn = UObject::FindObject<UFunction>("Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.Win");

	AFreddyRepairEventHandler_C_Win_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.Fail
// (BlueprintCallable, BlueprintEvent)

void AFreddyRepairEventHandler_C::Fail()
{
	static auto fn = UObject::FindObject<UFunction>("Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.Fail");

	AFreddyRepairEventHandler_C_Fail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFreddyRepairEventHandler_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.ReceiveBeginPlay");

	AFreddyRepairEventHandler_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.ExecuteUbergraph_FreddyRepairEventHandler
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFreddyRepairEventHandler_C::ExecuteUbergraph_FreddyRepairEventHandler(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FreddyRepairEventHandler.FreddyRepairEventHandler_C.ExecuteUbergraph_FreddyRepairEventHandler");

	AFreddyRepairEventHandler_C_ExecuteUbergraph_FreddyRepairEventHandler_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
