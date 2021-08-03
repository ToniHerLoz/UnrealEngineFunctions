// Fill out your copyright notice in the Description page of Project Settings.


#include "SkeletonMeshBones.h"

void USkeletonMeshBones::HideSingleBoneByName(FName BoneName, USkinnedMeshComponent* Mesh)
{
	TArray<uint8>& EditableBoneVisibilityStates = Mesh->GetEditableBoneVisibilityStates();
	int32 index = Mesh->GetBoneIndex(BoneName);

	EditableBoneVisibilityStates[index] = 2;
	 
}
