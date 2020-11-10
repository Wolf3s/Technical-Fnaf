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

// Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnBeginHighlight
struct UMainMenu_LevelButton_C_OnBeginHighlight_Params
{
};

// Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnEndHighlight
struct UMainMenu_LevelButton_C_OnEndHighlight_Params
{
};

// Function MainMenu_LevelButton.MainMenu_LevelButton_C.Initialize_SubGame_Box
struct UMainMenu_LevelButton_C_Initialize_SubGame_Box_Params
{
	struct FText                                       LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  LevelImage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLevelUnlocked;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu_LevelButton.MainMenu_LevelButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UMainMenu_LevelButton_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainMenu_LevelButton.MainMenu_LevelButton_C.PreConstruct
struct UMainMenu_LevelButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu_LevelButton.MainMenu_LevelButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UMainMenu_LevelButton_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MainMenu_LevelButton.MainMenu_LevelButton_C.ExecuteUbergraph_MainMenu_LevelButton
struct UMainMenu_LevelButton_C_ExecuteUbergraph_MainMenu_LevelButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnLevelButtonHovered__DelegateSignature
struct UMainMenu_LevelButton_C_OnLevelButtonHovered__DelegateSignature_Params
{
	int                                                SelectedLevelIndex;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnLevelButtonClicked__DelegateSignature
struct UMainMenu_LevelButton_C_OnLevelButtonClicked__DelegateSignature_Params
{
	int                                                SelectedLevelIndex;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
