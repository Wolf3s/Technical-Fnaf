
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

// Function NonVRTraceInteractible.NonVRTraceInteractible_C.OnNonVRLineTraceInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASaul_MotionControllerPawn_C* MotionControllerPawn           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Hit_Actor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNonVRTraceInteractible_C::OnNonVRLineTraceInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class USceneComponent* HitComponent, class AActor* Hit_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVRTraceInteractible.NonVRTraceInteractible_C.OnNonVRLineTraceInteract");

	UNonVRTraceInteractible_C_OnNonVRLineTraceInteract_Params params;
	params.MotionControllerPawn = MotionControllerPawn;
	params.HitComponent = HitComponent;
	params.Hit_Actor = Hit_Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
