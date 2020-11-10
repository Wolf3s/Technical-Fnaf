
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

// Function LoadingGraphic.LoadingGraphic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoadingGraphic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadingGraphic.LoadingGraphic_C.Construct");

	ULoadingGraphic_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadingGraphic.LoadingGraphic_C.ExecuteUbergraph_LoadingGraphic
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoadingGraphic_C::ExecuteUbergraph_LoadingGraphic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadingGraphic.LoadingGraphic_C.ExecuteUbergraph_LoadingGraphic");

	ULoadingGraphic_C_ExecuteUbergraph_LoadingGraphic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
