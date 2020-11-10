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

// BlueprintGeneratedClass PlayerPawn_Headlight.PlayerPawn_Headlight_C
// 0x0037 (0x10C8 - 0x1091)
class APlayerPawn_Headlight_C : public ASaul_MotionControllerPawn_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1091(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               SpawnHeadlightInThisLevel;                                // 0x10A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Enable_Line_Trace;                                        // 0x10A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x10A2(0x0006) MISSED OFFSET
	class ATeleportSpot_Door_BP_Child_C*               Bedroom_Door;                                             // 0x10A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     Object_Refrence;                                          // 0x10B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    LightTriggered;                                           // 0x10B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Headlight.PlayerPawn_Headlight_C");
		return ptr;
	}


	void Flicker_Flashlight(bool Flicker_Light);
	void UserConstructionScript();
	void Toggle_Flicker(bool Enable_Collision, bool TurnOffLightAfterFlicker);
	void Toggle_Light(bool Power_On);
	void ReceiveTick(float* DeltaSeconds);
	void Heavy_Flicker();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PlayerPawn_Headlight(int EntryPoint);
	void LightTriggered__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
