
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

// Function Repair_Freddy.Repair_Freddy_C.CheckNightmareMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ARepair_Freddy_C::CheckNightmareMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Repair_Freddy.Repair_Freddy_C.CheckNightmareMode");

	ARepair_Freddy_C_CheckNightmareMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Repair_Freddy.Repair_Freddy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARepair_Freddy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Repair_Freddy.Repair_Freddy_C.UserConstructionScript");

	ARepair_Freddy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Repair_Freddy.Repair_Freddy_C.BndEvt__RepairFreddy_v01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ARepair_Freddy_C::BndEvt__RepairFreddy_v01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Repair_Freddy.Repair_Freddy_C.BndEvt__RepairFreddy_v01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ARepair_Freddy_C_BndEvt__RepairFreddy_v01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Repair_Freddy.Repair_Freddy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARepair_Freddy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Repair_Freddy.Repair_Freddy_C.ReceiveBeginPlay");

	ARepair_Freddy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Repair_Freddy.Repair_Freddy_C.OpenChest
// (BlueprintCallable, BlueprintEvent)

void ARepair_Freddy_C::OpenChest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Repair_Freddy.Repair_Freddy_C.OpenChest");

	ARepair_Freddy_C_OpenChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Repair_Freddy.Repair_Freddy_C.CloseChest
// (BlueprintCallable, BlueprintEvent)

void ARepair_Freddy_C::CloseChest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Repair_Freddy.Repair_Freddy_C.CloseChest");

	ARepair_Freddy_C_CloseChest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Repair_Freddy.Repair_Freddy_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARepair_Freddy_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Repair_Freddy.Repair_Freddy_C.ReceiveTick");

	ARepair_Freddy_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Repair_Freddy.Repair_Freddy_C.ExecuteUbergraph_Repair_Freddy
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARepair_Freddy_C::ExecuteUbergraph_Repair_Freddy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Repair_Freddy.Repair_Freddy_C.ExecuteUbergraph_Repair_Freddy");

	ARepair_Freddy_C_ExecuteUbergraph_Repair_Freddy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Repair_Freddy.Repair_Freddy_C.Kill Player__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ARepair_Freddy_C::Kill_Player__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Repair_Freddy.Repair_Freddy_C.Kill Player__DelegateSignature");

	ARepair_Freddy_C_Kill_Player__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
