
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

// Function Main_Menu.Main_Menu_C.SetReftoHand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASaul_BP_MotionController_C* Refto                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMain_Menu_C::SetReftoHand(class ASaul_BP_MotionController_C* Refto)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.SetReftoHand");

	UMain_Menu_C_SetReftoHand_Params params;
	params.Refto = Refto;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.ChangeSelectedLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selected_Level_Index           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMain_Menu_C::ChangeSelectedLevel(int Selected_Level_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.ChangeSelectedLevel");

	UMain_Menu_C_ChangeSelectedLevel_Params params;
	params.Selected_Level_Index = Selected_Level_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.UpdateTickStatus
// (Public, BlueprintCallable, BlueprintEvent)

void UMain_Menu_C::UpdateTickStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.UpdateTickStatus");

	UMain_Menu_C_UpdateTickStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.UpdateGameTypeDisplays
// (Public, BlueprintCallable, BlueprintEvent)

void UMain_Menu_C::UpdateGameTypeDisplays()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.UpdateGameTypeDisplays");

	UMain_Menu_C_UpdateGameTypeDisplays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.IncrementSelectedLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMain_Menu_C::IncrementSelectedLevel(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.IncrementSelectedLevel");

	UMain_Menu_C_IncrementSelectedLevel_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.GatherGameLevels
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMain_Menu_C::GatherGameLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.GatherGameLevels");

	UMain_Menu_C_GatherGameLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.UpdateLevelButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UMain_Menu_C::UpdateLevelButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.UpdateLevelButtons");

	UMain_Menu_C_UpdateLevelButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.ChangeGameMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMain_Menu_C::ChangeGameMode(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.ChangeGameMode");

	UMain_Menu_C_ChangeGameMode_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.LoadSelectedLevel
// (Public, BlueprintCallable, BlueprintEvent)

void UMain_Menu_C::LoadSelectedLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.LoadSelectedLevel");

	UMain_Menu_C_LoadSelectedLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMain_Menu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.Construct");

	UMain_Menu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.Enter
// (BlueprintCallable, BlueprintEvent)

void UMain_Menu_C::Enter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.Enter");

	UMain_Menu_C_Enter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.Up
// (BlueprintCallable, BlueprintEvent)

void UMain_Menu_C::Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.Up");

	UMain_Menu_C_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.Down
// (BlueprintCallable, BlueprintEvent)

void UMain_Menu_C::Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.Down");

	UMain_Menu_C_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.Left
// (BlueprintCallable, BlueprintEvent)

void UMain_Menu_C::Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.Left");

	UMain_Menu_C_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.Right
// (BlueprintCallable, BlueprintEvent)

void UMain_Menu_C::Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.Right");

	UMain_Menu_C_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.AnyButtonPress
// (BlueprintCallable, BlueprintEvent)

void UMain_Menu_C::AnyButtonPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.AnyButtonPress");

	UMain_Menu_C_AnyButtonPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.UpdateCoinDisplay
// (BlueprintCallable, BlueprintEvent)

void UMain_Menu_C::UpdateCoinDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.UpdateCoinDisplay");

	UMain_Menu_C_UpdateCoinDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.OnNightmareModeSwitched
// (BlueprintCallable, BlueprintEvent)

void UMain_Menu_C::OnNightmareModeSwitched()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.OnNightmareModeSwitched");

	UMain_Menu_C_OnNightmareModeSwitched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.ActivateScreenPressed
// (BlueprintCallable, BlueprintEvent)

void UMain_Menu_C::ActivateScreenPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.ActivateScreenPressed");

	UMain_Menu_C_ActivateScreenPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMain_Menu_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UMain_Menu_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMain_Menu_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UMain_Menu_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.OnConfirmComplete
// (BlueprintCallable, BlueprintEvent)

void UMain_Menu_C::OnConfirmComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.OnConfirmComplete");

	UMain_Menu_C_OnConfirmComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMain_Menu_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.PreConstruct");

	UMain_Menu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.ChangeDLCType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFNAFDLCType                   DLCType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMain_Menu_C::ChangeDLCType(EFNAFDLCType DLCType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.ChangeDLCType");

	UMain_Menu_C_ChangeDLCType_Params params;
	params.DLCType = DLCType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.PageLeft
// (BlueprintCallable, BlueprintEvent)

void UMain_Menu_C::PageLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.PageLeft");

	UMain_Menu_C_PageLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.PageRight
// (BlueprintCallable, BlueprintEvent)

void UMain_Menu_C::PageRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.PageRight");

	UMain_Menu_C_PageRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.Setup Level Buttons
// (BlueprintCallable, BlueprintEvent)

void UMain_Menu_C::Setup_Level_Buttons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.Setup Level Buttons");

	UMain_Menu_C_Setup_Level_Buttons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.OnLevelClickedWithMouse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedLevelIndex             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMain_Menu_C::OnLevelClickedWithMouse(int SelectedLevelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.OnLevelClickedWithMouse");

	UMain_Menu_C_OnLevelClickedWithMouse_Params params;
	params.SelectedLevelIndex = SelectedLevelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Main_Menu.Main_Menu_C.ExecuteUbergraph_Main_Menu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMain_Menu_C::ExecuteUbergraph_Main_Menu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.ExecuteUbergraph_Main_Menu");

	UMain_Menu_C_ExecuteUbergraph_Main_Menu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
