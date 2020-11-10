
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

// Function PrizeBoxInstructions.PrizeBoxInstructions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPrizeBoxInstructions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrizeBoxInstructions.PrizeBoxInstructions_C.Construct");

	UPrizeBoxInstructions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrizeBoxInstructions.PrizeBoxInstructions_C.ExecuteUbergraph_PrizeBoxInstructions
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrizeBoxInstructions_C::ExecuteUbergraph_PrizeBoxInstructions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrizeBoxInstructions.PrizeBoxInstructions_C.ExecuteUbergraph_PrizeBoxInstructions");

	UPrizeBoxInstructions_C_ExecuteUbergraph_PrizeBoxInstructions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
