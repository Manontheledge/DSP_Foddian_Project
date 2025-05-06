// Copyright Epic Games, Inc. All Rights Reserved.

#include "DSP_Foddian_ProjectGameMode.h"
#include "DSP_Foddian_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADSP_Foddian_ProjectGameMode::ADSP_Foddian_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
