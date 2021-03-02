#pragma once

#include "../SDK.h"

// Name: Freddys, Version: 4.2.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function EdibleInterface.EdibleInterface_C.OnActorEaten
struct UEdibleInterface_C_OnActorEaten_Params
{
	class ASaul_MotionControllerPawn_C*                Eater;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EdibleInterface.EdibleInterface_C.GetEdibleType
struct UEdibleInterface_C_GetEdibleType_Params
{
	TEnumAsByte<EdibleEnum>                            EdibleType;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
