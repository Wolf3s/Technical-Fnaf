
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

// Function IntroLogos.IntroLogos_C.ChangeVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WidgetIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIntroLogos_C::ChangeVisible(int WidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroLogos.IntroLogos_C.ChangeVisible");

	UIntroLogos_C_ChangeVisible_Params params;
	params.WidgetIndex = WidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroLogos.IntroLogos_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIntroLogos_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroLogos.IntroLogos_C.Construct");

	UIntroLogos_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroLogos.IntroLogos_C.Fades
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIntroLogos_C::Fades(float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroLogos.IntroLogos_C.Fades");

	UIntroLogos_C_Fades_Params params;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IntroLogos.IntroLogos_C.ExecuteUbergraph_IntroLogos
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIntroLogos_C::ExecuteUbergraph_IntroLogos(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IntroLogos.IntroLogos_C.ExecuteUbergraph_IntroLogos");

	UIntroLogos_C_ExecuteUbergraph_IntroLogos_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
