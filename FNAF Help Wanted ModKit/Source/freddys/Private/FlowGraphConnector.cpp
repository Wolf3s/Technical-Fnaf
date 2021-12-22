// Fill out your copyright notice in the Description page of Project Settings.

#include "FlowGraphConnector.h"

void UFlowGraphConnector::OnDisconnected()
{
}

void UFlowGraphConnector::OnConnectorRegistered()
{
}

void UFlowGraphConnector::OnConnected(UFlowGraphConnector* OtherConnector)
{
}

bool UFlowGraphConnector::HasFlow()
{
	return false;
}

AFlowGraphNode* UFlowGraphConnector::GetNodeOwner()
{
	return nullptr;
}

AFlowGraphNode* UFlowGraphConnector::GetConnectedNode()
{
	return nullptr;
}

UFlowGraphConnector* UFlowGraphConnector::GetConnectedConnector()
{
	return nullptr;
}

void UFlowGraphConnector::Disconnect()
{
}

void UFlowGraphConnector::Connect(UFlowGraphConnector* OtherConnector)
{
}

void UFlowGraphConnector::CheckConnection()
{
}
