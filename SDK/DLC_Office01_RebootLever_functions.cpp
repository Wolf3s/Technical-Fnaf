
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

// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.AttemptGrab
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

void ADLC_Office01_RebootLever_C::AttemptGrab(class ASWGVRCharacter* Grabber, EVRHandType Hand, bool* canGrab, EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.AttemptGrab");

	ADLC_Office01_RebootLever_C_AttemptGrab_Params params;
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


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.AttemptRelease
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADLC_Office01_RebootLever_C::AttemptRelease(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.AttemptRelease");

	ADLC_Office01_RebootLever_C_AttemptRelease_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ResetLeverControls
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADLC_Office01_RebootLever_C::ResetLeverControls()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ResetLeverControls");

	ADLC_Office01_RebootLever_C_ResetLeverControls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADLC_Office01_RebootLever_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.UserConstructionScript");

	ADLC_Office01_RebootLever_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ADLC_Office01_RebootLever_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.Timeline_0__FinishedFunc");

	ADLC_Office01_RebootLever_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ADLC_Office01_RebootLever_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.Timeline_0__UpdateFunc");

	ADLC_Office01_RebootLever_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ADLC_Office01_RebootLever_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.Timeline_1__FinishedFunc");

	ADLC_Office01_RebootLever_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ADLC_Office01_RebootLever_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.Timeline_1__UpdateFunc");

	ADLC_Office01_RebootLever_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.LeverHandlerNonVR__FinishedFunc
// (BlueprintEvent)

void ADLC_Office01_RebootLever_C::LeverHandlerNonVR__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.LeverHandlerNonVR__FinishedFunc");

	ADLC_Office01_RebootLever_C_LeverHandlerNonVR__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.LeverHandlerNonVR__UpdateFunc
// (BlueprintEvent)

void ADLC_Office01_RebootLever_C::LeverHandlerNonVR__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.LeverHandlerNonVR__UpdateFunc");

	ADLC_Office01_RebootLever_C_LeverHandlerNonVR__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADLC_Office01_RebootLever_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ReceiveTick");

	ADLC_Office01_RebootLever_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRReleased
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReleaseVelocity                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ADLC_Office01_RebootLever_C::OnVRReleased(class ASWGVRCharacter* Grabber, EVRHandType Hand, const struct FVector& ReleaseVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRReleased");

	ADLC_Office01_RebootLever_C_OnVRReleased_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;
	params.ReleaseVelocity = ReleaseVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Grabber                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADLC_Office01_RebootLever_C::OnVRGrabbed(class ASWGVRCharacter* Grabber, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRGrabbed");

	ADLC_Office01_RebootLever_C_OnVRGrabbed_Params params;
	params.Grabber = Grabber;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ResetDoOnceNodes
// (BlueprintCallable, BlueprintEvent)

void ADLC_Office01_RebootLever_C::ResetDoOnceNodes()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ResetDoOnceNodes");

	ADLC_Office01_RebootLever_C_ResetDoOnceNodes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRHoverEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADLC_Office01_RebootLever_C::OnVRHoverEnd(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRHoverEnd");

	ADLC_Office01_RebootLever_C_OnVRHoverEnd_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADLC_Office01_RebootLever_C::OnVRHoverBegin(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRHoverBegin");

	ADLC_Office01_RebootLever_C_OnVRHoverBegin_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.RebootPowerEvent
// (BlueprintCallable, BlueprintEvent)

void ADLC_Office01_RebootLever_C::RebootPowerEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.RebootPowerEvent");

	ADLC_Office01_RebootLever_C_RebootPowerEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.TriggerPowerOutageEvent
// (BlueprintCallable, BlueprintEvent)

void ADLC_Office01_RebootLever_C::TriggerPowerOutageEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.TriggerPowerOutageEvent");

	ADLC_Office01_RebootLever_C_TriggerPowerOutageEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADLC_Office01_RebootLever_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ReceiveBeginPlay");

	ADLC_Office01_RebootLever_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.BndEvt__AttachPoint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADLC_Office01_RebootLever_C::BndEvt__AttachPoint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.BndEvt__AttachPoint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ADLC_Office01_RebootLever_C_BndEvt__AttachPoint_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.Debug_EventInput
// (BlueprintCallable, BlueprintEvent)

void ADLC_Office01_RebootLever_C::Debug_EventInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.Debug_EventInput");

	ADLC_Office01_RebootLever_C_Debug_EventInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ResetLeverInteraction
// (BlueprintCallable, BlueprintEvent)

void ADLC_Office01_RebootLever_C::ResetLeverInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ResetLeverInteraction");

	ADLC_Office01_RebootLever_C_ResetLeverInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.PowerOutage
// (BlueprintCallable, BlueprintEvent)

void ADLC_Office01_RebootLever_C::PowerOutage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.PowerOutage");

	ADLC_Office01_RebootLever_C_PowerOutage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.PowerSequenceStarted
// (BlueprintCallable, BlueprintEvent)

void ADLC_Office01_RebootLever_C::PowerSequenceStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.PowerSequenceStarted");

	ADLC_Office01_RebootLever_C_PowerSequenceStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.EnableBlinkingLights
// (BlueprintCallable, BlueprintEvent)

void ADLC_Office01_RebootLever_C::EnableBlinkingLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.EnableBlinkingLights");

	ADLC_Office01_RebootLever_C_EnableBlinkingLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.DisableBlinkingLights
// (BlueprintCallable, BlueprintEvent)

void ADLC_Office01_RebootLever_C::DisableBlinkingLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.DisableBlinkingLights");

	ADLC_Office01_RebootLever_C_DisableBlinkingLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.DisableLeverLightNotify
// (BlueprintCallable, BlueprintEvent)

void ADLC_Office01_RebootLever_C::DisableLeverLightNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.DisableLeverLightNotify");

	ADLC_Office01_RebootLever_C_DisableLeverLightNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRHoverComponentEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADLC_Office01_RebootLever_C::OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRHoverComponentEnd");

	ADLC_Office01_RebootLever_C_OnVRHoverComponentEnd_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRHoverComponentBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADLC_Office01_RebootLever_C::OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnVRHoverComponentBegin");

	ADLC_Office01_RebootLever_C_OnVRHoverComponentBegin_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnNonVRLineTraceInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASaul_MotionControllerPawn_C* MotionControllerPawn           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Hit_Actor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADLC_Office01_RebootLever_C::OnNonVRLineTraceInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class USceneComponent* HitComponent, class AActor* Hit_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.OnNonVRLineTraceInteract");

	ADLC_Office01_RebootLever_C_OnNonVRLineTraceInteract_Params params;
	params.MotionControllerPawn = MotionControllerPawn;
	params.HitComponent = HitComponent;
	params.Hit_Actor = Hit_Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.FireRebootProcess
// (BlueprintCallable, BlueprintEvent)

void ADLC_Office01_RebootLever_C::FireRebootProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.FireRebootProcess");

	ADLC_Office01_RebootLever_C_FireRebootProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.RebootProcessFinishing
// (BlueprintCallable, BlueprintEvent)

void ADLC_Office01_RebootLever_C::RebootProcessFinishing()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.RebootProcessFinishing");

	ADLC_Office01_RebootLever_C_RebootProcessFinishing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.NonVR_GamepadInteraction
// (BlueprintCallable, BlueprintEvent)

void ADLC_Office01_RebootLever_C::NonVR_GamepadInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.NonVR_GamepadInteraction");

	ADLC_Office01_RebootLever_C_NonVR_GamepadInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.LowerLever
// (BlueprintCallable, BlueprintEvent)

void ADLC_Office01_RebootLever_C::LowerLever()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.LowerLever");

	ADLC_Office01_RebootLever_C_LowerLever_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.RaiseLever
// (BlueprintCallable, BlueprintEvent)

void ADLC_Office01_RebootLever_C::RaiseLever()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.RaiseLever");

	ADLC_Office01_RebootLever_C_RaiseLever_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ExecuteUbergraph_DLC_Office01_RebootLever
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADLC_Office01_RebootLever_C::ExecuteUbergraph_DLC_Office01_RebootLever(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_Office01_RebootLever.DLC_Office01_RebootLever_C.ExecuteUbergraph_DLC_Office01_RebootLever");

	ADLC_Office01_RebootLever_C_ExecuteUbergraph_DLC_Office01_RebootLever_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
