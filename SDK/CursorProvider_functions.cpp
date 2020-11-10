
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

// Function CursorProvider.CursorProvider_C.GetHoverCursorState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECursorState>      CursorState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCursorProvider_C::GetHoverCursorState(TEnumAsByte<ECursorState>* CursorState)
{
	static auto fn = UObject::FindObject<UFunction>("Function CursorProvider.CursorProvider_C.GetHoverCursorState");

	UCursorProvider_C_GetHoverCursorState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CursorState != nullptr)
		*CursorState = params.CursorState;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
