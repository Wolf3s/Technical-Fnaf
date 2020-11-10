
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

// Function Level_Title_FLAT.Level_Title_FLAT_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALevel_Title_FLAT_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Level_Title_FLAT.Level_Title_FLAT_C.ReceiveBeginPlay");

	ALevel_Title_FLAT_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Level_Title_FLAT.Level_Title_FLAT_C.ExecuteUbergraph_Level_Title_FLAT
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALevel_Title_FLAT_C::ExecuteUbergraph_Level_Title_FLAT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Level_Title_FLAT.Level_Title_FLAT_C.ExecuteUbergraph_Level_Title_FLAT");

	ALevel_Title_FLAT_C_ExecuteUbergraph_Level_Title_FLAT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
