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

// BlueprintGeneratedClass Office01_MotionControllerPawn.Office01_MotionControllerPawn_C
// 0x001F (0x1139 - 0x111A)
class AOffice01_MotionControllerPawn_C : public AOffice_MotionControllerPawn_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x111A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1120(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AOffice01_Door_Bp_C*                         Ref_DoorLeft;                                             // 0x1128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AOffice01_Door_Bp_C*                         Ref_DoorRight;                                            // 0x1130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TEnumAsByte<EOffice_NonVr_CameratetheredLook>      Office01_DirectionEnum;                                   // 0x1138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Office01_MotionControllerPawn.Office01_MotionControllerPawn_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void CheckForGamePad();
	void ExecuteUbergraph_Office01_MotionControllerPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
