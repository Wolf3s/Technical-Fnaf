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

// BlueprintGeneratedClass NonVRTraceInteractible.NonVRTraceInteractible_C
// 0x0000 (0x0028 - 0x0028)
class UNonVRTraceInteractible_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NonVRTraceInteractible.NonVRTraceInteractible_C");
		return ptr;
	}


	void OnNonVRLineTraceInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class USceneComponent* HitComponent, class AActor* Hit_Actor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
