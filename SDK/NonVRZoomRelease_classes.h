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

// BlueprintGeneratedClass NonVRZoomRelease.NonVRZoomRelease_C
// 0x0000 (0x0028 - 0x0028)
class UNonVRZoomRelease_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NonVRZoomRelease.NonVRZoomRelease_C");
		return ptr;
	}


	void ZoomEndInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class AActor* HitActor, class UActorComponent* HitComponent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
