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

// BlueprintGeneratedClass Level_Title_FLAT.Level_Title_FLAT_C
// 0x0008 (0x0338 - 0x0330)
class ALevel_Title_FLAT_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Level_Title_FLAT.Level_Title_FLAT_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_Level_Title_FLAT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
