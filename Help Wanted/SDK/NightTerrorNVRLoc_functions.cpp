
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

// Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.GetHoverCursorState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECursorState>      CursorState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANightTerrorNVRLoc_C::GetHoverCursorState(TEnumAsByte<ECursorState>* CursorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.GetHoverCursorState");

	ANightTerrorNVRLoc_C_GetHoverCursorState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CursorState != nullptr)
		*CursorState = params.CursorState;
}


// Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANightTerrorNVRLoc_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.UserConstructionScript");

	ANightTerrorNVRLoc_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANightTerrorNVRLoc_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.ReceiveBeginPlay");

	ANightTerrorNVRLoc_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANightTerrorNVRLoc_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.ReceiveTick");

	ANightTerrorNVRLoc_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.ZoomInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASaul_MotionControllerPawn_C** MotionControllerPawn           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        Hit_Component                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ANightTerrorNVRLoc_C::ZoomInteract(class ASaul_MotionControllerPawn_C** MotionControllerPawn, class AActor** HitActor, class USceneComponent** Hit_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.ZoomInteract");

	ANightTerrorNVRLoc_C_ZoomInteract_Params params;
	params.MotionControllerPawn = MotionControllerPawn;
	params.HitActor = HitActor;
	params.Hit_Component = Hit_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.ZoomEndInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASaul_MotionControllerPawn_C* MotionControllerPawn           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ANightTerrorNVRLoc_C::ZoomEndInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class AActor* HitActor, class UActorComponent* HitComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.ZoomEndInteract");

	ANightTerrorNVRLoc_C_ZoomEndInteract_Params params;
	params.MotionControllerPawn = MotionControllerPawn;
	params.HitActor = HitActor;
	params.HitComponent = HitComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.OnVRHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter**        Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType*                   Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANightTerrorNVRLoc_C::OnVRHoverBegin(class ASWGVRCharacter** Sender, EVRHandType* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.OnVRHoverBegin");

	ANightTerrorNVRLoc_C_OnVRHoverBegin_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.OnVRHoverEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter**        Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType*                   Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANightTerrorNVRLoc_C::OnVRHoverEnd(class ASWGVRCharacter** Sender, EVRHandType* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.OnVRHoverEnd");

	ANightTerrorNVRLoc_C_OnVRHoverEnd_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.ExecuteUbergraph_NightTerrorNVRLoc
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANightTerrorNVRLoc_C::ExecuteUbergraph_NightTerrorNVRLoc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTerrorNVRLoc.NightTerrorNVRLoc_C.ExecuteUbergraph_NightTerrorNVRLoc");

	ANightTerrorNVRLoc_C_ExecuteUbergraph_NightTerrorNVRLoc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
