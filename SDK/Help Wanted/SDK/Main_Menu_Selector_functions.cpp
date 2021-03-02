
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

// Function Main_Menu_Selector.Main_Menu_Selector_C.GetHoverCursorState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECursorState>      CursorState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMain_Menu_Selector_C::GetHoverCursorState(TEnumAsByte<ECursorState>* CursorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.GetHoverCursorState");

	AMain_Menu_Selector_C_GetHoverCursorState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CursorState != nullptr)
		*CursorState = params.CursorState;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.GetMainMenuWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMain_Menu_C*            Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AMain_Menu_Selector_C::GetMainMenuWidget(class UMain_Menu_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.GetMainMenuWidget");

	AMain_Menu_Selector_C_GetMainMenuWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void AMain_Menu_Selector_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.Initialize");

	AMain_Menu_Selector_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMain_Menu_Selector_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.UserConstructionScript");

	AMain_Menu_Selector_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AMain_Menu_Selector_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.Timeline_0__FinishedFunc");

	AMain_Menu_Selector_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AMain_Menu_Selector_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.Timeline_0__UpdateFunc");

	AMain_Menu_Selector_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.InpActEvt_MenuConfirm(NonVR)_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AMain_Menu_Selector_C::InpActEvt_MenuConfirm_NonVR__K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.InpActEvt_MenuConfirm(NonVR)_K2Node_InputActionEvent_5");

	AMain_Menu_Selector_C_InpActEvt_MenuConfirm_NonVR__K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.InpActEvt_MenuLeft(NonVR)_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AMain_Menu_Selector_C::InpActEvt_MenuLeft_NonVR__K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.InpActEvt_MenuLeft(NonVR)_K2Node_InputActionEvent_4");

	AMain_Menu_Selector_C_InpActEvt_MenuLeft_NonVR__K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.InpActEvt_MenuRight(NonVR)_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AMain_Menu_Selector_C::InpActEvt_MenuRight_NonVR__K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.InpActEvt_MenuRight(NonVR)_K2Node_InputActionEvent_3");

	AMain_Menu_Selector_C_InpActEvt_MenuRight_NonVR__K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.InpActEvt_MenuPageLeft(NonVR)_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AMain_Menu_Selector_C::InpActEvt_MenuPageLeft_NonVR__K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.InpActEvt_MenuPageLeft(NonVR)_K2Node_InputActionEvent_2");

	AMain_Menu_Selector_C_InpActEvt_MenuPageLeft_NonVR__K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.InpActEvt_MenuPageRight(NonVR)_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AMain_Menu_Selector_C::InpActEvt_MenuPageRight_NonVR__K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.InpActEvt_MenuPageRight(NonVR)_K2Node_InputActionEvent_1");

	AMain_Menu_Selector_C_InpActEvt_MenuPageRight_NonVR__K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.OnVRHoverComponentBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMain_Menu_Selector_C::OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.OnVRHoverComponentBegin");

	AMain_Menu_Selector_C_OnVRHoverComponentBegin_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.OnVRHoverComponentEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMain_Menu_Selector_C::OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.OnVRHoverComponentEnd");

	AMain_Menu_Selector_C_OnVRHoverComponentEnd_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.OnNonVRLineTraceInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASaul_MotionControllerPawn_C* MotionControllerPawn           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Hit_Actor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMain_Menu_Selector_C::OnNonVRLineTraceInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class USceneComponent* HitComponent, class AActor* Hit_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.OnNonVRLineTraceInteract");

	AMain_Menu_Selector_C_OnNonVRLineTraceInteract_Params params;
	params.MotionControllerPawn = MotionControllerPawn;
	params.HitComponent = HitComponent;
	params.Hit_Actor = Hit_Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMain_Menu_Selector_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.ReceiveBeginPlay");

	AMain_Menu_Selector_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMain_Menu_Selector_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.ReceiveTick");

	AMain_Menu_Selector_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__ResetSave_Collider_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMain_Menu_Selector_C::BndEvt__ResetSave_Collider_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__ResetSave_Collider_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature");

	AMain_Menu_Selector_C_BndEvt__ResetSave_Collider_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Main_Menu_Selector.Main_Menu_Selector_C.ResetSave
// (BlueprintCallable, BlueprintEvent)

void AMain_Menu_Selector_C::ResetSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.ResetSave");

	AMain_Menu_Selector_C_ResetSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__ResetSave_Collider_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMain_Menu_Selector_C::BndEvt__ResetSave_Collider_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__ResetSave_Collider_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature");

	AMain_Menu_Selector_C_BndEvt__ResetSave_Collider_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.EnterPass
// (BlueprintCallable, BlueprintEvent)

void AMain_Menu_Selector_C::EnterPass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.EnterPass");

	AMain_Menu_Selector_C_EnterPass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.UpPass
// (BlueprintCallable, BlueprintEvent)

void AMain_Menu_Selector_C::UpPass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.UpPass");

	AMain_Menu_Selector_C_UpPass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.DownPas
// (BlueprintCallable, BlueprintEvent)

void AMain_Menu_Selector_C::DownPas()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.DownPas");

	AMain_Menu_Selector_C_DownPas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.LeftPass
// (BlueprintCallable, BlueprintEvent)

void AMain_Menu_Selector_C::LeftPass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.LeftPass");

	AMain_Menu_Selector_C_LeftPass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.DownPass
// (BlueprintCallable, BlueprintEvent)

void AMain_Menu_Selector_C::DownPass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.DownPass");

	AMain_Menu_Selector_C_DownPass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMain_Menu_Selector_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AMain_Menu_Selector_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMain_Menu_Selector_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	AMain_Menu_Selector_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__Box1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMain_Menu_Selector_C::BndEvt__Box1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__Box1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	AMain_Menu_Selector_C_BndEvt__Box1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__Box1_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMain_Menu_Selector_C::BndEvt__Box1_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__Box1_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	AMain_Menu_Selector_C_BndEvt__Box1_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.ActivateScreenPass
// (BlueprintCallable, BlueprintEvent)

void AMain_Menu_Selector_C::ActivateScreenPass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.ActivateScreenPass");

	AMain_Menu_Selector_C_ActivateScreenPass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__ClickCollision_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMain_Menu_Selector_C::BndEvt__ClickCollision_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__ClickCollision_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature");

	AMain_Menu_Selector_C_BndEvt__ClickCollision_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__ClickCollision_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMain_Menu_Selector_C::BndEvt__ClickCollision_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__ClickCollision_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature");

	AMain_Menu_Selector_C_BndEvt__ClickCollision_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__FingerToPointerColliderTEMP2_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMain_Menu_Selector_C::BndEvt__FingerToPointerColliderTEMP2_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__FingerToPointerColliderTEMP2_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature");

	AMain_Menu_Selector_C_BndEvt__FingerToPointerColliderTEMP2_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__FingerToPointerColliderTEMP2_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMain_Menu_Selector_C::BndEvt__FingerToPointerColliderTEMP2_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__FingerToPointerColliderTEMP2_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature");

	AMain_Menu_Selector_C_BndEvt__FingerToPointerColliderTEMP2_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__FingerToPointerColliderTEMP1_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMain_Menu_Selector_C::BndEvt__FingerToPointerColliderTEMP1_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__FingerToPointerColliderTEMP1_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature");

	AMain_Menu_Selector_C_BndEvt__FingerToPointerColliderTEMP1_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__FingerToPointerColliderTEMP1_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMain_Menu_Selector_C::BndEvt__FingerToPointerColliderTEMP1_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.BndEvt__FingerToPointerColliderTEMP1_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature");

	AMain_Menu_Selector_C_BndEvt__FingerToPointerColliderTEMP1_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.SetupHandRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASaul_BP_MotionController_C* Refto                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMain_Menu_Selector_C::SetupHandRef(class ASaul_BP_MotionController_C* Refto)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.SetupHandRef");

	AMain_Menu_Selector_C_SetupHandRef_Params params;
	params.Refto = Refto;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.ZoomInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASaul_MotionControllerPawn_C* MotionControllerPawn           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Hit_Component                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AMain_Menu_Selector_C::ZoomInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class AActor* HitActor, class USceneComponent* Hit_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.ZoomInteract");

	AMain_Menu_Selector_C_ZoomInteract_Params params;
	params.MotionControllerPawn = MotionControllerPawn;
	params.HitActor = HitActor;
	params.Hit_Component = Hit_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.UnbindNonVR
// (BlueprintCallable, BlueprintEvent)

void AMain_Menu_Selector_C::UnbindNonVR()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.UnbindNonVR");

	AMain_Menu_Selector_C_UnbindNonVR_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.MovingToPrizeCounter
// (BlueprintCallable, BlueprintEvent)

void AMain_Menu_Selector_C::MovingToPrizeCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.MovingToPrizeCounter");

	AMain_Menu_Selector_C_MovingToPrizeCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.OnVRHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMain_Menu_Selector_C::OnVRHoverBegin(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.OnVRHoverBegin");

	AMain_Menu_Selector_C_OnVRHoverBegin_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.OnVRHoverEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMain_Menu_Selector_C::OnVRHoverEnd(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.OnVRHoverEnd");

	AMain_Menu_Selector_C_OnVRHoverEnd_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu_Selector.Main_Menu_Selector_C.ExecuteUbergraph_Main_Menu_Selector
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMain_Menu_Selector_C::ExecuteUbergraph_Main_Menu_Selector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu_Selector.Main_Menu_Selector_C.ExecuteUbergraph_Main_Menu_Selector");

	AMain_Menu_Selector_C_ExecuteUbergraph_Main_Menu_Selector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
