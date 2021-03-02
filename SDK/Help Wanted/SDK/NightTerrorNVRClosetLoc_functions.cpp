
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

// Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.GetHoverCursorState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECursorState>      CursorState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANightTerrorNVRClosetLoc_C::GetHoverCursorState(TEnumAsByte<ECursorState>* CursorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.GetHoverCursorState");

	ANightTerrorNVRClosetLoc_C_GetHoverCursorState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CursorState != nullptr)
		*CursorState = params.CursorState;
}


// Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANightTerrorNVRClosetLoc_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.UserConstructionScript");

	ANightTerrorNVRClosetLoc_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANightTerrorNVRClosetLoc_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.ReceiveTick");

	ANightTerrorNVRClosetLoc_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.ZoomInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASaul_MotionControllerPawn_C** MotionControllerPawn           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        Hit_Component                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ANightTerrorNVRClosetLoc_C::ZoomInteract(class ASaul_MotionControllerPawn_C** MotionControllerPawn, class AActor** HitActor, class USceneComponent** Hit_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.ZoomInteract");

	ANightTerrorNVRClosetLoc_C_ZoomInteract_Params params;
	params.MotionControllerPawn = MotionControllerPawn;
	params.HitActor = HitActor;
	params.Hit_Component = Hit_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANightTerrorNVRClosetLoc_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.ReceiveBeginPlay");

	ANightTerrorNVRClosetLoc_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.ZoomEndInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASaul_MotionControllerPawn_C* MotionControllerPawn           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ANightTerrorNVRClosetLoc_C::ZoomEndInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class AActor* HitActor, class UActorComponent* HitComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.ZoomEndInteract");

	ANightTerrorNVRClosetLoc_C_ZoomEndInteract_Params params;
	params.MotionControllerPawn = MotionControllerPawn;
	params.HitActor = HitActor;
	params.HitComponent = HitComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.OnVRHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter**        Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType*                   Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANightTerrorNVRClosetLoc_C::OnVRHoverBegin(class ASWGVRCharacter** Sender, EVRHandType* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.OnVRHoverBegin");

	ANightTerrorNVRClosetLoc_C_OnVRHoverBegin_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.OnVRHoverEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter**        Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType*                   Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANightTerrorNVRClosetLoc_C::OnVRHoverEnd(class ASWGVRCharacter** Sender, EVRHandType* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.OnVRHoverEnd");

	ANightTerrorNVRClosetLoc_C_OnVRHoverEnd_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.ExecuteUbergraph_NightTerrorNVRClosetLoc
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANightTerrorNVRClosetLoc_C::ExecuteUbergraph_NightTerrorNVRClosetLoc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTerrorNVRClosetLoc.NightTerrorNVRClosetLoc_C.ExecuteUbergraph_NightTerrorNVRClosetLoc");

	ANightTerrorNVRClosetLoc_C_ExecuteUbergraph_NightTerrorNVRClosetLoc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
