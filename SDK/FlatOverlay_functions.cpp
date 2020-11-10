
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

// Function FlatOverlay.FlatOverlay_C.GetFaceButtonDefaults
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   FaceButtonLeft                 (Parm, OutParm)
// struct FText                   FaceButtonRight                (Parm, OutParm)
// struct FText                   FaceButtonBottom               (Parm, OutParm)

void UFlatOverlay_C::GetFaceButtonDefaults(struct FText* FaceButtonLeft, struct FText* FaceButtonRight, struct FText* FaceButtonBottom)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.GetFaceButtonDefaults");

	UFlatOverlay_C_GetFaceButtonDefaults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FaceButtonLeft != nullptr)
		*FaceButtonLeft = params.FaceButtonLeft;
	if (FaceButtonRight != nullptr)
		*FaceButtonRight = params.FaceButtonRight;
	if (FaceButtonBottom != nullptr)
		*FaceButtonBottom = params.FaceButtonBottom;
}


// Function FlatOverlay.FlatOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFlatOverlay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.Construct");

	UFlatOverlay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlatOverlay.FlatOverlay_C.Setup Held Display
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TEnumAsByte<EControllerButtonsEnum>> AvailableButtons               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFlatOverlay_C::Setup_Held_Display(TArray<TEnumAsByte<EControllerButtonsEnum>> AvailableButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.Setup Held Display");

	UFlatOverlay_C_Setup_Held_Display_Params params;
	params.AvailableButtons = AvailableButtons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlatOverlay.FlatOverlay_C.ShowViewMode
// (BlueprintCallable, BlueprintEvent)

void UFlatOverlay_C::ShowViewMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.ShowViewMode");

	UFlatOverlay_C_ShowViewMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlatOverlay.FlatOverlay_C.Set Face Button Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Left_Button                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Right_Button                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Bottom_Button                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UFlatOverlay_C::Set_Face_Button_Text(const struct FText& Left_Button, const struct FText& Right_Button, const struct FText& Bottom_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.Set Face Button Text");

	UFlatOverlay_C_Set_Face_Button_Text_Params params;
	params.Left_Button = Left_Button;
	params.Right_Button = Right_Button;
	params.Bottom_Button = Bottom_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlatOverlay.FlatOverlay_C.Set Face Button Text To Default
// (BlueprintCallable, BlueprintEvent)

void UFlatOverlay_C::Set_Face_Button_Text_To_Default()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.Set Face Button Text To Default");

	UFlatOverlay_C_Set_Face_Button_Text_To_Default_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlatOverlay.FlatOverlay_C.Put Away Held Info
// (BlueprintCallable, BlueprintEvent)

void UFlatOverlay_C::Put_Away_Held_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.Put Away Held Info");

	UFlatOverlay_C_Put_Away_Held_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlatOverlay.FlatOverlay_C.On View Status Anim Finished
// (BlueprintCallable, BlueprintEvent)

void UFlatOverlay_C::On_View_Status_Anim_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.On View Status Anim Finished");

	UFlatOverlay_C_On_View_Status_Anim_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlatOverlay.FlatOverlay_C.Show Look Location
// (BlueprintCallable, BlueprintEvent)

void UFlatOverlay_C::Show_Look_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.Show Look Location");

	UFlatOverlay_C_Show_Look_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlatOverlay.FlatOverlay_C.On Activate Look Finished
// (BlueprintCallable, BlueprintEvent)

void UFlatOverlay_C::On_Activate_Look_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.On Activate Look Finished");

	UFlatOverlay_C_On_Activate_Look_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlatOverlay.FlatOverlay_C.Hide Look Location
// (BlueprintCallable, BlueprintEvent)

void UFlatOverlay_C::Hide_Look_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.Hide Look Location");

	UFlatOverlay_C_Hide_Look_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlatOverlay.FlatOverlay_C.ExecuteUbergraph_FlatOverlay
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlatOverlay_C::ExecuteUbergraph_FlatOverlay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlatOverlay.FlatOverlay_C.ExecuteUbergraph_FlatOverlay");

	UFlatOverlay_C_ExecuteUbergraph_FlatOverlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
