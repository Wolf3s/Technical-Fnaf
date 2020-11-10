#pragma once

// Name: Freddys, Version: 4.2.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ButtonIcon.ButtonIcon_C
// 0x0348 (0x0550 - 0x0208)
class UButtonIcon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      ButtonImage;                                              // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      HaloImage;                                                // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TEnumAsByte<EControllerButtonsEnum>                Button;                                                   // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	TMap<TEnumAsByte<EControllerButtonsEnum>, class UTexture2D*> HaloMaps;                                                 // 0x0228(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<EControllerButtonsEnum>, struct FControllerButton_Struct> MapToUse;                                                 // 0x0278(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<EControllerButtonsEnum>, struct FControllerButton_Struct> SteamVRButtonsMap;                                        // 0x02C8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<EControllerButtonsEnum>, struct FControllerButton_Struct> OculusButtonsMap;                                         // 0x0318(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<EControllerButtonsEnum>, struct FControllerButton_Struct> MoveButtonsMap;                                           // 0x0368(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<EControllerButtonsEnum>, struct FControllerButton_Struct> DS4ButtonsMap;                                            // 0x03B8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<EControllerButtonsEnum>, struct FControllerButton_Struct> PCButtonsMap;                                             // 0x0408(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<EControllerButtonsEnum>, struct FControllerButton_Struct> XBoxButtonsMap;                                           // 0x0458(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<EControllerButtonsEnum>, struct FControllerButton_Struct> SwitchButtonsMap;                                         // 0x04A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EControllerType, TEnumAsByte<EControllerButtonsEnum>> ControllerOverrides;                                      // 0x04F8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsInInstruction;                                          // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Pressed;                                                  // 0x0549(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowWithMouse;                                            // 0x054A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x054B(0x0001) MISSED OFFSET
	float                                              HaloOpacity;                                              // 0x054C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ButtonIcon.ButtonIcon_C");
		return ptr;
	}


	void Change_Button_And_State(bool Is_Pressed, TEnumAsByte<EControllerButtonsEnum> Button);
	void Change_Button(TEnumAsByte<EControllerButtonsEnum> Controller_Button, float HaloOpacity);
	void Change_Button_State(bool Pressed);
	void OnControllerDeviceChanged();
	void PreConstruct(bool* IsDesignTime);
	void Change_Controller_Overrides(TMap<EControllerType, TEnumAsByte<EControllerButtonsEnum>> ControllerOverrides);
	void Change_Button_Halo_Opacity(float HaloOpacity);
	void Change_Button_State_and_Halo_Opacity(float HaloOpacity, bool Is_Pressed, TEnumAsByte<EControllerButtonsEnum> Button);
	void UpdateDisplay();
	void ExecuteUbergraph_ButtonIcon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
