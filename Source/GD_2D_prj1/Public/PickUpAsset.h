// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PickUpAsset.generated.h"

/**
 * 
 */
UCLASS()
class GD_2D_PRJ1_API UPickUpAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "itemName")
	FString ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quantity")
	int Quantity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Icon")
	class UPaperSprite* Icon;
	
	void UPickAsset();
};
