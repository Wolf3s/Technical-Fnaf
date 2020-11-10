
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

// Function ContinueButton.ContinueButton_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AContinueButton_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContinueButton.ContinueButton_C.UserConstructionScript");

	AContinueButton_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContinueButton.ContinueButton_C.EnableButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AContinueButton_C::EnableButton(bool enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContinueButton.ContinueButton_C.EnableButton");

	AContinueButton_C_EnableButton_Params params;
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContinueButton.ContinueButton_C.ButtonTriggered
// (BlueprintCallable, BlueprintEvent)

void AContinueButton_C::ButtonTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContinueButton.ContinueButton_C.ButtonTriggered");

	AContinueButton_C_ButtonTriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContinueButton.ContinueButton_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AContinueButton_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContinueButton.ContinueButton_C.ReceiveBeginPlay");

	AContinueButton_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ContinueButton.ContinueButton_C.ExecuteUbergraph_ContinueButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AContinueButton_C::ExecuteUbergraph_ContinueButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContinueButton.ContinueButton_C.ExecuteUbergraph_ContinueButton");

	AContinueButton_C_ExecuteUbergraph_ContinueButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
