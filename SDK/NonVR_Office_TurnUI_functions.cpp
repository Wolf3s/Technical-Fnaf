
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

// Function NonVR_Office_TurnUI.NonVR_Office_TurnUI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNonVR_Office_TurnUI_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVR_Office_TurnUI.NonVR_Office_TurnUI_C.PreConstruct");

	UNonVR_Office_TurnUI_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NonVR_Office_TurnUI.NonVR_Office_TurnUI_C.LookUIVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNonVR_Office_TurnUI_C::LookUIVisibility(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVR_Office_TurnUI.NonVR_Office_TurnUI_C.LookUIVisibility");

	UNonVR_Office_TurnUI_C_LookUIVisibility_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NonVR_Office_TurnUI.NonVR_Office_TurnUI_C.On Controller Updated
// (BlueprintCallable, BlueprintEvent)

void UNonVR_Office_TurnUI_C::On_Controller_Updated()
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVR_Office_TurnUI.NonVR_Office_TurnUI_C.On Controller Updated");

	UNonVR_Office_TurnUI_C_On_Controller_Updated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NonVR_Office_TurnUI.NonVR_Office_TurnUI_C.ExecuteUbergraph_NonVR_Office_TurnUI
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNonVR_Office_TurnUI_C::ExecuteUbergraph_NonVR_Office_TurnUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVR_Office_TurnUI.NonVR_Office_TurnUI_C.ExecuteUbergraph_NonVR_Office_TurnUI");

	UNonVR_Office_TurnUI_C_ExecuteUbergraph_NonVR_Office_TurnUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
