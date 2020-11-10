
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

// Function NightTerrorDoorInstructions.NightTerrorDoorInstructions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNightTerrorDoorInstructions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTerrorDoorInstructions.NightTerrorDoorInstructions_C.Construct");

	UNightTerrorDoorInstructions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightTerrorDoorInstructions.NightTerrorDoorInstructions_C.ExecuteUbergraph_NightTerrorDoorInstructions
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNightTerrorDoorInstructions_C::ExecuteUbergraph_NightTerrorDoorInstructions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTerrorDoorInstructions.NightTerrorDoorInstructions_C.ExecuteUbergraph_NightTerrorDoorInstructions");

	UNightTerrorDoorInstructions_C_ExecuteUbergraph_NightTerrorDoorInstructions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
