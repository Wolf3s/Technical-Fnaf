
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

// Function FinaleCredits.FinaleCredits_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFinaleCredits_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FinaleCredits.FinaleCredits_C.Construct");

	UFinaleCredits_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FinaleCredits.FinaleCredits_C.PlayCredits
// (BlueprintCallable, BlueprintEvent)

void UFinaleCredits_C::PlayCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function FinaleCredits.FinaleCredits_C.PlayCredits");

	UFinaleCredits_C_PlayCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FinaleCredits.FinaleCredits_C.ExecuteUbergraph_FinaleCredits
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFinaleCredits_C::ExecuteUbergraph_FinaleCredits(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FinaleCredits.FinaleCredits_C.ExecuteUbergraph_FinaleCredits");

	UFinaleCredits_C_ExecuteUbergraph_FinaleCredits_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
