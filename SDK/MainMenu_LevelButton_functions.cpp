
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

// Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnBeginHighlight
// (BlueprintCallable, BlueprintEvent)

void UMainMenu_LevelButton_C::OnBeginHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnBeginHighlight");

	UMainMenu_LevelButton_C_OnBeginHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnEndHighlight
// (BlueprintCallable, BlueprintEvent)

void UMainMenu_LevelButton_C::OnEndHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnEndHighlight");

	UMainMenu_LevelButton_C_OnEndHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_LevelButton.MainMenu_LevelButton_C.Initialize_SubGame_Box
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              LevelImage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLevelUnlocked                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_LevelButton_C::Initialize_SubGame_Box(const struct FText& LevelName, class UTexture2D* LevelImage, bool IsLevelUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_LevelButton.MainMenu_LevelButton_C.Initialize_SubGame_Box");

	UMainMenu_LevelButton_C_Initialize_SubGame_Box_Params params;
	params.LevelName = LevelName;
	params.LevelImage = LevelImage;
	params.IsLevelUnlocked = IsLevelUnlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_LevelButton.MainMenu_LevelButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainMenu_LevelButton_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_LevelButton.MainMenu_LevelButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UMainMenu_LevelButton_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_LevelButton.MainMenu_LevelButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_LevelButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_LevelButton.MainMenu_LevelButton_C.PreConstruct");

	UMainMenu_LevelButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_LevelButton.MainMenu_LevelButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMainMenu_LevelButton_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_LevelButton.MainMenu_LevelButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UMainMenu_LevelButton_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_LevelButton.MainMenu_LevelButton_C.ExecuteUbergraph_MainMenu_LevelButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_LevelButton_C::ExecuteUbergraph_MainMenu_LevelButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_LevelButton.MainMenu_LevelButton_C.ExecuteUbergraph_MainMenu_LevelButton");

	UMainMenu_LevelButton_C_ExecuteUbergraph_MainMenu_LevelButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnLevelButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedLevelIndex             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_LevelButton_C::OnLevelButtonHovered__DelegateSignature(int SelectedLevelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnLevelButtonHovered__DelegateSignature");

	UMainMenu_LevelButton_C_OnLevelButtonHovered__DelegateSignature_Params params;
	params.SelectedLevelIndex = SelectedLevelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnLevelButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedLevelIndex             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_LevelButton_C::OnLevelButtonClicked__DelegateSignature(int SelectedLevelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_LevelButton.MainMenu_LevelButton_C.OnLevelButtonClicked__DelegateSignature");

	UMainMenu_LevelButton_C_OnLevelButtonClicked__DelegateSignature_Params params;
	params.SelectedLevelIndex = SelectedLevelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
