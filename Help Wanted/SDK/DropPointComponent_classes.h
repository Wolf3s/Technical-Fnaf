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

// BlueprintGeneratedClass DropPointComponent.DropPointComponent_C
// 0x0000 (0x00F0 - 0x00F0)
class UDropPointComponent_C : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DropPointComponent.DropPointComponent_C");
		return ptr;
	}


	void IsGrabbableValid(class AActor* GrabbableActor, bool* IsValid);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
