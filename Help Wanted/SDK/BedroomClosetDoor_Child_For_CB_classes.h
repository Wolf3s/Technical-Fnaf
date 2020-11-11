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

// BlueprintGeneratedClass BedroomClosetDoor_Child_For_CB.BedroomClosetDoor_Child_For_CB_C
// 0x0010 (0x0400 - 0x03F0)
class ABedroomClosetDoor_Child_For_CB_C : public ABedroomClosetDoor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*                    DoorMat;                                                  // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BedroomClosetDoor_Child_For_CB.BedroomClosetDoor_Child_For_CB_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BedroomClosetDoor_Child_For_CB(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
