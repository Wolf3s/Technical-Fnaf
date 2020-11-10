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

// BlueprintGeneratedClass NonVR_InSpaceUI.NonVR_InSpaceUI_C
// 0x0088 (0x03B0 - 0x0328)
class ANonVR_InSpaceUI_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            Widget;                                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EControllerButtonsEnum>                ButtonInput;                                              // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	class ASaul_MotionControllerPawn_C*                Ref_MotionControllerPawn;                                 // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               AlwaysFaceCamera;                                         // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowForMouse;                                             // 0x0351(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0352(0x0006) MISSED OFFSET
	TMap<EControllerType, TEnumAsByte<EControllerButtonsEnum>> PerPlatformOverride;                                      // 0x0358(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	class UButtonIcon_C*                               ButtonIcon;                                               // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NonVR_InSpaceUI.NonVR_InSpaceUI_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Change_Button(TEnumAsByte<EControllerButtonsEnum> Controller_Button);
	void ReceiveTick(float* DeltaSeconds);
	void Setup_Controller_Display();
	void ExecuteUbergraph_NonVR_InSpaceUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
