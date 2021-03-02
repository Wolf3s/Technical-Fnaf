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

// BlueprintGeneratedClass NightTerrorNVRLoc.NightTerrorNVRLoc_C
// 0x002F (0x0388 - 0x0359)
class ANightTerrorNVRLoc_C : public ANonVRLookLocation_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABedroom_Door_BP_C*                          AssociatedDoor;                                           // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ATeleportSpot_BP_C*                          AssociatedTP_Spot;                                        // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               IsActive;                                                 // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	class ANightTerror_PlayerPawn_Headlight_C*         REF_NightTerrorPawn;                                      // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NightTerrorNVRLoc.NightTerrorNVRLoc_C");
		return ptr;
	}


	void GetHoverCursorState(TEnumAsByte<ECursorState>* CursorState);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ZoomInteract(class ASaul_MotionControllerPawn_C** MotionControllerPawn, class AActor** HitActor, class USceneComponent** Hit_Component);
	void ZoomEndInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class AActor* HitActor, class UActorComponent* HitComponent);
	void OnVRHoverBegin(class ASWGVRCharacter** Sender, EVRHandType* Hand);
	void OnVRHoverEnd(class ASWGVRCharacter** Sender, EVRHandType* Hand);
	void ExecuteUbergraph_NightTerrorNVRLoc(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
