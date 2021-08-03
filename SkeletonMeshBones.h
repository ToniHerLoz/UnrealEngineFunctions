// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SkeletonMeshBones.generated.h"

/**
 * 
 */
UCLASS()
class USECRETARY_API USkeletonMeshBones : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "MyCategory")
		static void HideSingleBoneByName(FName BoneName, USkinnedMeshComponent* Mesh);
	
};
