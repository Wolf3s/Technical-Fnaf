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

// Function NonVRCrosshair.NonVRCrosshair_C.Get_Center_Brush_1
struct UNonVRCrosshair_C_Get_Center_Brush_1_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NonVRCrosshair.NonVRCrosshair_C.Tick
struct UNonVRCrosshair_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NonVRCrosshair.NonVRCrosshair_C.RecticleLookAt
struct UNonVRCrosshair_C_RecticleLookAt_Params
{
};

// Function NonVRCrosshair.NonVRCrosshair_C.RecticleReset
struct UNonVRCrosshair_C_RecticleReset_Params
{
};

// Function NonVRCrosshair.NonVRCrosshair_C.ReticleInteract
struct UNonVRCrosshair_C_ReticleInteract_Params
{
};

// Function NonVRCrosshair.NonVRCrosshair_C.ExecuteUbergraph_NonVRCrosshair
struct UNonVRCrosshair_C_ExecuteUbergraph_NonVRCrosshair_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
