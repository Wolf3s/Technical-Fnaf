
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

// Function Baloons.Baloons_C.PickRandomBaloonColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BaloonID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABaloons_C::PickRandomBaloonColor(int BaloonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Baloons.Baloons_C.PickRandomBaloonColor");

	ABaloons_C_PickRandomBaloonColor_Params params;
	params.BaloonID = BaloonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Baloons.Baloons_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABaloons_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Baloons.Baloons_C.UserConstructionScript");

	ABaloons_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Baloons.Baloons_C.nightmare mode triggered
// (BlueprintCallable, BlueprintEvent)

void ABaloons_C::nightmare_mode_triggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Baloons.Baloons_C.nightmare mode triggered");

	ABaloons_C_nightmare_mode_triggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Baloons.Baloons_C.Nightmare Mode Disabled
// (BlueprintCallable, BlueprintEvent)

void ABaloons_C::Nightmare_Mode_Disabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Baloons.Baloons_C.Nightmare Mode Disabled");

	ABaloons_C_Nightmare_Mode_Disabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Baloons.Baloons_C.ExecuteUbergraph_Baloons
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABaloons_C::ExecuteUbergraph_Baloons(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Baloons.Baloons_C.ExecuteUbergraph_Baloons");

	ABaloons_C_ExecuteUbergraph_Baloons_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
