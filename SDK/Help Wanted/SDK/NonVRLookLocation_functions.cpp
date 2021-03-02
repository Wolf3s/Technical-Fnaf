
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

// Function NonVRLookLocation.NonVRLookLocation_C.GetHoverCursorState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECursorState>      CursorState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANonVRLookLocation_C::GetHoverCursorState(TEnumAsByte<ECursorState>* CursorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVRLookLocation.NonVRLookLocation_C.GetHoverCursorState");

	ANonVRLookLocation_C_GetHoverCursorState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CursorState != nullptr)
		*CursorState = params.CursorState;
}


// Function NonVRLookLocation.NonVRLookLocation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANonVRLookLocation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVRLookLocation.NonVRLookLocation_C.UserConstructionScript");

	ANonVRLookLocation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NonVRLookLocation.NonVRLookLocation_C.ZoomInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASaul_MotionControllerPawn_C* MotionControllerPawn           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Hit_Component                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ANonVRLookLocation_C::ZoomInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class AActor* HitActor, class USceneComponent* Hit_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVRLookLocation.NonVRLookLocation_C.ZoomInteract");

	ANonVRLookLocation_C_ZoomInteract_Params params;
	params.MotionControllerPawn = MotionControllerPawn;
	params.HitActor = HitActor;
	params.Hit_Component = Hit_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NonVRLookLocation.NonVRLookLocation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANonVRLookLocation_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVRLookLocation.NonVRLookLocation_C.ReceiveBeginPlay");

	ANonVRLookLocation_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NonVRLookLocation.NonVRLookLocation_C.OnVRHoverComponentEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANonVRLookLocation_C::OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVRLookLocation.NonVRLookLocation_C.OnVRHoverComponentEnd");

	ANonVRLookLocation_C_OnVRHoverComponentEnd_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NonVRLookLocation.NonVRLookLocation_C.OnVRHoverComponentBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANonVRLookLocation_C::OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVRLookLocation.NonVRLookLocation_C.OnVRHoverComponentBegin");

	ANonVRLookLocation_C_OnVRHoverComponentBegin_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NonVRLookLocation.NonVRLookLocation_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ANonVRLookLocation_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVRLookLocation.NonVRLookLocation_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ANonVRLookLocation_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function NonVRLookLocation.NonVRLookLocation_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANonVRLookLocation_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVRLookLocation.NonVRLookLocation_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ANonVRLookLocation_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NonVRLookLocation.NonVRLookLocation_C.OnVRHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANonVRLookLocation_C::OnVRHoverBegin(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVRLookLocation.NonVRLookLocation_C.OnVRHoverBegin");

	ANonVRLookLocation_C_OnVRHoverBegin_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NonVRLookLocation.NonVRLookLocation_C.OnVRHoverEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANonVRLookLocation_C::OnVRHoverEnd(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVRLookLocation.NonVRLookLocation_C.OnVRHoverEnd");

	ANonVRLookLocation_C_OnVRHoverEnd_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NonVRLookLocation.NonVRLookLocation_C.ExecuteUbergraph_NonVRLookLocation
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANonVRLookLocation_C::ExecuteUbergraph_NonVRLookLocation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVRLookLocation.NonVRLookLocation_C.ExecuteUbergraph_NonVRLookLocation");

	ANonVRLookLocation_C_ExecuteUbergraph_NonVRLookLocation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
