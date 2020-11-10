
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

// Function NVRCBabyLOc.NVRCBabyLoc_C.GetHoverCursorState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECursorState>      CursorState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANVRCBabyLoc_C::GetHoverCursorState(TEnumAsByte<ECursorState>* CursorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVRCBabyLOc.NVRCBabyLoc_C.GetHoverCursorState");

	ANVRCBabyLoc_C_GetHoverCursorState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CursorState != nullptr)
		*CursorState = params.CursorState;
}


// Function NVRCBabyLOc.NVRCBabyLoc_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANVRCBabyLoc_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NVRCBabyLOc.NVRCBabyLoc_C.UserConstructionScript");

	ANVRCBabyLoc_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NVRCBabyLOc.NVRCBabyLoc_C.ZoomInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASaul_MotionControllerPawn_C** MotionControllerPawn           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        Hit_Component                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ANVRCBabyLoc_C::ZoomInteract(class ASaul_MotionControllerPawn_C** MotionControllerPawn, class AActor** HitActor, class USceneComponent** Hit_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVRCBabyLOc.NVRCBabyLoc_C.ZoomInteract");

	ANVRCBabyLoc_C_ZoomInteract_Params params;
	params.MotionControllerPawn = MotionControllerPawn;
	params.HitActor = HitActor;
	params.Hit_Component = Hit_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NVRCBabyLOc.NVRCBabyLoc_C.ZoomEndInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASaul_MotionControllerPawn_C* MotionControllerPawn           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ANVRCBabyLoc_C::ZoomEndInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class AActor* HitActor, class UActorComponent* HitComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVRCBabyLOc.NVRCBabyLoc_C.ZoomEndInteract");

	ANVRCBabyLoc_C_ZoomEndInteract_Params params;
	params.MotionControllerPawn = MotionControllerPawn;
	params.HitActor = HitActor;
	params.HitComponent = HitComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NVRCBabyLOc.NVRCBabyLoc_C.OnVRHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter**        Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType*                   Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANVRCBabyLoc_C::OnVRHoverBegin(class ASWGVRCharacter** Sender, EVRHandType* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVRCBabyLOc.NVRCBabyLoc_C.OnVRHoverBegin");

	ANVRCBabyLoc_C_OnVRHoverBegin_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NVRCBabyLOc.NVRCBabyLoc_C.OnVRHoverEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter**        Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType*                   Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANVRCBabyLoc_C::OnVRHoverEnd(class ASWGVRCharacter** Sender, EVRHandType* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVRCBabyLOc.NVRCBabyLoc_C.OnVRHoverEnd");

	ANVRCBabyLoc_C_OnVRHoverEnd_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NVRCBabyLOc.NVRCBabyLoc_C.ExecuteUbergraph_NVRCBabyLoc
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANVRCBabyLoc_C::ExecuteUbergraph_NVRCBabyLoc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVRCBabyLOc.NVRCBabyLoc_C.ExecuteUbergraph_NVRCBabyLoc");

	ANVRCBabyLoc_C_ExecuteUbergraph_NVRCBabyLoc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
