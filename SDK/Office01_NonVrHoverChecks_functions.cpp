
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

// Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.GetHoverCursorState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECursorState>      CursorState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOffice01_NonVrHoverChecks_C::GetHoverCursorState(TEnumAsByte<ECursorState>* CursorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.GetHoverCursorState");

	AOffice01_NonVrHoverChecks_C_GetHoverCursorState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CursorState != nullptr)
		*CursorState = params.CursorState;
}


// Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice01_NonVrHoverChecks_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.UserConstructionScript");

	AOffice01_NonVrHoverChecks_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.OnVRHoverComponentBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_NonVrHoverChecks_C::OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.OnVRHoverComponentBegin");

	AOffice01_NonVrHoverChecks_C_OnVRHoverComponentBegin_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.OnVRHoverComponentEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_NonVrHoverChecks_C::OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.OnVRHoverComponentEnd");

	AOffice01_NonVrHoverChecks_C_OnVRHoverComponentEnd_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.OnVRHoverEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_NonVrHoverChecks_C::OnVRHoverEnd(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.OnVRHoverEnd");

	AOffice01_NonVrHoverChecks_C_OnVRHoverEnd_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOffice01_NonVrHoverChecks_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.ReceiveBeginPlay");

	AOffice01_NonVrHoverChecks_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.OnVRHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_NonVrHoverChecks_C::OnVRHoverBegin(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.OnVRHoverBegin");

	AOffice01_NonVrHoverChecks_C_OnVRHoverBegin_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.CheckCollision
// (BlueprintCallable, BlueprintEvent)

void AOffice01_NonVrHoverChecks_C::CheckCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.CheckCollision");

	AOffice01_NonVrHoverChecks_C_CheckCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.ExecuteUbergraph_Office01_NonVrHoverChecks
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_NonVrHoverChecks_C::ExecuteUbergraph_Office01_NonVrHoverChecks(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C.ExecuteUbergraph_Office01_NonVrHoverChecks");

	AOffice01_NonVrHoverChecks_C_ExecuteUbergraph_Office01_NonVrHoverChecks_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
