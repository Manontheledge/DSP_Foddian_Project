// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DSP_Foddian_ProjectGameMode.generated.h"

UCLASS(minimalapi)
class ADSP_Foddian_ProjectGameMode : public AGameModeBase
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Game")
	void WinGame();
	UFUNCTION(BlueprintCallable, Category = "Respawn")
	void RespawnPlayer(FTransform SpawnTransform);


public:
	ADSP_Foddian_ProjectGameMode();

};



