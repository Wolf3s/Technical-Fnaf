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

// BlueprintGeneratedClass TitleFadeSequence.SequenceDirector_C
// 0x0000 (0x0030 - 0x0030)
class USequenceDirector_C : public ULevelSequenceDirector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TitleFadeSequence.SequenceDirector_C");
		return ptr;
	}


	void SequenceEvent_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
