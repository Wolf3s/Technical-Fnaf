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

// BlueprintGeneratedClass TitleMain.TitleMain_C
// 0x0008 (0x0338 - 0x0330)
class ATitleMain_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TitleMain.TitleMain_C");
		return ptr;
	}


	void OnFailure_6E3BC4714E336821AD8BD18F78B73FDB();
	void OnSuccess_6E3BC4714E336821AD8BD18F78B73FDB();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TitleMain(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
