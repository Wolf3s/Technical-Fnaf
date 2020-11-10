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

// BlueprintGeneratedClass DropPointHighlightProvider.DropPointHighlightProvider_C
// 0x0000 (0x0028 - 0x0028)
class UDropPointHighlightProvider_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DropPointHighlightProvider.DropPointHighlightProvider_C");
		return ptr;
	}


	void GetDropHighlightMesh(class ADropPoint_C* Sender, class UPrimitiveComponent** MeshToHighlight);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
