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

// BlueprintGeneratedClass Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C
// 0x0A3D (0x0E38 - 0x03FB)
class AOffice01_MonitorBoard_BP_C : public AMonitorBoard_BP_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x03FB(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             ZoomLoc;                                                  // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MonitorScreen_Mesh;                                       // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio_CameraDisplay;                                      // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_FlickerIntensity_03854C034B00FA7C099D45B6613CFD69;// 0x0428(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_03854C034B00FA7C099D45B6613CFD69;   // 0x042C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x042D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               DisableInteractions;                                      // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	TArray<class AMonitorButton_BP_C*>                 MonitorButtons;                                           // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               Disable_Logic_1;                                          // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0451(0x000F) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0460(0x04E0) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UPostProcessComponent*                       NightmarePostProcess;                                     // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0948(0x0008) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSettings_Static;                               // 0x0950(0x04E0) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AOffice01_GameManager_C*                     Office01_Game_Manger;                                     // 0x0E30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnNonVRLineTraceInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class USceneComponent* HitComponent, class AActor* Hit_Actor);
	void Event_Btn_Pressed(int* ID, bool* Pressed, class UMaterial** CameraMaterial, TArray<class ARoomInfo_Bp_C*>* Room, class UStaticMesh** VentLight, class AFNAFCamera_Blueprint_C** FNAFCamera);
	void ReceiveBeginPlay();
	void DisableMonitorInteractions(bool Player_Won_Game);
	void ReceiveTick(float* DeltaSeconds);
	void ZoomInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class AActor* HitActor, class USceneComponent* Hit_Component);
	void ExecuteUbergraph_Office01_MonitorBoard_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
