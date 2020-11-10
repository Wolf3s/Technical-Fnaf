
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

// Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANonVR_InSpaceUI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.UserConstructionScript");

	ANonVR_InSpaceUI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANonVR_InSpaceUI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.ReceiveBeginPlay");

	ANonVR_InSpaceUI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.Change Button
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EControllerButtonsEnum> Controller_Button              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANonVR_InSpaceUI_C::Change_Button(TEnumAsByte<EControllerButtonsEnum> Controller_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.Change Button");

	ANonVR_InSpaceUI_C_Change_Button_Params params;
	params.Controller_Button = Controller_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANonVR_InSpaceUI_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.ReceiveTick");

	ANonVR_InSpaceUI_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.Setup Controller Display
// (BlueprintCallable, BlueprintEvent)

void ANonVR_InSpaceUI_C::Setup_Controller_Display()
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.Setup Controller Display");

	ANonVR_InSpaceUI_C_Setup_Controller_Display_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.ExecuteUbergraph_NonVR_InSpaceUI
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANonVR_InSpaceUI_C::ExecuteUbergraph_NonVR_InSpaceUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVR_InSpaceUI.NonVR_InSpaceUI_C.ExecuteUbergraph_NonVR_InSpaceUI");

	ANonVR_InSpaceUI_C_ExecuteUbergraph_NonVR_InSpaceUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
