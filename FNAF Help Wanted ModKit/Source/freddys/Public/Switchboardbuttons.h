// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Switchboardbuttons.generated.h"

UCLASS()
class FREDDYS_API ASwitchboardbuttons : public AActor
{
	GENERATED_BODY()
	
public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString                                     buttonID;                                                 // 0x0330(0x0010) (Edit, ZeroConstructor)

	UFUNCTION(BlueprintCallable)
	void OnSwitchBoardButtonPessed(FString buttonidentification);

	UFUNCTION(BlueprintCallable)
	void BeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
};
