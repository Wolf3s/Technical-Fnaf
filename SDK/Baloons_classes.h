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

// BlueprintGeneratedClass Baloons.Baloons_C
// 0x0019 (0x0341 - 0x0328)
class ABaloons_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        ENV_MOD_Party_Baloons_Table;                              // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               AllowNightMare;                                           // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Baloons.Baloons_C");
		return ptr;
	}


	void PickRandomBaloonColor(int BaloonID);
	void UserConstructionScript();
	void nightmare_mode_triggered();
	void Nightmare_Mode_Disabled();
	void ExecuteUbergraph_Baloons(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
