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

// Function FlatOverlay.FlatOverlay_C.GetFaceButtonDefaults
struct UFlatOverlay_C_GetFaceButtonDefaults_Params
{
	struct FText                                       FaceButtonLeft;                                           // (Parm, OutParm)
	struct FText                                       FaceButtonRight;                                          // (Parm, OutParm)
	struct FText                                       FaceButtonBottom;                                         // (Parm, OutParm)
};

// Function FlatOverlay.FlatOverlay_C.Construct
struct UFlatOverlay_C_Construct_Params
{
};

// Function FlatOverlay.FlatOverlay_C.Setup Held Display
struct UFlatOverlay_C_Setup_Held_Display_Params
{
	TArray<TEnumAsByte<EControllerButtonsEnum>>        AvailableButtons;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function FlatOverlay.FlatOverlay_C.ShowViewMode
struct UFlatOverlay_C_ShowViewMode_Params
{
};

// Function FlatOverlay.FlatOverlay_C.Set Face Button Text
struct UFlatOverlay_C_Set_Face_Button_Text_Params
{
	struct FText                                       Left_Button;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Right_Button;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Bottom_Button;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FlatOverlay.FlatOverlay_C.Set Face Button Text To Default
struct UFlatOverlay_C_Set_Face_Button_Text_To_Default_Params
{
};

// Function FlatOverlay.FlatOverlay_C.Put Away Held Info
struct UFlatOverlay_C_Put_Away_Held_Info_Params
{
};

// Function FlatOverlay.FlatOverlay_C.On View Status Anim Finished
struct UFlatOverlay_C_On_View_Status_Anim_Finished_Params
{
};

// Function FlatOverlay.FlatOverlay_C.Show Look Location
struct UFlatOverlay_C_Show_Look_Location_Params
{
};

// Function FlatOverlay.FlatOverlay_C.On Activate Look Finished
struct UFlatOverlay_C_On_Activate_Look_Finished_Params
{
};

// Function FlatOverlay.FlatOverlay_C.Hide Look Location
struct UFlatOverlay_C_Hide_Look_Location_Params
{
};

// Function FlatOverlay.FlatOverlay_C.ExecuteUbergraph_FlatOverlay
struct UFlatOverlay_C_ExecuteUbergraph_FlatOverlay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
