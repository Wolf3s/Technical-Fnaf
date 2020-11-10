
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

// Function NonVR_CameraRots_BP.NonVR_CameraRots_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANonVR_CameraRots_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NonVR_CameraRots_BP.NonVR_CameraRots_BP_C.UserConstructionScript");

	ANonVR_CameraRots_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
