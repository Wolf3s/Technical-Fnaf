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

// BlueprintGeneratedClass DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C
// 0x0020 (0x03C8 - 0x03A8)
class ADLC_Office01_FlashBeaconButton_Bp_C : public AMonitorButton_Interactable_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            NonVR_ButtonWidget;                                       // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_FlickerIntensity_FB74E080481B19833C31259A642C5DDC;// 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_FB74E080481B19833C31259A642C5DDC;   // 0x03BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C");
		return ptr;
	}


	void NonVR_WidgetVisibility(bool IsHidden_);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void PowerOutageEvent();
	void PowerRebootEvent();
	void OnCooldown();
	void OffCooldown();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ResetBtnPosition();
	void ExecuteUbergraph_DLC_Office01_FlashBeaconButton_Bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
