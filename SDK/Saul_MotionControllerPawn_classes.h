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

// BlueprintGeneratedClass Saul_MotionControllerPawn.Saul_MotionControllerPawn_C
// 0x0601 (0x1091 - 0x0A90)
class ASaul_MotionControllerPawn_C : public ASWGVRCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A90(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             Follower;                                                 // 0x0A98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ZOffset;                                                  // 0x0AA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetInteractionComponent*                 WidgetInteraction;                                        // 0x0AA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            OfficeVictoryWidget;                                      // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Subtitles;                                                // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Pad_TeleportArrow;                                        // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            EdibleCollider;                                           // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVRNotificationsComponent*                   VRNotifications;                                          // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Flashlight_Low;                                           // 0x0AD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SpectatorCamRoot;                                         // 0x0AE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            BalloonCollider;                                          // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcessValues;                                        // 0x0AF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            HeadCollider;                                             // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             VR_View_Locator_Dummy;                                    // 0x0B00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Left_TeleportArrow;                                       // 0x0B08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Right_TeleportArrow;                                      // 0x0B10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Flashlight_High;                                          // 0x0B18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShowChaperone;                                           // 0x0B20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0B21(0x0007) MISSED OFFSET
	class ASaul_BP_MotionController_C*                 LeftController;                                           // 0x0B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ASaul_BP_MotionController_C*                 RightController;                                          // 0x0B30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutDuration;                                          // 0x0B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeInDuration;                                           // 0x0B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTeleporting;                                            // 0x0B40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0B41(0x0003) MISSED OFFSET
	struct FLinearColor                                TeleportFadeColor;                                        // 0x0B44(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThumbDeadzone;                                            // 0x0B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightStickDown;                                           // 0x0B58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeftStickDown;                                            // 0x0B59(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseControllerRollToRotate;                                // 0x0B5A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0B5B(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    Turn_On_Light;                                            // 0x0B60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerIsKilled;                                           // 0x0B70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              Flashlight_Pitch;                                         // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0B84(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    Player_Win;                                               // 0x0B88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Turn_On_Menu;                                             // 0x0B98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bTeleportDelay;                                           // 0x0BA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0BA9(0x0003) MISSED OFFSET
	float                                              TeleportFadeOutDuration;                                  // 0x0BAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TeleportFadeInDuration;                                   // 0x0BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0BB4(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              TeleportArrayList;                                        // 0x0BB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ATeleport_Manager_BP_C*                      Teleportmanager;                                          // 0x0BC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bSetHandToPointerOnly;                                    // 0x0BD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowTeleportation;                                      // 0x0BD1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RightGripDown;                                            // 0x0BD2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeftGripDown;                                             // 0x0BD3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTeleportSpotsAlwaysOn;                                   // 0x0BD4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MaskAttached;                                             // 0x0BD5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0BD6(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    Trigger_Mangle_Scare;                                     // 0x0BD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               HideHandOnGrab;                                           // 0x0BE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TeleportSpotFound;                                        // 0x0BE9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisablePlayerInputs;                                      // 0x0BEA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x5];                                       // 0x0BEB(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    Enter;                                                    // 0x0BF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DpadRight;                                                // 0x0C00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DpadLeft;                                                 // 0x0C10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DpadUP;                                                   // 0x0C20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DpadDown;                                                 // 0x0C30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Update_Player_Teleport_Location;                          // 0x0C40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              DeltaSeconds;                                             // 0x0C50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpectatorCamInterpSpeed;                                  // 0x0C54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHitResult                                  LookAtHitResults;                                         // 0x0C58(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableSpectatorMode;                                     // 0x0CE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0CE1(0x0007) MISSED OFFSET
	struct FHitResult                                  FlashlightHitResults;                                     // 0x0CE8(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    Paused_DpadRight;                                         // 0x0D70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Paused_DpadLeft;                                          // 0x0D80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Paused_DpadUp;                                            // 0x0D90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Paused_DpadDown;                                          // 0x0DA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Paused_Enter;                                             // 0x0DB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                Choked;                                                   // 0x0DC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0DC4(0x0004) MISSED OFFSET
	TArray<struct FText>                               ThingsEaten;                                              // 0x0DC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               GettingAchievement;                                       // 0x0DD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0DD9(0x0007) MISSED OFFSET
	struct FTimerHandle                                Time_Handle;                                              // 0x0DE0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    GamepadRightShoulderPressed;                              // 0x0DE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    GamepadRightTriggerPressed;                               // 0x0DF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    GamepadLeftShoulderPressed;                               // 0x0E08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    GamepadLeftTriggerPressed;                                // 0x0E18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               EitherTriggerPulled;                                      // 0x0E28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IngameMenuOpen;                                           // 0x0E29(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsRunning;                                                // 0x0E2A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x0E2B(0x0001) MISSED OFFSET
	float                                              CurrentDisplayTime;                                       // 0x0E2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RowName;                                                  // 0x0E30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0E34(0x0004) MISSED OFFSET
	struct FTimerHandle                                SubtitleTimer;                                            // 0x0E38(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SubtitlesOff;                                             // 0x0E40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Upside_Down_Mode;                                         // 0x0E41(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               World_Meters_set_to_70;                                   // 0x0E42(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x1];                                       // 0x0E43(0x0001) MISSED OFFSET
	struct FRotator                                    Store_Player_s_Current_Rotation;                          // 0x0E44(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Enable_Roation_Snap;                                      // 0x0E50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0E51(0x0007) MISSED OFFSET
	struct FTimerHandle                                Roation_Time_Handle;                                      // 0x0E58(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UObject*                                     MRComponent;                                              // 0x0E60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Enable_Map;                                               // 0x0E68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HideRightHandAndDualShock;                                // 0x0E69(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x6];                                       // 0x0E6A(0x0006) MISSED OFFSET
	class ASaul_BP_MotionController_C*                 BPMotionController;                                       // 0x0E70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DualShockContrillerScale;                                 // 0x0E78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Hide_Hands;                                               // 0x0E7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Mangle_Disable_Teleportation;                             // 0x0E7D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x2];                                       // 0x0E7E(0x0002) MISSED OFFSET
	float                                              SnapRotationAmount;                                       // 0x0E80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SnapRotationMax;                                          // 0x0E84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SnapRotationCurrentAngle;                                 // 0x0E88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DS4ThrowSpeed;                                            // 0x0E8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeightAdjustAmount;                                       // 0x0E90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HeightAdjustMax;                                          // 0x0E94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentHeight;                                            // 0x0E98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanAdjustHeightMotionController;                          // 0x0E9C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0E9D(0x0003) MISSED OFFSET
	float                                              Set_Head_Collision_Scale;                                 // 0x0EA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanAdjustHeightDS4;                                       // 0x0EA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ConfirmDown;                                              // 0x0EA5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x0EA6(0x0002) MISSED OFFSET
	class AActor*                                      AimedButton;                                              // 0x0EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     CurrentFlashlightLevelName;                               // 0x0EB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USpotLightComponent*                         SpotLightRef;                                             // 0x0EC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AFlashlight_Battery_Finale_C*                FlashlightFinaleRef;                                      // 0x0EC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFlashlight_Battery_C*                       FlashlightRef;                                            // 0x0ED0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UPrimitiveComponent*                         AimedComponent;                                           // 0x0ED8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    Action_Confirm_Pressed;                                   // 0x0EE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Action_Confirm_Released;                                  // 0x0EF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               NonVRObjectHeld;                                          // 0x0F00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x0F01(0x0007) MISSED OFFSET
	class AActor*                                      HoverActor;                                               // 0x0F08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UPrimitiveComponent*                         HoverComponent;                                           // 0x0F10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    NonVR_QuickAction;                                        // 0x0F18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NonVR_QuickRelease;                                       // 0x0F28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              NonVR_ThrowSpeed;                                         // 0x0F38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NonVR_OriginalLocation;                                   // 0x0F3C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBoxComponent*                               CurrentLeanCollision;                                     // 0x0F48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     NonVR_LeanLocForward;                                     // 0x0F50(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NonVR_LeanLocRight;                                       // 0x0F5C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NonVR_ForwardLeanDirection;                               // 0x0F68(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NonVR_RightLeanDirection;                                 // 0x0F74(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    NonVRRotation;                                            // 0x0F80(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NonVR_IsInMenu;                                           // 0x0F8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LockLookControls;                                         // 0x0F8D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x2];                                       // 0x0F8E(0x0002) MISSED OFFSET
	class USceneComponent*                             HoveredZoomComponent;                                     // 0x0F90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UIngameMenu_C*                               PauseMenu;                                                // 0x0F98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               SnapRotationNoLimit;                                      // 0x0FA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanTurnOffFlashlight;                                     // 0x0FA1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x2];                                       // 0x0FA2(0x0002) MISSED OFFSET
	struct FRotator                                    NonVR_OriginalRot;                                        // 0x0FA4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraFadeDelay;                                          // 0x0FB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReturnFinished;                                           // 0x0FB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HitLookLoc;                                               // 0x0FB5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x2];                                       // 0x0FB6(0x0002) MISSED OFFSET
	struct FVector                                     NonVRGrabOffset;                                          // 0x0FB8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x0FC4(0x0004) MISSED OFFSET
	class AActor*                                      ZoomedActor;                                              // 0x0FC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    NonVR_LookReturnRot;                                      // 0x0FD0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x0FDC(0x0004) MISSED OFFSET
	class UNonVRCrosshair_C*                           Crosshair;                                                // 0x0FE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               CrosshairEnabled;                                         // 0x0FE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x7];                                       // 0x0FE9(0x0007) MISSED OFFSET
	class UClass*                                      Spawned_widget;                                           // 0x0FF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isCameraTethered;                                         // 0x0FF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x0FF9(0x0003) MISSED OFFSET
	struct FRotator                                    NewCameraRot;                                             // 0x0FFC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Gamepad_RightShoulder_pressed;                            // 0x1008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Gamepad_LeftShoulder_pressed;                             // 0x1009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x6];                                       // 0x100A(0x0006) MISSED OFFSET
	TArray<class AActor*>                              TetheredCameraRots;                                       // 0x1010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UFlatOverlay_C*                              FlatOverlay;                                              // 0x1020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              MaskOn_VignetteIntensity;                                 // 0x1028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    NonVR_Rotation_Offset;                                    // 0x102C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NonVR_FreeLook_InterpSpeed;                               // 0x1038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonVR_Tethered_Speed;                                     // 0x103C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NonVR_Tethered_HorizontalAngle;                           // 0x1040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonVR_Tethered_VerticalAngle;                             // 0x1044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonVR_FreeLook_SpeedMultiplier;                           // 0x1048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonVR_Tethered_FOV;                                       // 0x104C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewVar_1;                                                 // 0x1050(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NonVR_FreeLook_FOV;                                       // 0x105C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowCameraToggle;                                        // 0x1060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x1061(0x0003) MISSED OFFSET
	float                                              LookVSpeed;                                               // 0x1064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookRSpeed;                                               // 0x1068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonVR_Tethered_Snap_Speed;                                // 0x106C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonVR_Tethered_Normal_Speed;                              // 0x1070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NewVar_2;                                                 // 0x1074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowMenu;                                                // 0x1078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NonVR_TeleportCameraFadeTransition;                       // 0x1079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x2];                                       // 0x107A(0x0002) MISSED OFFSET
	float                                              MaxCameraPitch;                                           // 0x107C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinCameraPitch;                                           // 0x1080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                default_cameraID;                                         // 0x1084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Look_Loc_IsTethered;                                      // 0x1088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x1089(0x0003) MISSED OFFSET
	float                                              Updated_FOV;                                              // 0x108C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayerIsDead;                                             // 0x1090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Saul_MotionControllerPawn.Saul_MotionControllerPawn_C");
		return ptr;
	}


	void UpdateControllerDevice();
	void SetupWidgetInteraction();
	void NonVR_Set_Camera_Array();
	void NonVR_Update_Camera_Array();
	void AttemptEat(class AActor* ActorToEat);
	void NonVRLook(float Horizontal_Axis, float Vertical_Axis, class UCurveFloat* Speed_curve);
	void PopUpUI_Handler(class UClass** WidgetToSpawn);
	void SetupNonVRAttachPoints();
	void UnPauseGame_NonVR();
	void PauseGame_NonVR();
	bool NonVRLineTrace(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit);
	void CheckCoinsAchievement();
	void Reset_Player_Rotation();
	void Set_Player_Rotation(float Subtract_Roation_Value);
	void ToggleIngameMenu();
	struct FTransform GetHeadTransform();
	void TeleportCheck(bool RightHand, bool* TeleportSpotFound, struct FVector* TeleportLocation, struct FRotator* TeleportRotation, bool* Set_player_rotation_to_Collision);
	void ToggleMenu();
	void Game_Mode_Ref(class AFNAFGM_FlashlightGame_C** Game_Mode_Ref);
	void UserConstructionScript();
	void Action_K2Node_InputActionEvent_45(const struct FKey& Key);
	void Action_K2Node_InputActionEvent_44(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_ZoomNonVR_K2Node_InputActionEvent_43(const struct FKey& Key);
	void InpActEvt_ZoomNonVR_K2Node_InputActionEvent_42(const struct FKey& Key);
	void InpActEvt_CameraToggleNonVR_K2Node_InputActionEvent_41(const struct FKey& Key);
	void InpActEvt_GrabLeft_K2Node_InputActionEvent_40(const struct FKey& Key);
	void InpActEvt_GrabLeft_K2Node_InputActionEvent_39(const struct FKey& Key);
	void InpActEvt_GrabRight_K2Node_InputActionEvent_38(const struct FKey& Key);
	void InpActEvt_GrabRight_K2Node_InputActionEvent_37(const struct FKey& Key);
	void InpActEvt_DS4LaunchGrabbable_K2Node_InputActionEvent_36(const struct FKey& Key);
	void InpActEvt_Eating_NonVR__K2Node_InputActionEvent_35(const struct FKey& Key);
	void InpActEvt_TeleportRight_K2Node_InputActionEvent_34(const struct FKey& Key);
	void InpActEvt_TeleportLeft_K2Node_InputActionEvent_33(const struct FKey& Key);
	void InpActEvt_DpadRight_K2Node_InputActionEvent_32(const struct FKey& Key);
	void InpActEvt_DpadLeft_K2Node_InputActionEvent_31(const struct FKey& Key);
	void InpActEvt_Enter_K2Node_InputActionEvent_30(const struct FKey& Key);
	void InpActEvt_DpadDown_K2Node_InputActionEvent_29(const struct FKey& Key);
	void InpActEvt_DpadUP_K2Node_InputActionEvent_28(const struct FKey& Key);
	void OnFailure_A3749E2849210D45C3F9C580BD7FB1C1();
	void OnSuccess_A3749E2849210D45C3F9C580BD7FB1C1();
	void OnFailure_036BF64B4E92FD57AA8116A301BCE7E3(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void OnSuccess_036BF64B4E92FD57AA8116A301BCE7E3(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void OnFailure_974E5B2847D8307E45573787BC62BAED();
	void OnSuccess_974E5B2847D8307E45573787BC62BAED();
	void InpActEvt_Restart_Level_K2Node_InputActionEvent_27(const struct FKey& Key);
	void InpActEvt_Restart_Level_K2Node_InputActionEvent_26(const struct FKey& Key);
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Menu_K2Node_InputActionEvent_25(const struct FKey& Key);
	void InpActEvt_Menu_K2Node_InputActionEvent_24(const struct FKey& Key);
	void InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_23(const struct FKey& Key);
	void InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_22(const struct FKey& Key);
	void InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_21(const struct FKey& Key);
	void InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_20(const struct FKey& Key);
	void InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_19(const struct FKey& Key);
	void InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_MoveControllerMenu_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_VR_Snapping_Left__TEMP__K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_VR_Snapping_Right__TEMP__K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_Press_Left_Grip_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_Press_Left_Grip_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_Confirm_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_Confirm_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_QuickActionNonVR_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_QuickActionNonVR_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_BackToHub_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt__DEBUG_CrosshairToggle_K2Node_InputActionEvent_1(const struct FKey& Key);
	void BndEvt__VRNotifications_K2Node_ComponentBoundEvent_4_VRNotificationsDelegate__DelegateSignature();
	void BndEvt__VRNotifications_K2Node_ComponentBoundEvent_5_VRNotificationsDelegate__DelegateSignature();
	void BndEvt__VRNotifications_K2Node_ComponentBoundEvent_6_VRNotificationsDelegate__DelegateSignature();
	void BndEvt__VRNotifications_K2Node_ComponentBoundEvent_7_VRNotificationsDelegate__DelegateSignature();
	void BndEvt__VRNotifications_K2Node_ComponentBoundEvent_0_VRNotificationsDelegate__DelegateSignature();
	void FlashlightDead(bool FlashlightDead);
	void Flashlight_Win();
	void ForceFlashlightTurnoff();
	void Turn_On_Flashlight();
	void TurnOffFLashlight();
	void Force_Turn_Off_Flashlight();
	void NonVR_ZoomInScreen(class USceneComponent* ComponentHovered, const struct FVector& ZoomLoc, const struct FRotator& ZoomRot, bool IsMenu, bool IsActiveLoc);
	void ZoomRelease();
	void ForceLeanToStop();
	void InpAxisEvt_LookHorizontal_K2Node_InputAxisEvent_5(float AxisValue);
	void InpAxisEvt_LookVertical_K2Node_InputAxisEvent_4(float AxisValue);
	void SetTetheredMode(bool NewParam);
	void ToggleTetheredMode();
	void Init_NonVR_Camera();
	void Set_Camera_Rotation(const struct FRotator& Rotation);
	void OnGrab(class AActor** Grabbable, EVRHandType* Hand);
	void OnRelease(class AActor** Grabbable, EVRHandType* Hand);
	void Setup_Held_Info_Display(class UObject* Object);
	void BndEvt__EdibleCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void TeleportPlayer(bool RightHand);
	void ReceiveTick(float* DeltaSeconds);
	void TurnOnHands(bool Turn_On);
	void SpectatorCam();
	void Show_Menu();
	void Give_Achievement(const struct FName& AchievementID);
	void BndEvt__HeadCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__HeadCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void Reset_level();
	void Hide_Menu();
	void TextUpdate();
	void UpdateSubtitles(class UDataTable* SubtitleTable);
	void UnlockAllLevels();
	void UnlockAllGlitches();
	void UnlockAllPrizes();
	void ProcessInterpolatedGrab(struct FTransform* AttachmentTransform, class AActor** HeldActor, EVRHandType* Hand, struct FHeldGrabbableInfo* ActorGrabbablePair);
	void InteruptSubtitles();
	void UnlockAllCoins();
	void OnMenuHeld();
	void FlashlightNonVR();
	void Hide_Flashlight_Light(bool flase);
	void Destroy_Flashlight_spawn_Microphone();
	void SpawnDefaultFlashlight();
	void FindButton();
	void PullPushObjectNonVR(float PullPushAmount);
	void InpAxisEvt_PullPushObject_K2Node_InputAxisEvent_3(float AxisValue);
	void NonVR_AxisLean();
	void InpAxisEvt_LeanForward_K2Node_InputAxisEvent_6(float AxisValue);
	void InpAxisEvt_LeanRight_K2Node_InputAxisEvent_7(float AxisValue);
	void ResetForwardNonVR();
	void WinCurrentLevel();
	void DisableCrosshair(bool enable);
	void OnHoverBegin(class AActor** HoveredActor, EVRHandType* Hand);
	void OnHoverEnd(class AActor** HoveredActor, EVRHandType* Hand);
	void Disable_Main_Menu();
	void Enable_Main_Menu();
	void PlayerIsBeingKilled();
	void ExecuteUbergraph_Saul_MotionControllerPawn(int EntryPoint);
	void NonVR_QuickRelease__DelegateSignature();
	void NonVR_QuickAction__DelegateSignature();
	void Action_Confirm_Released__DelegateSignature();
	void Action_Confirm_Pressed__DelegateSignature();
	void GamepadLeftTriggerPressed__DelegateSignature();
	void GamepadLeftShoulderPressed__DelegateSignature();
	void GamepadRightTriggerPressed__DelegateSignature();
	void GamepadRightShoulderPressed__DelegateSignature();
	void Paused_Enter__DelegateSignature();
	void Paused_DpadDown__DelegateSignature();
	void Paused_DpadUp__DelegateSignature();
	void Paused_DpadLeft__DelegateSignature();
	void Paused_DpadRight__DelegateSignature();
	void Update_Player_Teleport_Location__DelegateSignature(int Get_player_Location);
	void DpadDown__DelegateSignature();
	void DpadUp__DelegateSignature();
	void DpadLeft__DelegateSignature();
	void DpadRight__DelegateSignature();
	void Enter__DelegateSignature();
	void Trigger_Mangle_Scare__DelegateSignature();
	void Turn_On_Menu__DelegateSignature(bool TurnOn);
	void Player_Win__DelegateSignature();
	void PlayerIsKilled__DelegateSignature();
	void Turn_On_Light__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
