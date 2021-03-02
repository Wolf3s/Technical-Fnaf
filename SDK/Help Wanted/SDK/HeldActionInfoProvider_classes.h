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

// BlueprintGeneratedClass HeldActionInfoProvider.HeldActionInfoProvider_C
// 0x0000 (0x0028 - 0x0028)
class UHeldActionInfoProvider_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HeldActionInfoProvider.HeldActionInfoProvider_C");
		return ptr;
	}


	void GetAvailableButtons(TArray<TEnumAsByte<EControllerButtonsEnum>>* AvailableButtons);
	void GetHeldActionsText(struct FText* Left_Text, struct FText* Right_Text, struct FText* Bottom_Text);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
