// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SWGVRCharacter.generated.h"

// Enum SWGVR.EVRHandType
UENUM(Blueprintable)
enum class EVRHandType : uint8
{
	None = 0,
	Left = 1,
	Right = 2,
	Both = 3
};


// Enum SWGVR.EControllerType
UENUM(Blueprintable)
enum class EControllerType : uint8
{
	SteamVR = 0,
	Oculus = 1,
	PS4Move = 2,
	DUALSHOCK4 = 3,
	DUALSHOCK4_VR = 4,
	MouseAndKeyboard = 5,
	Switch = 6,
	XBox = 7
};


// Enum SWGVR.EGrabSnapType
UENUM(Blueprintable)
enum class EGrabSnapType : uint8
{
	LocationToHand = 0,
	SnapToHand = 1,
	None = 2
};


// Enum SWGVR.EVRPlayType
UENUM(Blueprintable)
enum class EVRPlayType : uint8
{
	UsingVR = 0,
	NotUsingVR = 1
};

USTRUCT(Blueprintable)
struct FHeldCollisionInfo
{
	GENERATED_BODY()

	bool                                               bUsePhysics;                                                                            
};

USTRUCT(Blueprintable)
struct FHeldGrabbableInfo
{
	GENERATED_BODY()

	bool                                               bUsePhysics;                                      
	TMap<class UPrimitiveComponent*, FHeldCollisionInfo> PrimitiveCollisionInfo;                         
	EGrabSnapType                                      GrabSnapType;                                     
	FVector                                     AttachmentRelativeLocation;                              
	FRotator                                    AttachmentRelativeRotation;                              
	bool                                               IsLerpingToHand;                                  
};

USTRUCT(Blueprintable)
struct FMotionControllerInfo
{
	GENERATED_BODY()

	FVector                                     OldWorldPosition;                                        
	FVector                                     Velocity;                                                
	FVector                                     InstantaneousVelocity;                                   
	TArray<FVector>                             PreviousPositions;                                       
	TArray<class AActor*>                              HoveredObjects;                                   
	TArray<class AActor*>                              HoveredGrabbables;                                
	TArray<class AActor*>                              HeldGrabbables;                                   
	TMap<class AActor*, FHeldGrabbableInfo>     HeldInfo;                                                
	class AActor*                                      ClosestGrabbableActor;                            
	float                                              ClosestGrabbableDistance;                         
	class AActor*                                      ClosestHoveredActor;                              
	class UPrimitiveComponent*                         ClosestHoveredComponent;                          
	float                                              ClosestDistance;                                  
	bool                                               bIsTracked;                                       
};

UCLASS()
class SWGVR_API ASWGVRCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	class UCameraComponent*                            CameraComp;                                        
	class USceneComponent*                             VROriginComp;                                      
	class USceneComponent*                             VRCameraAdjuster;                                  
	bool                                               bPositionalHeadTracking;                           
	class UMotionControllerComponent*                  LeftHandComponent;                                 
	class UMotionControllerComponent*                  RightHandComponent;                                
	class UMotionControllerComponent*                  PadMotionComponent;                                
	class USphereComponent*                            LeftHandTrigger;                                   
	class USphereComponent*                            RightHandTrigger;                                  
	class USphereComponent*                            PadTrigger;                                        
	class USceneComponent*                             LeftAttachPoint;                                   
	class USceneComponent*                             RightAttachPoint;                                  
	class USceneComponent*                             PadAttachPoint;                                    
	class UArrowComponent*                             PadInteractionPointer;                             
	EVRHandType                                        HandsThatGrab;                                     
	FName                                       LeftGrabActionName;                                       
	FName                                       RightGrabActionName;                                      
	float                                              ThrowMagnitude;                                    
	bool                                               bGrabClosest;                                      
	bool                                               bHoldMultiple;                                     
	EVRHandType                                        HandsThatInteract;                                 
	FName                                       LeftInteractActionName;                                   
	FName                                       RightInteractActionName;                                  
	bool                                               bUseEyeOffsetForEyeTracking;                       
	float                                              EyeOffset;                                         
	bool                                               bUseHandForPad;                                    
	EVRHandType                                        HandToUseAsPad;                                    
	float                                              PadLineTraceDistance;                              
	float                                              LerpGrabSpeed;                                     
	bool                                               bPerfCounterEnabled;                               
	float                                              FPSMin;                                            
	float                                              FPSMax;                                            
	float                                              FPSAverageOverTime;                                
	float                                              FPSImmediate;                                      
	float                                              PerfCounterSeconds;                                
	float                                              PerfCounterImmediateSeconds;                       
	float                                              TotalPerfSeconds;                                  
	int                                                FrameCounterForAverage;                               
	bool                                               VRModeEnabled;                                        

	void StopFrameCounters();
	void StartFrameCounters();
	void SetVRModeEnabled(bool enable);
	void SetHeldOffset(EVRHandType Hand, FVector NewOffset, int ItemIndex);
	void SetCameraWorldRotation(FRotator Rotation);
	void SetCameraWorldLocationAndRotation(FVector Location, FRotator Rotation);
	void SetCameraWorldLocation(FVector Location);
	void SetCameraRelativeRotation(FRotator Rotation);
	void SetCameraRelativeLocationAndRotation(FVector Location, FRotator Rotation);
	void SetCameraRelativeLocation(FVector Location);
	void ReleaseGrabbable(class AActor* Grabbable, bool bForce, bool bOverrideVelocity, FVector Velocity);
	void ReleaseAll(EVRHandType Hand, bool bForce, bool bOverrideVelocity, FVector Velocity);
	void ProcessInterpolatedGrab(FTransform AttachmentTransform, class AActor* HeldActor, EVRHandType Hand, FHeldGrabbableInfo* ActorGrabbablePair);
	void OnTrackedControllerChanged();
	void OnRightEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnRightBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void OnRelease(class AActor* Grabbable, EVRHandType Hand);
	void OnLeftEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnLeftBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void OnHoverEnd(class AActor* HoveredActor, EVRHandType Hand);
	void OnHoverBegin(class AActor* HoveredActor, EVRHandType Hand);
	void OnHeldActorDestroyed(class AActor* DestroyedActor);
	void OnGrabHoverEnd(class AActor* Grabbable, EVRHandType Hand);
	void OnGrabHoverBegin(class AActor* Grabbable, EVRHandType Hand);
	void OnGrab(class AActor* Grabbable, EVRHandType Hand);
	bool IsUsingPad();
	bool IsInVRMode();
	void GrabGrabbable(class AActor* Grabbable, EVRHandType Hand, bool bForce);
	FName GetPadTrackingSource();
	FVector GetHeldOffset(EVRHandType Hand, int ItemIndex);
	EVRHandType GetHandForPad();
	class USceneComponent* GetHandAttachPoint(EVRHandType Hand);
	FHeldGrabbableInfo GetGrabbableInfo(class AActor* HeldActor);
	EControllerType GetControllerDeviceType();
	void AddHeldOffset(EVRHandType Hand, FVector AdditiveValue, int ItemIndex);
};
