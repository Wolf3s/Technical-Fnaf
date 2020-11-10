
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

// Function HeldActionInfoProvider.HeldActionInfoProvider_C.GetAvailableButtons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TEnumAsByte<EControllerButtonsEnum>> AvailableButtons               (Parm, OutParm, ZeroConstructor)

void UHeldActionInfoProvider_C::GetAvailableButtons(TArray<TEnumAsByte<EControllerButtonsEnum>>* AvailableButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeldActionInfoProvider.HeldActionInfoProvider_C.GetAvailableButtons");

	UHeldActionInfoProvider_C_GetAvailableButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableButtons != nullptr)
		*AvailableButtons = params.AvailableButtons;
}


// Function HeldActionInfoProvider.HeldActionInfoProvider_C.GetHeldActionsText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Left_Text                      (Parm, OutParm)
// struct FText                   Right_Text                     (Parm, OutParm)
// struct FText                   Bottom_Text                    (Parm, OutParm)

void UHeldActionInfoProvider_C::GetHeldActionsText(struct FText* Left_Text, struct FText* Right_Text, struct FText* Bottom_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeldActionInfoProvider.HeldActionInfoProvider_C.GetHeldActionsText");

	UHeldActionInfoProvider_C_GetHeldActionsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Left_Text != nullptr)
		*Left_Text = params.Left_Text;
	if (Right_Text != nullptr)
		*Right_Text = params.Right_Text;
	if (Bottom_Text != nullptr)
		*Bottom_Text = params.Bottom_Text;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
