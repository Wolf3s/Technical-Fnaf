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

// BlueprintGeneratedClass PlayerTitlePawn.PlayerTitlePawn_C
// 0x015B (0x11EC - 0x1091)
class APlayerTitlePawn_C : public ASaul_MotionControllerPawn_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1091(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Environment_Blocker;                                      // 0x10A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStereoLayerComponent*                       SplashStereoLayer;                                        // 0x10A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       LevelToLoad;                                              // 0x10B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AIntroMenuActor_C*                           RefToMenu;                                                // 0x10B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FScriptMulticastDelegate                    TurnOffPullTrigger;                                       // 0x10C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FButtonPressArray>                   CheatUnlockAllLevels;                                     // 0x10D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentCheatIndex;                                        // 0x10E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CheatIndicesHit;                                          // 0x10E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SquareHeld;                                               // 0x10E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TriangleHeld;                                             // 0x10E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CircleHeld;                                               // 0x10EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x10EB(0x0005) MISSED OFFSET
	TMap<TEnumAsByte<EButtonCheckEnum>, bool>          ButtonHeldStatus;                                         // 0x10F0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FButtonPressArray>                   CheatGetCoins;                                            // 0x1140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ATitle_Sequencer_C*                          TitleSequencer_REF;                                       // 0x1150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ScrollOffset;                                             // 0x1158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x115C(0x0004) MISSED OFFSET
	class ACameraActor*                                RefTONonVrCameraLocation;                                 // 0x1160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               MoveCamera;                                               // 0x1168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x1169(0x0007) MISSED OFFSET
	struct FTransform                                  StartingCamTransform;                                     // 0x1170(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Counter1;                                                 // 0x11A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x11A4(0x000C) MISSED OFFSET
	struct FTransform                                  StartingCamp;                                             // 0x11B0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              DT;                                                       // 0x11E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RotateCamera;                                             // 0x11E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x11E5(0x0003) MISSED OFFSET
	float                                              Counter0;                                                 // 0x11E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerTitlePawn.PlayerTitlePawn_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_StartGameButton_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_StartGameButton_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_22(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_21(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_20(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_19(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_18(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_17(const struct FKey& Key);
	void InpActEvt_S_K2Node_InputKeyEvent_16(const struct FKey& Key);
	void InpActEvt_S_K2Node_InputKeyEvent_15(const struct FKey& Key);
	void InpActEvt_D_K2Node_InputKeyEvent_14(const struct FKey& Key);
	void InpActEvt_D_K2Node_InputKeyEvent_13(const struct FKey& Key);
	void InpActEvt_F_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_F_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_MotionController_Left_FaceButton3_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_MotionController_Left_FaceButton3_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_CameraToggleNonVR_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_4(struct FKey* Key);
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1(struct FKey* Key);
	void ReceiveBeginPlay();
	void ResetCameraPosition();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_PlayerTitlePawn(int EntryPoint);
	void TurnOffPullTrigger__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
