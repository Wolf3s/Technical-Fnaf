
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

// Function TitleMain.TitleMain_C.OnFailure_6E3BC4714E336821AD8BD18F78B73FDB
// (BlueprintCallable, BlueprintEvent)

void ATitleMain_C::OnFailure_6E3BC4714E336821AD8BD18F78B73FDB()
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleMain.TitleMain_C.OnFailure_6E3BC4714E336821AD8BD18F78B73FDB");

	ATitleMain_C_OnFailure_6E3BC4714E336821AD8BD18F78B73FDB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TitleMain.TitleMain_C.OnSuccess_6E3BC4714E336821AD8BD18F78B73FDB
// (BlueprintCallable, BlueprintEvent)

void ATitleMain_C::OnSuccess_6E3BC4714E336821AD8BD18F78B73FDB()
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleMain.TitleMain_C.OnSuccess_6E3BC4714E336821AD8BD18F78B73FDB");

	ATitleMain_C_OnSuccess_6E3BC4714E336821AD8BD18F78B73FDB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TitleMain.TitleMain_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATitleMain_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleMain.TitleMain_C.ReceiveBeginPlay");

	ATitleMain_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TitleMain.TitleMain_C.ExecuteUbergraph_TitleMain
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATitleMain_C::ExecuteUbergraph_TitleMain(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleMain.TitleMain_C.ExecuteUbergraph_TitleMain");

	ATitleMain_C_ExecuteUbergraph_TitleMain_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
