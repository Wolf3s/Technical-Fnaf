
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

// Function TitleTurnOn.TitleTurnOn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATitleTurnOn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleTurnOn.TitleTurnOn_C.UserConstructionScript");

	ATitleTurnOn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TitleTurnOn.TitleTurnOn_C.VR__FinishedFunc
// (BlueprintEvent)

void ATitleTurnOn_C::VR__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleTurnOn.TitleTurnOn_C.VR__FinishedFunc");

	ATitleTurnOn_C_VR__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TitleTurnOn.TitleTurnOn_C.VR__UpdateFunc
// (BlueprintEvent)

void ATitleTurnOn_C::VR__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleTurnOn.TitleTurnOn_C.VR__UpdateFunc");

	ATitleTurnOn_C_VR__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TitleTurnOn.TitleTurnOn_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ATitleTurnOn_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleTurnOn.TitleTurnOn_C.Timeline_0__FinishedFunc");

	ATitleTurnOn_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TitleTurnOn.TitleTurnOn_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ATitleTurnOn_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleTurnOn.TitleTurnOn_C.Timeline_0__UpdateFunc");

	ATitleTurnOn_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TitleTurnOn.TitleTurnOn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATitleTurnOn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleTurnOn.TitleTurnOn_C.ReceiveBeginPlay");

	ATitleTurnOn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TitleTurnOn.TitleTurnOn_C.TriggerSequence
// (BlueprintCallable, BlueprintEvent)

void ATitleTurnOn_C::TriggerSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleTurnOn.TitleTurnOn_C.TriggerSequence");

	ATitleTurnOn_C_TriggerSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TitleTurnOn.TitleTurnOn_C.ExecuteUbergraph_TitleTurnOn
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATitleTurnOn_C::ExecuteUbergraph_TitleTurnOn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleTurnOn.TitleTurnOn_C.ExecuteUbergraph_TitleTurnOn");

	ATitleTurnOn_C_ExecuteUbergraph_TitleTurnOn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
