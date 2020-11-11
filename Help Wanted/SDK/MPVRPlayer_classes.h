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

// BlueprintGeneratedClass MPVRPlayer.MPVRPlayer_C
// 0x0018 (0x0AE8 - 0x0AD0)
class AMPVRPlayer_C : public AFNAFPlayerPawn_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                           ScareTrigger;                                             // 0x0AD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFlashlightBase_C*                           Flashlight;                                               // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MPVRPlayer.MPVRPlayer_C");
		return ptr;
	}


	void Get_Flash_Light(class AFlashlightBase_C** Flashlight);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnFlashlightChanged(bool FlashLightOn);
	void ExecuteUbergraph_MPVRPlayer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
