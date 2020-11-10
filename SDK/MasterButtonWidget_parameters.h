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

// Function MasterButtonWidget.MasterButtonWidget_C.PreConstruct
struct UMasterButtonWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MasterButtonWidget.MasterButtonWidget_C.Construct
struct UMasterButtonWidget_C_Construct_Params
{
};

// Function MasterButtonWidget.MasterButtonWidget_C.SetText
struct UMasterButtonWidget_C_SetText_Params
{
	struct FText                                       ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MasterButtonWidget.MasterButtonWidget_C.ExecuteUbergraph_MasterButtonWidget
struct UMasterButtonWidget_C_ExecuteUbergraph_MasterButtonWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
