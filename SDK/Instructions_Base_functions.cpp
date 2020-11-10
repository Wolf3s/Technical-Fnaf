
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

// Function Instructions_Base.Instructions_Base_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInstructions_Base_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_Base.Instructions_Base_C.PreConstruct");

	UInstructions_Base_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_Base.Instructions_Base_C.TriggerPullWidget
// (BlueprintCallable, BlueprintEvent)

void UInstructions_Base_C::TriggerPullWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_Base.Instructions_Base_C.TriggerPullWidget");

	UInstructions_Base_C_TriggerPullWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_Base.Instructions_Base_C.On Controller Tracking Changed
// (BlueprintCallable, BlueprintEvent)

void UInstructions_Base_C::On_Controller_Tracking_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_Base.Instructions_Base_C.On Controller Tracking Changed");

	UInstructions_Base_C_On_Controller_Tracking_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_Base.Instructions_Base_C.Setup With Skip
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    FramesToSkip                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UInstructions_Base_C::Setup_With_Skip(TArray<int> FramesToSkip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_Base.Instructions_Base_C.Setup With Skip");

	UInstructions_Base_C_Setup_With_Skip_Params params;
	params.FramesToSkip = FramesToSkip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_Base.Instructions_Base_C.TriggerPullWidgetReverse
// (BlueprintCallable, BlueprintEvent)

void UInstructions_Base_C::TriggerPullWidgetReverse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_Base.Instructions_Base_C.TriggerPullWidgetReverse");

	UInstructions_Base_C_TriggerPullWidgetReverse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_Base.Instructions_Base_C.Setup Inputs
// (BlueprintCallable, BlueprintEvent)

void UInstructions_Base_C::Setup_Inputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_Base.Instructions_Base_C.Setup Inputs");

	UInstructions_Base_C_Setup_Inputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_Base.Instructions_Base_C.Setup Without Skip
// (BlueprintCallable, BlueprintEvent)

void UInstructions_Base_C::Setup_Without_Skip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_Base.Instructions_Base_C.Setup Without Skip");

	UInstructions_Base_C_Setup_Without_Skip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_Base.Instructions_Base_C.Update Displays
// (BlueprintCallable, BlueprintEvent)

void UInstructions_Base_C::Update_Displays()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_Base.Instructions_Base_C.Update Displays");

	UInstructions_Base_C_Update_Displays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_Base.Instructions_Base_C.ExecuteUbergraph_Instructions_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInstructions_Base_C::ExecuteUbergraph_Instructions_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_Base.Instructions_Base_C.ExecuteUbergraph_Instructions_Base");

	UInstructions_Base_C_ExecuteUbergraph_Instructions_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
