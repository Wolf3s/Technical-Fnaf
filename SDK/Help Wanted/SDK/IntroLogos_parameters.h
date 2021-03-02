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

// Function IntroLogos.IntroLogos_C.ChangeVisible
struct UIntroLogos_C_ChangeVisible_Params
{
	int                                                WidgetIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IntroLogos.IntroLogos_C.Construct
struct UIntroLogos_C_Construct_Params
{
};

// Function IntroLogos.IntroLogos_C.Fades
struct UIntroLogos_C_Fades_Params
{
	float                                              Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IntroLogos.IntroLogos_C.ExecuteUbergraph_IntroLogos
struct UIntroLogos_C_ExecuteUbergraph_IntroLogos_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
