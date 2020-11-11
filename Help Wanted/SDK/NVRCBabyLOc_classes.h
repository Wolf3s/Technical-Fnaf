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

// BlueprintGeneratedClass NVRCBabyLOc.NVRCBabyLoc_C
// 0x0017 (0x0370 - 0x0359)
class ANVRCBabyLoc_C : public ANonVRLookLocation_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ANightmareBedroomClosetDoors_C*              ClosetDoors;                                              // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NVRCBabyLOc.NVRCBabyLoc_C");
		return ptr;
	}


	void GetHoverCursorState(TEnumAsByte<ECursorState>* CursorState);
	void UserConstructionScript();
	void ZoomInteract(class ASaul_MotionControllerPawn_C** MotionControllerPawn, class AActor** HitActor, class USceneComponent** Hit_Component);
	void ZoomEndInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class AActor* HitActor, class UActorComponent* HitComponent);
	void OnVRHoverBegin(class ASWGVRCharacter** Sender, EVRHandType* Hand);
	void OnVRHoverEnd(class ASWGVRCharacter** Sender, EVRHandType* Hand);
	void ExecuteUbergraph_NVRCBabyLoc(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
