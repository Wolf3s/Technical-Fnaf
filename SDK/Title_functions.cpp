
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

// Function Title.Title_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTitle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Title.Title_C.Construct");

	UTitle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Title.Title_C.PlayAnim
// (BlueprintCallable, BlueprintEvent)

void UTitle_C::PlayAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Title.Title_C.PlayAnim");

	UTitle_C_PlayAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Title.Title_C.TurnOffPull
// (BlueprintCallable, BlueprintEvent)

void UTitle_C::TurnOffPull()
{
	static auto fn = UObject::FindObject<UFunction>("Function Title.Title_C.TurnOffPull");

	UTitle_C_TurnOffPull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Title.Title_C.OnControllerTrackingChanged
// (BlueprintCallable, BlueprintEvent)

void UTitle_C::OnControllerTrackingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Title.Title_C.OnControllerTrackingChanged");

	UTitle_C_OnControllerTrackingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Title.Title_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTitle_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Title.Title_C.PreConstruct");

	UTitle_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Title.Title_C.FadeStartTrigger
// (BlueprintCallable, BlueprintEvent)

void UTitle_C::FadeStartTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Title.Title_C.FadeStartTrigger");

	UTitle_C_FadeStartTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Title.Title_C.PlayStartTrigger
// (BlueprintCallable, BlueprintEvent)

void UTitle_C::PlayStartTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Title.Title_C.PlayStartTrigger");

	UTitle_C_PlayStartTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Title.Title_C.ExecuteUbergraph_Title
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTitle_C::ExecuteUbergraph_Title(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Title.Title_C.ExecuteUbergraph_Title");

	UTitle_C_ExecuteUbergraph_Title_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
