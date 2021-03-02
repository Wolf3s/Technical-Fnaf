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

// Function HeldActionInfoProvider.HeldActionInfoProvider_C.GetAvailableButtons
struct UHeldActionInfoProvider_C_GetAvailableButtons_Params
{
	TArray<TEnumAsByte<EControllerButtonsEnum>>        AvailableButtons;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function HeldActionInfoProvider.HeldActionInfoProvider_C.GetHeldActionsText
struct UHeldActionInfoProvider_C_GetHeldActionsText_Params
{
	struct FText                                       Left_Text;                                                // (Parm, OutParm)
	struct FText                                       Right_Text;                                               // (Parm, OutParm)
	struct FText                                       Bottom_Text;                                              // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
