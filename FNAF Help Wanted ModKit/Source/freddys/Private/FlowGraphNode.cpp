// Fill out your copyright notice in the Description page of Project Settings.

#include "FlowGraphNode.h"

void AFlowGraphNode::UnregisterConnector(UFlowGraphConnector* Connector)
{
}

void AFlowGraphNode::SetFlowSource(bool EnableAsFlowSource)
{
}

void AFlowGraphNode::RegisterConnector(UFlowGraphConnector* Connector)
{
}

void AFlowGraphNode::OnFlowChanged()
{
}

void AFlowGraphNode::OnConnectorDisconnected(UFlowGraphConnector* MyConnector)
{
}

void AFlowGraphNode::OnConnectorConnected(UFlowGraphConnector* MyConnector, UFlowGraphConnector* TheirConnector)
{
}

bool AFlowGraphNode::IsFlowSource()
{
	return false;
}

bool AFlowGraphNode::HasFlow()
{
	return false;
}

TArray<class UFlowGraphConnector*> AFlowGraphNode::GetConnectors()
{
	return TArray<class UFlowGraphConnector*>();
}

void AFlowGraphNode::FlowTypeSwitch(EFlowGraphFlowType FlowType)
{
}

void AFlowGraphNode::CheckConnections()
{
}
