
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

// Function Instructions_Plushbaby.Instructions_Plushbaby_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInstructions_Plushbaby_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_Plushbaby.Instructions_Plushbaby_C.Construct");

	UInstructions_Plushbaby_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_Plushbaby.Instructions_Plushbaby_C.OnControllerTrackingChanged
// (BlueprintCallable, BlueprintEvent)

void UInstructions_Plushbaby_C::OnControllerTrackingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_Plushbaby.Instructions_Plushbaby_C.OnControllerTrackingChanged");

	UInstructions_Plushbaby_C_OnControllerTrackingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_Plushbaby.Instructions_Plushbaby_C.ExecuteUbergraph_Instructions_Plushbaby
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInstructions_Plushbaby_C::ExecuteUbergraph_Instructions_Plushbaby(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_Plushbaby.Instructions_Plushbaby_C.ExecuteUbergraph_Instructions_Plushbaby");

	UInstructions_Plushbaby_C_ExecuteUbergraph_Instructions_Plushbaby_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
