
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

// Function Office01_Door_Bp.Office01_Door_Bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice01_Door_Bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.UserConstructionScript");

	AOffice01_Door_Bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AOffice01_Door_Bp_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.Timeline_0__FinishedFunc");

	AOffice01_Door_Bp_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AOffice01_Door_Bp_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.Timeline_0__UpdateFunc");

	AOffice01_Door_Bp_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void AOffice01_Door_Bp_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.Timeline_1__FinishedFunc");

	AOffice01_Door_Bp_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void AOffice01_Door_Bp_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.Timeline_1__UpdateFunc");

	AOffice01_Door_Bp_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.OpenDoor
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Door_Bp_C::OpenDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.OpenDoor");

	AOffice01_Door_Bp_C_OpenDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.CloseDoor
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Door_Bp_C::CloseDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.CloseDoor");

	AOffice01_Door_Bp_C_CloseDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AOffice01_Door_Bp_C::BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AOffice01_Door_Bp_C_BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Office01_Door_Bp.Office01_Door_Bp_C.BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_Door_Bp_C::BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	AOffice01_Door_Bp_C_BndEvt__Button_Door_Collider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AOffice01_Door_Bp_C::BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

	AOffice01_Door_Bp_C_BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Office01_Door_Bp.Office01_Door_Bp_C.BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_Door_Bp_C::BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature");

	AOffice01_Door_Bp_C_BndEvt__Button_Light_Collider_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_Door_Bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.ReceiveTick");

	AOffice01_Door_Bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.ToggleSound
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Door_Bp_C::ToggleSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.ToggleSound");

	AOffice01_Door_Bp_C_ToggleSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOffice01_Door_Bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.ReceiveBeginPlay");

	AOffice01_Door_Bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.DisableDoorInteraction
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Door_Bp_C::DisableDoorInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.DisableDoorInteraction");

	AOffice01_Door_Bp_C_DisableDoorInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.PowerOutageShutDown
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Door_Bp_C::PowerOutageShutDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.PowerOutageShutDown");

	AOffice01_Door_Bp_C_PowerOutageShutDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.FlickerDoorLights
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Door_Bp_C::FlickerDoorLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.FlickerDoorLights");

	AOffice01_Door_Bp_C_FlickerDoorLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.KillLights
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Door_Bp_C::KillLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.KillLights");

	AOffice01_Door_Bp_C_KillLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.CheckDoorScare
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Door_Bp_C::CheckDoorScare()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.CheckDoorScare");

	AOffice01_Door_Bp_C_CheckDoorScare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.CheckIfBonnie
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Door_Bp_C::CheckIfBonnie()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.CheckIfBonnie");

	AOffice01_Door_Bp_C_CheckIfBonnie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.OnPadDoor
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Door_Bp_C::OnPadDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.OnPadDoor");

	AOffice01_Door_Bp_C_OnPadDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.OnPadLights
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Door_Bp_C::OnPadLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.OnPadLights");

	AOffice01_Door_Bp_C_OnPadLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.NightmareKillLights
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Door_Bp_C::NightmareKillLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.NightmareKillLights");

	AOffice01_Door_Bp_C_NightmareKillLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.OnNonVRLineTraceInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASaul_MotionControllerPawn_C* MotionControllerPawn           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Hit_Actor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_Door_Bp_C::OnNonVRLineTraceInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class USceneComponent* HitComponent, class AActor* Hit_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.OnNonVRLineTraceInteract");

	AOffice01_Door_Bp_C_OnNonVRLineTraceInteract_Params params;
	params.MotionControllerPawn = MotionControllerPawn;
	params.HitComponent = HitComponent;
	params.Hit_Actor = Hit_Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.NonVR ResetButtons
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Door_Bp_C::NonVR_ResetButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.NonVR ResetButtons");

	AOffice01_Door_Bp_C_NonVR_ResetButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.NonVR ResetButtonsNodeCleaner
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Door_Bp_C::NonVR_ResetButtonsNodeCleaner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.NonVR ResetButtonsNodeCleaner");

	AOffice01_Door_Bp_C_NonVR_ResetButtonsNodeCleaner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.InputBinderEvent
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Door_Bp_C::InputBinderEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.InputBinderEvent");

	AOffice01_Door_Bp_C_InputBinderEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.NonVr_Door_Light_Left
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Door_Bp_C::NonVr_Door_Light_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.NonVr_Door_Light_Left");

	AOffice01_Door_Bp_C_NonVr_Door_Light_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.NonVr_Door_Left
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Door_Bp_C::NonVr_Door_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.NonVr_Door_Left");

	AOffice01_Door_Bp_C_NonVr_Door_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.NonVr_Door_Light_Right
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Door_Bp_C::NonVr_Door_Light_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.NonVr_Door_Light_Right");

	AOffice01_Door_Bp_C_NonVr_Door_Light_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.NonVr_Door_Right
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Door_Bp_C::NonVr_Door_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.NonVr_Door_Right");

	AOffice01_Door_Bp_C_NonVr_Door_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.DS4LightButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Pressed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_Door_Bp_C::DS4LightButton(bool Is_Pressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.DS4LightButton");

	AOffice01_Door_Bp_C_DS4LightButton_Params params;
	params.Is_Pressed = Is_Pressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.DS4DoorButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Pressed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_Door_Bp_C::DS4DoorButton(bool Is_Pressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.DS4DoorButton");

	AOffice01_Door_Bp_C_DS4DoorButton_Params params;
	params.Is_Pressed = Is_Pressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.On Controller Device Changed
// (BlueprintCallable, BlueprintEvent)

void AOffice01_Door_Bp_C::On_Controller_Device_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.On Controller Device Changed");

	AOffice01_Door_Bp_C_On_Controller_Device_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_Door_Bp.Office01_Door_Bp_C.ExecuteUbergraph_Office01_Door_Bp
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_Door_Bp_C::ExecuteUbergraph_Office01_Door_Bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_Door_Bp.Office01_Door_Bp_C.ExecuteUbergraph_Office01_Door_Bp");

	AOffice01_Door_Bp_C_ExecuteUbergraph_Office01_Door_Bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
