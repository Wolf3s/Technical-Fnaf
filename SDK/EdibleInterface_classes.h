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

// BlueprintGeneratedClass EdibleInterface.EdibleInterface_C
// 0x0000 (0x0028 - 0x0028)
class UEdibleInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EdibleInterface.EdibleInterface_C");
		return ptr;
	}


	void OnActorEaten(class ASaul_MotionControllerPawn_C* Eater);
	void GetEdibleType(TEnumAsByte<EdibleEnum>* EdibleType);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
