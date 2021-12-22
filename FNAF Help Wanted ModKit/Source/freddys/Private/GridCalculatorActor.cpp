// Fill out your copyright notice in the Description page of Project Settings.

#include "GridCalculatorActor.h"

void AGridCalculatorActor::SetCellDebugDisplay(int CellID, int CellX, int CellY, int CellDistance)
{
}

void AGridCalculatorActor::ResetDistances()
{
}

void AGridCalculatorActor::GetGridSize(int Width, int Height)
{
}

int AGridCalculatorActor::GetDistanceToCellAtWorldPosition(FVector WorldPosition)
{
	return 0;
}

int AGridCalculatorActor::GetDistanceToCell(int CellID)
{
	return 0;
}

FVector AGridCalculatorActor::GetCellWorldPositionByCellPos(int CellX, int CellY)
{
	return FVector();
}

FVector AGridCalculatorActor::GetCellWorldPosition(int CellID)
{
	return FVector();
}

TArray<int> AGridCalculatorActor::GetCellsBetweenDistances(int MinDistance, int MaxDistance)
{
	return TArray<int>();
}

TArray<int> AGridCalculatorActor::GetCellsAtDistance(int Distance)
{
	return TArray<int>();
}

void AGridCalculatorActor::GetCellPosition(int CellID, int CellX, int CellY)
{
}

void AGridCalculatorActor::GetCellPosFromWorldPosition(FVector WorldPosition, int CellX, int CellY)
{
}

int AGridCalculatorActor::GetCellIDFromWorldPosition(FVector WorldPosition)
{
	return 0;
}

int AGridCalculatorActor::GetCellIDFromGridPosition(int CellX, int CellY)
{
	return 0;
}

TArray<int> AGridCalculatorActor::FindPathFromWorldPositions(FVector WorldPositionStart, FVector WorldPositionEnd)
{
	return TArray<int>();
}

TArray<int> AGridCalculatorActor::FindPathFromCellIDs(int StartCellID, int EndCellID)
{
	return TArray<int>();
}

void AGridCalculatorActor::CalculateDistancesFromWorldPosition(FVector WorldPosition)
{
}

void AGridCalculatorActor::CalculateDistancesFromGridPosition(int GridX, int GridY)
{
}
