
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

// Function Instructions_Freddy_02.Instructions_Freddy_02_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInstructions_Freddy_02_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_Freddy_02.Instructions_Freddy_02_C.Construct");

	UInstructions_Freddy_02_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_Freddy_02.Instructions_Freddy_02_C.OnControllerTrackingChanged
// (BlueprintCallable, BlueprintEvent)

void UInstructions_Freddy_02_C::OnControllerTrackingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_Freddy_02.Instructions_Freddy_02_C.OnControllerTrackingChanged");

	UInstructions_Freddy_02_C_OnControllerTrackingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Instructions_Freddy_02.Instructions_Freddy_02_C.ExecuteUbergraph_Instructions_Freddy_02
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInstructions_Freddy_02_C::ExecuteUbergraph_Instructions_Freddy_02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Instructions_Freddy_02.Instructions_Freddy_02_C.ExecuteUbergraph_Instructions_Freddy_02");

	UInstructions_Freddy_02_C_ExecuteUbergraph_Instructions_Freddy_02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
