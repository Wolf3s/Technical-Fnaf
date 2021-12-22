// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "FlowGraphConnector.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FREDDYS_API UFlowGraphConnector : public USceneComponent
{
	GENERATED_BODY()

public:	

	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
	//struct FScriptMulticastDelegate					   OnFlowGraphDisconnected;                                  
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UFlowGraphConnector*                         ConnectedTo;                                              
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              FlowConnectorDistance;                                    
	
	UFUNCTION(BlueprintCallable)
	void OnDisconnected();
			
	UFUNCTION(BlueprintCallable)
	void OnConnectorRegistered();
			
	UFUNCTION(BlueprintCallable)
	void OnConnected(class UFlowGraphConnector* OtherConnector);
			
	UFUNCTION(BlueprintCallable)
	bool HasFlow();
			
	UFUNCTION(BlueprintCallable)
	class AFlowGraphNode* GetNodeOwner();
			
	UFUNCTION(BlueprintCallable)
	class AFlowGraphNode* GetConnectedNode();
			
	UFUNCTION(BlueprintCallable)
	class UFlowGraphConnector* GetConnectedConnector();
			
	UFUNCTION(BlueprintCallable)
	void Disconnect();
			
	UFUNCTION(BlueprintCallable)
	void Connect(class UFlowGraphConnector* OtherConnector);
			
	UFUNCTION(BlueprintCallable)
	void CheckConnection();
};
