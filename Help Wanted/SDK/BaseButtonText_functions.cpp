
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

// Function BaseButtonText.BaseButtonText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBaseButtonText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseButtonText.BaseButtonText_C.Construct");

	UBaseButtonText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseButtonText.BaseButtonText_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBaseButtonText_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseButtonText.BaseButtonText_C.Tick");

	UBaseButtonText_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseButtonText.BaseButtonText_C.ExecuteUbergraph_BaseButtonText
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBaseButtonText_C::ExecuteUbergraph_BaseButtonText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseButtonText.BaseButtonText_C.ExecuteUbergraph_BaseButtonText");

	UBaseButtonText_C_ExecuteUbergraph_BaseButtonText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
