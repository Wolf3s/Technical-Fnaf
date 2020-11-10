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

// BlueprintGeneratedClass Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C
// 0x0030 (0x0358 - 0x0328)
class AOffice01_NonVrHoverChecks_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               HoverCollide;                                             // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EOffice_NonVr_CameratetheredLook>      Collider_Map;                                             // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ColliderDisabled;                                         // 0x0341(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	class AOffice_MotionControllerPawn_C*              Ref_OfficePawn;                                           // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOffice_BaseGamemanager_C*                   Ref_OfficeManager;                                        // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Office01_NonVrHoverChecks.Office01_NonVrHoverChecks_C");
		return ptr;
	}


	void GetHoverCursorState(TEnumAsByte<ECursorState>* CursorState);
	void UserConstructionScript();
	void OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand);
	void OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand);
	void OnVRHoverEnd(class ASWGVRCharacter* Sender, EVRHandType Hand);
	void ReceiveBeginPlay();
	void OnVRHoverBegin(class ASWGVRCharacter* Sender, EVRHandType Hand);
	void CheckCollision();
	void ExecuteUbergraph_Office01_NonVrHoverChecks(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
