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

// Function Main_Menu.Main_Menu_C.SetReftoHand
struct UMain_Menu_C_SetReftoHand_Params
{
	class ASaul_BP_MotionController_C*                 Refto;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Main_Menu.Main_Menu_C.ChangeSelectedLevel
struct UMain_Menu_C_ChangeSelectedLevel_Params
{
	int                                                Selected_Level_Index;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Main_Menu.Main_Menu_C.UpdateTickStatus
struct UMain_Menu_C_UpdateTickStatus_Params
{
};

// Function Main_Menu.Main_Menu_C.UpdateGameTypeDisplays
struct UMain_Menu_C_UpdateGameTypeDisplays_Params
{
};

// Function Main_Menu.Main_Menu_C.IncrementSelectedLevel
struct UMain_Menu_C_IncrementSelectedLevel_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Main_Menu.Main_Menu_C.GatherGameLevels
struct UMain_Menu_C_GatherGameLevels_Params
{
};

// Function Main_Menu.Main_Menu_C.UpdateLevelButtons
struct UMain_Menu_C_UpdateLevelButtons_Params
{
};

// Function Main_Menu.Main_Menu_C.ChangeGameMode
struct UMain_Menu_C_ChangeGameMode_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Main_Menu.Main_Menu_C.LoadSelectedLevel
struct UMain_Menu_C_LoadSelectedLevel_Params
{
};

// Function Main_Menu.Main_Menu_C.Construct
struct UMain_Menu_C_Construct_Params
{
};

// Function Main_Menu.Main_Menu_C.Enter
struct UMain_Menu_C_Enter_Params
{
};

// Function Main_Menu.Main_Menu_C.Up
struct UMain_Menu_C_Up_Params
{
};

// Function Main_Menu.Main_Menu_C.Down
struct UMain_Menu_C_Down_Params
{
};

// Function Main_Menu.Main_Menu_C.Left
struct UMain_Menu_C_Left_Params
{
};

// Function Main_Menu.Main_Menu_C.Right
struct UMain_Menu_C_Right_Params
{
};

// Function Main_Menu.Main_Menu_C.AnyButtonPress
struct UMain_Menu_C_AnyButtonPress_Params
{
};

// Function Main_Menu.Main_Menu_C.UpdateCoinDisplay
struct UMain_Menu_C_UpdateCoinDisplay_Params
{
};

// Function Main_Menu.Main_Menu_C.OnNightmareModeSwitched
struct UMain_Menu_C_OnNightmareModeSwitched_Params
{
};

// Function Main_Menu.Main_Menu_C.ActivateScreenPressed
struct UMain_Menu_C_ActivateScreenPressed_Params
{
};

// Function Main_Menu.Main_Menu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UMain_Menu_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Main_Menu.Main_Menu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UMain_Menu_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Main_Menu.Main_Menu_C.OnConfirmComplete
struct UMain_Menu_C_OnConfirmComplete_Params
{
};

// Function Main_Menu.Main_Menu_C.PreConstruct
struct UMain_Menu_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Main_Menu.Main_Menu_C.ChangeDLCType
struct UMain_Menu_C_ChangeDLCType_Params
{
	EFNAFDLCType                                       DLCType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Main_Menu.Main_Menu_C.PageLeft
struct UMain_Menu_C_PageLeft_Params
{
};

// Function Main_Menu.Main_Menu_C.PageRight
struct UMain_Menu_C_PageRight_Params
{
};

// Function Main_Menu.Main_Menu_C.Setup Level Buttons
struct UMain_Menu_C_Setup_Level_Buttons_Params
{
};

// Function Main_Menu.Main_Menu_C.OnLevelClickedWithMouse
struct UMain_Menu_C_OnLevelClickedWithMouse_Params
{
	int                                                SelectedLevelIndex;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Main_Menu.Main_Menu_C.ExecuteUbergraph_Main_Menu
struct UMain_Menu_C_ExecuteUbergraph_Main_Menu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
