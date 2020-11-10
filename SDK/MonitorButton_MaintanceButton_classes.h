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

// BlueprintGeneratedClass MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C
// 0x0008 (0x03B0 - 0x03A8)
class AMonitorButton_MaintanceButton_C : public AMonitorButton_Interactable_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__BoxCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ResetBtnPosition();
	void AdjustBtnPosition();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__BoxCollider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveBeginPlay();
	void NonVRReleaseChild();
	void OnNonVRLineTraceInteract(class ASaul_MotionControllerPawn_C** MotionControllerPawn, class USceneComponent** HitComponent, class AActor** Hit_Actor);
	void NonVR_GamepadInteraction();
	void NONVR_MaintainceButton_Reset();
	void ExecuteUbergraph_MonitorButton_MaintanceButton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
