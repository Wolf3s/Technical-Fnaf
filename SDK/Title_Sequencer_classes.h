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

// BlueprintGeneratedClass Title_Sequencer.Title_Sequencer_C
// 0x0061 (0x0431 - 0x03D0)
class ATitle_Sequencer_C : public ALevelSequenceActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        TitleTurnOn;                                              // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            IntroWidget;                                              // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Widget;                                                   // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Fade_In_Fades_0F81B9454A6F374DA7C90FA52567C861;           // 0x03F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Fade_In__Direction_0F81B9454A6F374DA7C90FA52567C861;      // 0x03F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Fade_In;                                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APlayerTitlePawn_C*                          RefToMotionController;                                    // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               WarningComplete;                                          // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0409(0x0003) MISSED OFFSET
	float                                              LookAtTimer;                                              // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EULATrigger;                                              // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WarningTrigger;                                           // 0x0411(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0412(0x0002) MISSED OFFSET
	int                                                WidgetState;                                              // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SequenceComplete;                                         // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0419(0x0007) MISSED OFFSET
	class UIntroLogos_C*                               WidgetSeen;                                               // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UGammaTester_C*                              RefTOGamma;                                               // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               DisableInput_1;                                           // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Title_Sequencer.Title_Sequencer_C");
		return ptr;
	}


	void UserConstructionScript();
	void Fade_In__FinishedFunc();
	void Fade_In__UpdateFunc();
	void InpActEvt_D_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_A_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void TriggerSteelWool();
	void TriggerWarning();
	void TriggerTitle();
	void ChangeUI();
	void InitialTriggerPull();
	void StartSequence();
	void TriggerEULA();
	void TriggerWarningPause();
	void TriggerUE4();
	void ReceiveTick(float* DeltaSeconds);
	void TurnOfffTirgger();
	void FadeIn();
	void FadeOut();
	void TriggerGamma();
	void DestroyGamma();
	void LeftPass();
	void RightPass();
	void EnterPass();
	void ExecuteUbergraph_Title_Sequencer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
