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

// BlueprintGeneratedClass DLC_office_MotionControllerPawn.DLC_office_MotionControllerPawn_C
// 0x004E (0x1168 - 0x111A)
class ADLC_office_MotionControllerPawn_C : public AOffice_MotionControllerPawn_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x111A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1120(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AOffice_BaseGamemanager_C*                   GameManagerRef;                                           // 0x1128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AMonitorButton_BP_C*>                 Ref_MonitorButtons;                                       // 0x1130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ADLC_Office01_FlashBeaconButton_Bp_C*        Ref_MonitorLight;                                         // 0x1140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ADLC_Office01_RebootLever_C*                 Ref_PowerLever;                                           // 0x1148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TEnumAsByte<EOffice_NonVr_CameratetheredLook>      DLCOffice_DirectionEnum;                                  // 0x1150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1151(0x0007) MISSED OFFSET
	class ADLC_Office01_Door_Bp_C*                     Ref_DoorLeft;                                             // 0x1158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ADLC_Office01_Door_Bp_C*                     Ref_DoorRight;                                            // 0x1160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DLC_office_MotionControllerPawn.DLC_office_MotionControllerPawn_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2(struct FKey* Key);
	void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void CheckForGamePad();
	void ExecuteUbergraph_DLC_office_MotionControllerPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
