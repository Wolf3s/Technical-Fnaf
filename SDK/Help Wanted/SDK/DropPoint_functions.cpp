
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

// Function DropPoint.DropPoint_C.SetDropPointActive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropPoint_C::SetDropPointActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropPoint.DropPoint_C.SetDropPointActive");

	ADropPoint_C_SetDropPointActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropPoint.DropPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADropPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropPoint.DropPoint_C.UserConstructionScript");

	ADropPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropPoint.DropPoint_C.OnVRHoverComponentBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropPoint_C::OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropPoint.DropPoint_C.OnVRHoverComponentBegin");

	ADropPoint_C_OnVRHoverComponentBegin_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropPoint.DropPoint_C.OnVRHoverComponentEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropPoint_C::OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropPoint.DropPoint_C.OnVRHoverComponentEnd");

	ADropPoint_C_OnVRHoverComponentEnd_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropPoint.DropPoint_C.OnVRHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropPoint_C::OnVRHoverBegin(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropPoint.DropPoint_C.OnVRHoverBegin");

	ADropPoint_C_OnVRHoverBegin_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropPoint.DropPoint_C.OnVRHoverEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropPoint_C::OnVRHoverEnd(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropPoint.DropPoint_C.OnVRHoverEnd");

	ADropPoint_C_OnVRHoverEnd_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropPoint.DropPoint_C.OnDropPointBeginHover
// (BlueprintCallable, BlueprintEvent)

void ADropPoint_C::OnDropPointBeginHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropPoint.DropPoint_C.OnDropPointBeginHover");

	ADropPoint_C_OnDropPointBeginHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropPoint.DropPoint_C.OnDropPointEndHover
// (BlueprintCallable, BlueprintEvent)

void ADropPoint_C::OnDropPointEndHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropPoint.DropPoint_C.OnDropPointEndHover");

	ADropPoint_C_OnDropPointEndHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropPoint.DropPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADropPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropPoint.DropPoint_C.ReceiveBeginPlay");

	ADropPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropPoint.DropPoint_C.OnPlayerGrabbedActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DroppedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropPoint_C::OnPlayerGrabbedActor(class ASWGVRCharacter* Sender, class AActor* DroppedActor, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropPoint.DropPoint_C.OnPlayerGrabbedActor");

	ADropPoint_C_OnPlayerGrabbedActor_Params params;
	params.Sender = Sender;
	params.DroppedActor = DroppedActor;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropPoint.DropPoint_C.BindGrabbingEvents
// (BlueprintCallable, BlueprintEvent)

void ADropPoint_C::BindGrabbingEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropPoint.DropPoint_C.BindGrabbingEvents");

	ADropPoint_C_BindGrabbingEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropPoint.DropPoint_C.UnbindGrabbingEvents
// (BlueprintCallable, BlueprintEvent)

void ADropPoint_C::UnbindGrabbingEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropPoint.DropPoint_C.UnbindGrabbingEvents");

	ADropPoint_C_UnbindGrabbingEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropPoint.DropPoint_C.OnPlayerReleasedActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DroppedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropPoint_C::OnPlayerReleasedActor(class ASWGVRCharacter* Sender, class AActor* DroppedActor, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropPoint.DropPoint_C.OnPlayerReleasedActor");

	ADropPoint_C_OnPlayerReleasedActor_Params params;
	params.Sender = Sender;
	params.DroppedActor = DroppedActor;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropPoint.DropPoint_C.ExecuteUbergraph_DropPoint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropPoint_C::ExecuteUbergraph_DropPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropPoint.DropPoint_C.ExecuteUbergraph_DropPoint");

	ADropPoint_C_ExecuteUbergraph_DropPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
