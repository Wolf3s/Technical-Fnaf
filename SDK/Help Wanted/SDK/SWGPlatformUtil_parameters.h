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

// Function SWGPlatformUtil.SWGPlatformUtilFunctions.SwitchOnPlatform
struct USWGPlatformUtilFunctions_SwitchOnPlatform_Params
{
	ESWGPlatform                                       Platform;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditorSwitch
struct USWGPlatformUtilFunctions_IsInEditorSwitch_Params
{
	ESWGEditor                                         Editor;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SWGPlatformUtil.SWGPlatformUtilFunctions.IsInEditor
struct USWGPlatformUtilFunctions_IsInEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetVersionString
struct USWGPlatformUtilFunctions_GetVersionString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SWGPlatformUtil.SWGPlatformUtilFunctions.GetBuildPlatform
struct USWGPlatformUtilFunctions_GetBuildPlatform_Params
{
	ESWGPlatform                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
