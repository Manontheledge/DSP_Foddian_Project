// Copyright Epic Games, Inc. All Rights Reserved.

#include "DSP_Foddian_ProjectGameMode.h"
#include "DSP_Foddian_ProjectCharacter.h"

#include "UObject/ConstructorHelpers.h"
#include "EngineUtils.h" // For TActorIterator
#include "GameFramework/PlayerStart.h" // For APlayerStart
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h" // For UGameplayStatics
#include "GameFramework/Pawn.h" // For APawn


ADSP_Foddian_ProjectGameMode::ADSP_Foddian_ProjectGameMode()
{
    // set default pawn class to our Blueprinted character E: / Unreal / DSP_Foddian_Project / Content / ThirdPerson / Blueprints / BP_AvatarCharacter.uasset
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT(" E: / Unreal / DSP_Foddian_Project / Content / ThirdPerson / Blueprints / BP_AvatarCharacter.uasset"));
    if (PlayerPawnBPClass.Class != nullptr)
    {
        DefaultPawnClass = PlayerPawnBPClass.Class;
    }

}
void ADSP_Foddian_ProjectGameMode::WinGame()
{
	// call for win screen
	//make a call to the game instance to load the main menu
}

void ADSP_Foddian_ProjectGameMode::RespawnPlayer( FTransform SpawnTransform)
{
     APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
	     if (!PlayerController) return;

    // Destroy old pawn
    if (APawn* OldPawn = PlayerController->GetPawn())
    {
        OldPawn->Destroy();
    }

    // Spawn new pawn at the provided transform
    if (DefaultPawnClass)
    {
        APawn* NewPawn = GetWorld()->SpawnActor<APawn>(DefaultPawnClass, SpawnTransform);
        if (NewPawn)
        {
            PlayerController->Possess(NewPawn);
        }
    }
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("DefaultPawnClass is not set!"));
	}
}