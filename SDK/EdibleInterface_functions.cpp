
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

// Function EdibleInterface.EdibleInterface_C.OnActorEaten
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASaul_MotionControllerPawn_C* Eater                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEdibleInterface_C::OnActorEaten(class ASaul_MotionControllerPawn_C* Eater)
{
	static auto fn = UObject::FindObject<UFunction>("Function EdibleInterface.EdibleInterface_C.OnActorEaten");

	UEdibleInterface_C_OnActorEaten_Params params;
	params.Eater = Eater;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EdibleInterface.EdibleInterface_C.GetEdibleType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EdibleEnum>        EdibleType                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEdibleInterface_C::GetEdibleType(TEnumAsByte<EdibleEnum>* EdibleType)
{
	static auto fn = UObject::FindObject<UFunction>("Function EdibleInterface.EdibleInterface_C.GetEdibleType");

	UEdibleInterface_C_GetEdibleType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EdibleType != nullptr)
		*EdibleType = params.EdibleType;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
