
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

// Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_GameType_Button_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.PreConstruct");

	UMainMenu_GameType_Button_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainMenu_GameType_Button_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.Construct");

	UMainMenu_GameType_Button_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.OnBeginHover
// (BlueprintCallable, BlueprintEvent)

void UMainMenu_GameType_Button_C::OnBeginHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.OnBeginHover");

	UMainMenu_GameType_Button_C_OnBeginHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.OnEndHover
// (BlueprintCallable, BlueprintEvent)

void UMainMenu_GameType_Button_C::OnEndHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.OnEndHover");

	UMainMenu_GameType_Button_C_OnEndHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.ExecuteUbergraph_MainMenu_GameType_Button
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_GameType_Button_C::ExecuteUbergraph_MainMenu_GameType_Button(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.ExecuteUbergraph_MainMenu_GameType_Button");

	UMainMenu_GameType_Button_C_ExecuteUbergraph_MainMenu_GameType_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.OnGameModeClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*        GameMode_Button                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_GameType_Button_C::OnGameModeClicked__DelegateSignature(class UWidgetComponent* GameMode_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu_GameType_Button.MainMenu_GameType_Button_C.OnGameModeClicked__DelegateSignature");

	UMainMenu_GameType_Button_C_OnGameModeClicked__DelegateSignature_Params params;
	params.GameMode_Button = GameMode_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
