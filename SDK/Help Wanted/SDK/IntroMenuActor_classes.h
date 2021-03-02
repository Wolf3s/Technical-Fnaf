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

// BlueprintGeneratedClass IntroMenuActor.IntroMenuActor_C
// 0x0049 (0x0371 - 0x0328)
class AIntroMenuActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               ClickCollision;                                           // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        HandToPointerProximitySquare;                             // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ENV_MOD_Monitor_Laptop__Edit;                             // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Intro_Widget;                                             // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Mover;                                                    // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APlayerTitlePawn_C*                          Ref_to_Motion_Controller;                                 // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Move;                                                     // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	float                                              Time;                                                     // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InputEnabled;                                             // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IntroMenuActor.IntroMenuActor_C");
		return ptr;
	}


	void ResetCameraOrentation();
	void UserConstructionScript();
	void InpActEvt_MenuConfirm_NonVR__K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_MenuDown_NonVR__K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_MenuUp_NonVR__K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_MenuLeft_NonVR__K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_MenuRight_NonVR__K2Node_InputActionEvent_1(const struct FKey& Key);
	void EnterPass();
	void UpPass();
	void DownPas();
	void LeftPass();
	void ReceiveBeginPlay();
	void ActivateTMover();
	void ReceiveTick(float* DeltaSeconds);
	void ResetVameraPositionPAss();
	void BndEvt__ClickCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__ClickCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void RightPass();
	void ExecuteUbergraph_IntroMenuActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
