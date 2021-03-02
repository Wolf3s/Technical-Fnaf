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

// BlueprintGeneratedClass ContinueButton.ContinueButton_C
// 0x0010 (0x0438 - 0x0428)
class AContinueButton_C : public AMasterButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            ButtonPrompt;                                             // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ContinueButton.ContinueButton_C");
		return ptr;
	}


	void UserConstructionScript();
	void EnableButton(bool enable);
	void ButtonTriggered();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ContinueButton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
