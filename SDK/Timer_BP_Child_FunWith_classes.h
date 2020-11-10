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

// BlueprintGeneratedClass Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C
// 0x0034 (0x0390 - 0x035C)
class ATimer_BP_Child_FunWith_C : public ATimer_BP_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Fade_NewTrack_0_46B13D8C4F9A5C6233499E99A75CEBCF;         // 0x0368(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Fade__Direction_46B13D8C4F9A5C6233499E99A75CEBCF;         // 0x036C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Fade;                                                     // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Set_Time;                                                 // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	class AFun_With_PlushTrap_BP_C*                    FunWithPlushTrapBP;                                       // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UTimerNonVR_C*                               TimerWidget;                                              // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C");
		return ptr;
	}


	void UserConstructionScript();
	void Fade__FinishedFunc();
	void Fade__UpdateFunc();
	void ReceiveBeginPlay();
	void Timer_hit_0();
	void SetTimeOnWidget(int* Timer);
	void Pause_Timer();
	void Player_Killed();
	void ExecuteUbergraph_Timer_BP_Child_FunWith(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
