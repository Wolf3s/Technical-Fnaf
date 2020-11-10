#pragma once

// Name: Freddys, Version: 4.2.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum SWGVR.EVRHandType
enum class EVRHandType : uint8_t
{
	EVRHandType__None              = 0,
	EVRHandType__Left              = 1,
	EVRHandType__Right             = 2,
	EVRHandType__Both              = 3,
	EVRHandType__EVRHandType_MAX   = 4
};


// Enum SWGVR.EControllerType
enum class EControllerType : uint8_t
{
	EControllerType__SteamVR       = 0,
	EControllerType__Oculus        = 1,
	EControllerType__PS4Move       = 2,
	EControllerType__DUALSHOCK4    = 3,
	EControllerType__DUALSHOCK4_VR = 4,
	EControllerType__MouseAndKeyboard = 5,
	EControllerType__Switch        = 6,
	EControllerType__XBox          = 7,
	EControllerType__EControllerType_MAX = 8
};


// Enum SWGVR.EGrabSnapType
enum class EGrabSnapType : uint8_t
{
	EGrabSnapType__LocationToHand  = 0,
	EGrabSnapType__SnapToHand      = 1,
	EGrabSnapType__None            = 2,
	EGrabSnapType__EGrabSnapType_MAX = 3
};


// Enum SWGVR.EVRPlayType
enum class EVRPlayType : uint8_t
{
	EVRPlayType__UsingVR           = 0,
	EVRPlayType__NotUsingVR        = 1,
	EVRPlayType__EVRPlayType_MAX   = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SWGVR.HeldCollisionInfo
// 0x0002
struct FHeldCollisionInfo
{
	bool                                               bUsePhysics;                                              // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     Collision;                                                // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SWGVR.HeldGrabbableInfo
// 0x0078
struct FHeldGrabbableInfo
{
	bool                                               bUsePhysics;                                              // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     Collision;                                                // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TMap<class UPrimitiveComponent*, struct FHeldCollisionInfo> PrimitiveCollisionInfo;                                   // 0x0008(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EGrabSnapType                                      GrabSnapType;                                             // 0x0058(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FVector                                     AttachmentRelativeLocation;                               // 0x005C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AttachmentRelativeRotation;                               // 0x0068(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsLerpingToHand;                                          // 0x0074(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
};

// ScriptStruct SWGVR.MotionControllerInfo
// 0x00E0
struct FMotionControllerInfo
{
	struct FVector                                     OldWorldPosition;                                         // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InstantaneousVelocity;                                    // 0x0018(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FVector>                             PreviousPositions;                                        // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class AActor*>                              HoveredObjects;                                           // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class AActor*>                              HoveredGrabbables;                                        // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class AActor*>                              HeldGrabbables;                                           // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<class AActor*, struct FHeldGrabbableInfo>     HeldInfo;                                                 // 0x0068(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class AActor*                                      ClosestGrabbableActor;                                    // 0x00B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ClosestGrabbableDistance;                                 // 0x00C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	class AActor*                                      ClosestHoveredActor;                                      // 0x00C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ClosestHoveredComponent;                                  // 0x00D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ClosestDistance;                                          // 0x00D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTracked;                                               // 0x00DC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
