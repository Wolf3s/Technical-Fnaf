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

// BlueprintGeneratedClass Office_MotionControllerPawn.Office_MotionControllerPawn_C
// 0x0089 (0x111A - 0x1091)
class AOffice_MotionControllerPawn_C : public ASaul_MotionControllerPawn_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1091(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Timeline_0_NewTrack_0_543A8DE14AF85162E15C8E904FBCECBA;   // 0x10A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_543A8DE14AF85162E15C8E904FBCECBA;   // 0x10A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x10A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x10A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AOffice01_Door_Bp_C*                         RefToDoorBP;                                              // 0x10B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AOffice01_Door_Bp_C*                         RefToDoorBP_1;                                            // 0x10B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                Counter;                                                  // 0x10C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x10C4(0x0004) MISSED OFFSET
	class AOffice01_Foxy_C*                            RefTOFoxy;                                                // 0x10C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AOffice01_Freddy_C*                          RefTOFreddy;                                              // 0x10D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AOffice01_Bonnie_C*                          RefToBonnie;                                              // 0x10D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AOffice01_Chica_C*                           RefToChica;                                               // 0x10E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               AnimCheck_BonnieL;                                        // 0x10E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Chica_Notify;                                             // 0x10E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Bonnie_Notify;                                            // 0x10EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x10EB(0x0005) MISSED OFFSET
	class AOffice_BaseGamemanager_C*                   RefToManager;                                             // 0x10F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UNonVR_Office_TurnUI_C*                      TurnUI;                                                   // 0x10F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               LeftBumperHit;                                            // 0x1100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightBumperHit;                                           // 0x1101(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x1102(0x0002) MISSED OFFSET
	float                                              ThumbstickCameraThresholdVal;                             // 0x1104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AMonitorButton_BP_C*>                 RefMonitorButtons;                                        // 0x1108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               DisableThumbstickCameraChange;                            // 0x1118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsingRThumbstick;                                       // 0x1119(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Office_MotionControllerPawn.Office_MotionControllerPawn_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void InpActEvt_MenuPageLeft_NonVR__K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_MenuPageLeft_NonVR__K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_MenuPageRight_NonVR__K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_MenuPageRight_NonVR__K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void TriggerNightmareScareSequence();
	void DestroyTurnUI(bool Player_Won_Game);
	void Setup_Controller_Device();
	void InpAxisEvt_CameraNavigationHoriz_NonVR__K2Node_InputAxisEvent_1(float AxisValue);
	void ResetHorizCameraSwitch();
	void ResetVertCameraSwitch();
	void InpAxisEvt_CameraNavigationVert_NonVR__K2Node_InputAxisEvent_2(float AxisValue);
	void ChangeCameraLeft();
	void ChangeCameraRight();
	void ChangeCameraDown();
	void ChangeCameraUp();
	void Disable_RThumbstickCameras();
	void Enable_RThumbstickCameras();
	void ExecuteUbergraph_Office_MotionControllerPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
