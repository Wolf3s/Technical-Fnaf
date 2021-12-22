// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FlowGraphNode.generated.h"

UENUM(Blueprintable)
enum class EFlowGraphFlowType : uint8
{
	HasFlow = 0,
	NoFlow = 1
};

UCLASS()
class FREDDYS_API AFlowGraphNode : public AActor
{
	GENERATED_BODY()
	
public:	

	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bIsFlowSource;                                          
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bIsConnectedToFlow;                                     

	UFUNCTION(BlueprintCallable)
	void UnregisterConnector(class UFlowGraphConnector* Connector);
			
	UFUNCTION(BlueprintCallable)
	void SetFlowSource(bool EnableAsFlowSource);
			
	UFUNCTION(BlueprintCallable)
	void RegisterConnector(class UFlowGraphConnector* Connector);
			
	UFUNCTION(BlueprintCallable)
	void OnFlowChanged();
			
	UFUNCTION(BlueprintCallable)
	void OnConnectorDisconnected(class UFlowGraphConnector* MyConnector);
			
	UFUNCTION(BlueprintCallable)
	void OnConnectorConnected(class UFlowGraphConnector* MyConnector, class UFlowGraphConnector* TheirConnector);
			
	UFUNCTION(BlueprintCallable)
	bool IsFlowSource();
			
	UFUNCTION(BlueprintCallable)
	bool HasFlow();
			
	UFUNCTION(BlueprintCallable)
	TArray<class UFlowGraphConnector*> GetConnectors();
			
	UFUNCTION(BlueprintCallable)
	void FlowTypeSwitch(EFlowGraphFlowType FlowType);
			
	UFUNCTION(BlueprintCallable)
	void CheckConnections();
};
