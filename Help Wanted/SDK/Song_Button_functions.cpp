
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

// Function Song_Button.Song_Button_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASong_Button_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.UserConstructionScript");

	ASong_Button_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Song_Button.Song_Button_C.BrightLight__FinishedFunc
// (BlueprintEvent)

void ASong_Button_C::BrightLight__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.BrightLight__FinishedFunc");

	ASong_Button_C_BrightLight__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Song_Button.Song_Button_C.BrightLight__UpdateFunc
// (BlueprintEvent)

void ASong_Button_C::BrightLight__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.BrightLight__UpdateFunc");

	ASong_Button_C_BrightLight__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Song_Button.Song_Button_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASong_Button_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.ReceiveBeginPlay");

	ASong_Button_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Song_Button.Song_Button_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASong_Button_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.ReceiveTick");

	ASong_Button_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Song_Button.Song_Button_C.ResetStage
// (BlueprintCallable, BlueprintEvent)

void ASong_Button_C::ResetStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.ResetStage");

	ASong_Button_C_ResetStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Song_Button.Song_Button_C.NightmareModeToggle
// (BlueprintCallable, BlueprintEvent)

void ASong_Button_C::NightmareModeToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.NightmareModeToggle");

	ASong_Button_C_NightmareModeToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Song_Button.Song_Button_C.FadeOut
// (BlueprintCallable, BlueprintEvent)

void ASong_Button_C::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.FadeOut");

	ASong_Button_C_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Song_Button.Song_Button_C.TriggerSound
// (BlueprintCallable, BlueprintEvent)

void ASong_Button_C::TriggerSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.TriggerSound");

	ASong_Button_C_TriggerSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Song_Button.Song_Button_C.Set to NM
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           False                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASong_Button_C::Set_to_NM(bool False)
{
	static auto fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.Set to NM");

	ASong_Button_C_Set_to_NM_Params params;
	params.False = False;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Song_Button.Song_Button_C.Attempt Activate
// (BlueprintCallable, BlueprintEvent)

void ASong_Button_C::Attempt_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.Attempt Activate");

	ASong_Button_C_Attempt_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Song_Button.Song_Button_C.ResetTriggered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMasterButton_C*         Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASong_Button_C::ResetTriggered(class AMasterButton_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.ResetTriggered");

	ASong_Button_C_ResetTriggered_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Song_Button.Song_Button_C.ExecuteUbergraph_Song_Button
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASong_Button_C::ExecuteUbergraph_Song_Button(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Song_Button.Song_Button_C.ExecuteUbergraph_Song_Button");

	ASong_Button_C_ExecuteUbergraph_Song_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
