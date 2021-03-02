
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

// Function Prize_FoxyMask.Prize_FoxyMask_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APrize_FoxyMask_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prize_FoxyMask.Prize_FoxyMask_C.UserConstructionScript");

	APrize_FoxyMask_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prize_FoxyMask.Prize_FoxyMask_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APrize_FoxyMask_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prize_FoxyMask.Prize_FoxyMask_C.ReceiveBeginPlay");

	APrize_FoxyMask_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prize_FoxyMask.Prize_FoxyMask_C.RemoveMask
// (BlueprintCallable, BlueprintEvent)

void APrize_FoxyMask_C::RemoveMask()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prize_FoxyMask.Prize_FoxyMask_C.RemoveMask");

	APrize_FoxyMask_C_RemoveMask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prize_FoxyMask.Prize_FoxyMask_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APrize_FoxyMask_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prize_FoxyMask.Prize_FoxyMask_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	APrize_FoxyMask_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Prize_FoxyMask.Prize_FoxyMask_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrize_FoxyMask_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prize_FoxyMask.Prize_FoxyMask_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature");

	APrize_FoxyMask_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prize_FoxyMask.Prize_FoxyMask_C.OnVRReleased
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter**        Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType*                   Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ReleaseVelocity                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void APrize_FoxyMask_C::OnVRReleased(class ASWGVRCharacter** Grabber, EVRHandType* Hand, struct FVector* ReleaseVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prize_FoxyMask.Prize_FoxyMask_C.OnVRReleased");

	APrize_FoxyMask_C_OnVRReleased_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;
	params.ReleaseVelocity = ReleaseVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prize_FoxyMask.Prize_FoxyMask_C.OnVRGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter**        Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType*                   Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrize_FoxyMask_C::OnVRGrabbed(class ASWGVRCharacter** Grabber, EVRHandType* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prize_FoxyMask.Prize_FoxyMask_C.OnVRGrabbed");

	APrize_FoxyMask_C_OnVRGrabbed_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prize_FoxyMask.Prize_FoxyMask_C.ExecuteUbergraph_Prize_FoxyMask
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrize_FoxyMask_C::ExecuteUbergraph_Prize_FoxyMask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prize_FoxyMask.Prize_FoxyMask_C.ExecuteUbergraph_Prize_FoxyMask");

	APrize_FoxyMask_C_ExecuteUbergraph_Prize_FoxyMask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
