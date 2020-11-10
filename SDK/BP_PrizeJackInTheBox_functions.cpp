
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

// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.AttemptGrab
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           canGrab                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EGrabSnapType                  SnapType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           snapLocation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           snapRotation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AttachmentOffsetLocation       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                AttachmentOffsetRotation       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PrizeJackInTheBox_C::AttemptGrab(class ASWGVRCharacter* Grabber, EVRHandType Hand, bool* canGrab, EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.AttemptGrab");

	ABP_PrizeJackInTheBox_C_AttemptGrab_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canGrab != nullptr)
		*canGrab = params.canGrab;
	if (SnapType != nullptr)
		*SnapType = params.SnapType;
	if (snapLocation != nullptr)
		*snapLocation = params.snapLocation;
	if (snapRotation != nullptr)
		*snapRotation = params.snapRotation;
	if (AttachmentOffsetLocation != nullptr)
		*AttachmentOffsetLocation = params.AttachmentOffsetLocation;
	if (AttachmentOffsetRotation != nullptr)
		*AttachmentOffsetRotation = params.AttachmentOffsetRotation;
}


// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.AttemptRelease
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PrizeJackInTheBox_C::AttemptRelease(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.AttemptRelease");

	ABP_PrizeJackInTheBox_C_AttemptRelease_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PrizeJackInTheBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.UserConstructionScript");

	ABP_PrizeJackInTheBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.BOB__FinishedFunc
// (BlueprintEvent)

void ABP_PrizeJackInTheBox_C::BOB__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.BOB__FinishedFunc");

	ABP_PrizeJackInTheBox_C_BOB__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.BOB__UpdateFunc
// (BlueprintEvent)

void ABP_PrizeJackInTheBox_C::BOB__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.BOB__UpdateFunc");

	ABP_PrizeJackInTheBox_C_BOB__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.MoveUp__FinishedFunc
// (BlueprintEvent)

void ABP_PrizeJackInTheBox_C::MoveUp__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.MoveUp__FinishedFunc");

	ABP_PrizeJackInTheBox_C_MoveUp__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.MoveUp__UpdateFunc
// (BlueprintEvent)

void ABP_PrizeJackInTheBox_C::MoveUp__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.MoveUp__UpdateFunc");

	ABP_PrizeJackInTheBox_C_MoveUp__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRHoverComponentBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PrizeJackInTheBox_C::OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRHoverComponentBegin");

	ABP_PrizeJackInTheBox_C_OnVRHoverComponentBegin_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRHoverComponentEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PrizeJackInTheBox_C::OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRHoverComponentEnd");

	ABP_PrizeJackInTheBox_C_OnVRHoverComponentEnd_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PrizeJackInTheBox_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.ReceiveTick");

	ABP_PrizeJackInTheBox_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PrizeJackInTheBox_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.ReceiveBeginPlay");

	ABP_PrizeJackInTheBox_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.BndEvt__Box1_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_PrizeJackInTheBox_C::BndEvt__Box1_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.BndEvt__Box1_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_PrizeJackInTheBox_C_BndEvt__Box1_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PrizeJackInTheBox_C::OnVRGrabbed(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRGrabbed");

	ABP_PrizeJackInTheBox_C_OnVRGrabbed_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRReleased
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReleaseVelocity                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_PrizeJackInTheBox_C::OnVRReleased(class ASWGVRCharacter* Grabber, EVRHandType Hand, const struct FVector& ReleaseVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRReleased");

	ABP_PrizeJackInTheBox_C_OnVRReleased_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;
	params.ReleaseVelocity = ReleaseVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnPrizeGrabbed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrize_Parent_C*         Prize                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PrizeJackInTheBox_C::OnPrizeGrabbed(class APrize_Parent_C* Prize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnPrizeGrabbed");

	ABP_PrizeJackInTheBox_C_OnPrizeGrabbed_Params params;
	params.Prize = Prize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.StopBob
// (BlueprintCallable, BlueprintEvent)

void ABP_PrizeJackInTheBox_C::StopBob()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.StopBob");

	ABP_PrizeJackInTheBox_C_StopBob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnPrizeReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrize_Parent_C*         Prize                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PrizeJackInTheBox_C::OnPrizeReleased(class APrize_Parent_C* Prize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnPrizeReleased");

	ABP_PrizeJackInTheBox_C_OnPrizeReleased_Params params;
	params.Prize = Prize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.DestroyPrize
// (BlueprintCallable, BlueprintEvent)

void ABP_PrizeJackInTheBox_C::DestroyPrize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.DestroyPrize");

	ABP_PrizeJackInTheBox_C_DestroyPrize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.StartBob
// (BlueprintCallable, BlueprintEvent)

void ABP_PrizeJackInTheBox_C::StartBob()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.StartBob");

	ABP_PrizeJackInTheBox_C_StartBob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PrizeJackInTheBox_C::OnVRHoverBegin(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRHoverBegin");

	ABP_PrizeJackInTheBox_C_OnVRHoverBegin_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRHoverEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PrizeJackInTheBox_C::OnVRHoverEnd(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.OnVRHoverEnd");

	ABP_PrizeJackInTheBox_C_OnVRHoverEnd_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.NonVR Bypass
// (BlueprintCallable, BlueprintEvent)

void ABP_PrizeJackInTheBox_C::NonVR_Bypass()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.NonVR Bypass");

	ABP_PrizeJackInTheBox_C_NonVR_Bypass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.ExecuteUbergraph_BP_PrizeJackInTheBox
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PrizeJackInTheBox_C::ExecuteUbergraph_BP_PrizeJackInTheBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrizeJackInTheBox.BP_PrizeJackInTheBox_C.ExecuteUbergraph_BP_PrizeJackInTheBox");

	ABP_PrizeJackInTheBox_C_ExecuteUbergraph_BP_PrizeJackInTheBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
