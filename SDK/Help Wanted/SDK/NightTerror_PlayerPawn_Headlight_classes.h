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

// BlueprintGeneratedClass NightTerror_PlayerPawn_Headlight.NightTerror_PlayerPawn_Headlight_C
// 0x00D8 (0x11A0 - 0x10C8)
class ANightTerror_PlayerPawn_Headlight_C : public APlayerPawn_Headlight_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                StartingCamera_GroupID;                                   // 0x10D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                default_cameraID_1;                                       // 0x10D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NonVR_Camera_Index;                                       // 0x10D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x10DC(0x0004) MISSED OFFSET
	TMap<int, int>                                     default_camera_mappings;                                  // 0x10E0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	class UNonVR_Office_TurnUI_C*                      TurnUI;                                                   // 0x1130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               RightBumperHit;                                           // 0x1138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeftBumperHit;                                            // 0x1139(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x113A(0x0006) MISSED OFFSET
	TMap<int, bool>                                    is_camera_cyclic_mappings;                                // 0x1140(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               is_camera_cyclic;                                         // 0x1190(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LockCamera;                                               // 0x1191(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x1192(0x0006) MISSED OFFSET
	class AOffice_BaseGamemanager_C*                   Ref_GameManager;                                          // 0x1198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NightTerror_PlayerPawn_Headlight.NightTerror_PlayerPawn_Headlight_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_8(struct FKey* Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_7(struct FKey* Key);
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_6(struct FKey* Key);
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_5(struct FKey* Key);
	void InpActEvt_MenuPageLeft_NonVR__K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_MenuPageLeft_NonVR__K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_MenuPageRight_NonVR__K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_MenuPageRight_NonVR__K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_ZoomNonVR_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_ZoomNonVR_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void DestroyTurnUI(bool Player_Won_Game);
	void ReceiveTick(float* DeltaSeconds);
	void NonVR_Update_Camera_Array();
	void NonVR_Set_Camera_Array();
	void ForceLeanToStop();
	void ExecuteUbergraph_NightTerror_PlayerPawn_Headlight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
