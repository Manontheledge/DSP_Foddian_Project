// Copyright Epic Games, Inc. All Rights Reserved.

#include "MainMenuGameMode.h"
#include "MainMenuCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMainMenuGameMode::AMainMenuGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
