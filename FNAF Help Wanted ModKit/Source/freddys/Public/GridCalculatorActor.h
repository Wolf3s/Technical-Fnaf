// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridCalculatorActor.generated.h"

UCLASS()
class FREDDYS_API AGridCalculatorActor : public AActor
{
	GENERATED_BODY()
	
public:	
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USceneComponent*                             Root;                                        
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int                                                GridWidth;                                   
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int                                                GridHeight;                                  
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              GridCellSize;                                
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bShowDebug;                                  
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UTextRenderComponent*>                TextRenderers;                               

	UFUNCTION(BlueprintCallable)
	void SetCellDebugDisplay(int CellID, int CellX, int CellY, int CellDistance);
		
	UFUNCTION(BlueprintCallable)
	void ResetDistances();
		
	UFUNCTION(BlueprintCallable)
	void GetGridSize(int Width, int Height);
		
	UFUNCTION(BlueprintCallable)
	int GetDistanceToCellAtWorldPosition(FVector WorldPosition);
		
	UFUNCTION(BlueprintCallable)
	int GetDistanceToCell(int CellID);
		
	UFUNCTION(BlueprintCallable)
	FVector GetCellWorldPositionByCellPos(int CellX, int CellY);
		
	UFUNCTION(BlueprintCallable)
	FVector GetCellWorldPosition(int CellID);
		
	UFUNCTION(BlueprintCallable)
	TArray<int> GetCellsBetweenDistances(int MinDistance, int MaxDistance);
		
	UFUNCTION(BlueprintCallable)
	TArray<int> GetCellsAtDistance(int Distance);
		
	UFUNCTION(BlueprintCallable)
	void GetCellPosition(int CellID, int CellX, int CellY);
		
	UFUNCTION(BlueprintCallable)
	void GetCellPosFromWorldPosition(FVector WorldPosition, int CellX, int CellY);
		
	UFUNCTION(BlueprintCallable)
	int GetCellIDFromWorldPosition(FVector WorldPosition);
		
	UFUNCTION(BlueprintCallable)
	int GetCellIDFromGridPosition(int CellX, int CellY);
		
	UFUNCTION(BlueprintCallable)
	TArray<int> FindPathFromWorldPositions(FVector WorldPositionStart, FVector WorldPositionEnd);
		
	UFUNCTION(BlueprintCallable)
	TArray<int> FindPathFromCellIDs(int StartCellID, int EndCellID);
		
	UFUNCTION(BlueprintCallable)
	void CalculateDistancesFromWorldPosition(FVector WorldPosition);
		
	UFUNCTION(BlueprintCallable)
	void CalculateDistancesFromGridPosition(int GridX, int GridY);

};
