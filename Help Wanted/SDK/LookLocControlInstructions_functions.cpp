
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

// Function LookLocControlInstructions.LookLocControlInstructions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULookLocControlInstructions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LookLocControlInstructions.LookLocControlInstructions_C.Construct");

	ULookLocControlInstructions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LookLocControlInstructions.LookLocControlInstructions_C.ExecuteUbergraph_LookLocControlInstructions
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULookLocControlInstructions_C::ExecuteUbergraph_LookLocControlInstructions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LookLocControlInstructions.LookLocControlInstructions_C.ExecuteUbergraph_LookLocControlInstructions");

	ULookLocControlInstructions_C_ExecuteUbergraph_LookLocControlInstructions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
