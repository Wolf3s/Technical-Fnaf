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

// BlueprintGeneratedClass NonVRZoom.NonVRZoom_C
// 0x0000 (0x0028 - 0x0028)
class UNonVRZoom_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NonVRZoom.NonVRZoom_C");
		return ptr;
	}


	void ZoomInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class AActor* HitActor, class USceneComponent* Hit_Component);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
