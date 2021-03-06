// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "FortniteClonePlayerState.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITECLONE_API AFortniteClonePlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:
	AFortniteClonePlayerState();

	bool InBuildMode;
	FString BuildMode;
	bool HoldingWeapon;
	bool AimedIn;
	TArray<int> EquippedWeapons; //0 for pickaxe, 1 for assault rifle
	int CurrentWeapon;

protected:

private:

};
