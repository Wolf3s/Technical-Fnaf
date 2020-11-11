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

// WidgetBlueprintGeneratedClass NightTerrorDoorInstructions.NightTerrorDoorInstructions_C
// 0x0010 (0x0218 - 0x0208)
class UNightTerrorDoorInstructions_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  Instructions;                                             // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NightTerrorDoorInstructions.NightTerrorDoorInstructions_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_NightTerrorDoorInstructions(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
