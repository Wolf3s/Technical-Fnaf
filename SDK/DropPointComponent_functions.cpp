
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

// Function DropPointComponent.DropPointComponent_C.IsGrabbableValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  GrabbableActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDropPointComponent_C::IsGrabbableValid(class AActor* GrabbableActor, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropPointComponent.DropPointComponent_C.IsGrabbableValid");

	UDropPointComponent_C_IsGrabbableValid_Params params;
	params.GrabbableActor = GrabbableActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
