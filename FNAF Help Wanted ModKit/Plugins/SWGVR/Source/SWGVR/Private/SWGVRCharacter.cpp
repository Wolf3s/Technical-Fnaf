// Fill out your copyright notice in the Description page of Project Settings.

#include "SWGVRCharacter.h"

void ASWGVRCharacter::StopFrameCounters()
{
}

void ASWGVRCharacter::StartFrameCounters()
{
}

void ASWGVRCharacter::SetVRModeEnabled(bool enable)
{
}

void ASWGVRCharacter::SetHeldOffset(EVRHandType Hand, FVector NewOffset, int ItemIndex)
{
}

void ASWGVRCharacter::SetCameraWorldRotation(FRotator Rotation)
{
}

void ASWGVRCharacter::SetCameraWorldLocationAndRotation(FVector Location, FRotator Rotation)
{
}

void ASWGVRCharacter::SetCameraWorldLocation(FVector Location)
{
}

void ASWGVRCharacter::SetCameraRelativeRotation(FRotator Rotation)
{
}

void ASWGVRCharacter::SetCameraRelativeLocationAndRotation(FVector Location, FRotator Rotation)
{
}

void ASWGVRCharacter::SetCameraRelativeLocation(FVector Location)
{
}

void ASWGVRCharacter::ReleaseGrabbable(AActor* Grabbable, bool bForce, bool bOverrideVelocity, FVector Velocity)
{
}

void ASWGVRCharacter::ReleaseAll(EVRHandType Hand, bool bForce, bool bOverrideVelocity, FVector Velocity)
{
}

void ASWGVRCharacter::ProcessInterpolatedGrab(FTransform AttachmentTransform, AActor* HeldActor, EVRHandType Hand, FHeldGrabbableInfo* ActorGrabbablePair)
{
}

void ASWGVRCharacter::OnTrackedControllerChanged()
{
}

void ASWGVRCharacter::OnRightEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
}

void ASWGVRCharacter::OnRightBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, FHitResult SweepResult)
{
}

void ASWGVRCharacter::OnRelease(AActor* Grabbable, EVRHandType Hand)
{
}

void ASWGVRCharacter::OnLeftEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
}

void ASWGVRCharacter::OnLeftBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, FHitResult SweepResult)
{
}

void ASWGVRCharacter::OnHoverEnd(AActor* HoveredActor, EVRHandType Hand)
{
}

void ASWGVRCharacter::OnHoverBegin(AActor* HoveredActor, EVRHandType Hand)
{
}

void ASWGVRCharacter::OnHeldActorDestroyed(AActor* DestroyedActor)
{
}

void ASWGVRCharacter::OnGrabHoverEnd(AActor* Grabbable, EVRHandType Hand)
{
}

void ASWGVRCharacter::OnGrabHoverBegin(AActor* Grabbable, EVRHandType Hand)
{
}

void ASWGVRCharacter::OnGrab(AActor* Grabbable, EVRHandType Hand)
{
}

bool ASWGVRCharacter::IsUsingPad()
{
	return false;
}

bool ASWGVRCharacter::IsInVRMode()
{
	return false;
}

void ASWGVRCharacter::GrabGrabbable(AActor* Grabbable, EVRHandType Hand, bool bForce)
{
}

FName ASWGVRCharacter::GetPadTrackingSource()
{
	return FName();
}

FVector ASWGVRCharacter::GetHeldOffset(EVRHandType Hand, int ItemIndex)
{
	return FVector();
}

EVRHandType ASWGVRCharacter::GetHandForPad()
{
	return EVRHandType();
}

USceneComponent* ASWGVRCharacter::GetHandAttachPoint(EVRHandType Hand)
{
	return nullptr;
}

FHeldGrabbableInfo ASWGVRCharacter::GetGrabbableInfo(AActor* HeldActor)
{
	return FHeldGrabbableInfo();
}

EControllerType ASWGVRCharacter::GetControllerDeviceType()
{
	return EControllerType();
}

void ASWGVRCharacter::AddHeldOffset(EVRHandType Hand, FVector AdditiveValue, int ItemIndex)
{
}
