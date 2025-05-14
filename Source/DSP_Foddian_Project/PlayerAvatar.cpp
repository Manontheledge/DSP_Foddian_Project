// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerAvatar.h" // MUST be the first include


#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerStart.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Actor.h"
#include "Components/InputComponent.h"
#include "TimerManager.h"
// Sets default values
APlayerAvatar::APlayerAvatar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bIsDead = false; // Initialize the player as alive


}

// Called when the game starts or when spawned
void APlayerAvatar::BeginPlay()
{
	APlayerStart* Start = Cast<APlayerStart>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerStart::StaticClass()));
	//Super::BeginPlay();
	if(Start)
	{
		SpawnLocation = Start->GetActorLocation(); // Store the spawn location from PlayerStart
	}
	else{
		SpawnLocation = GetActorLocation(); // Store the initial spawn location
	}
}


// Called every frame
void APlayerAvatar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void APlayerAvatar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Bind input actions
	PlayerInputComponent->BindAction("Die", IE_Pressed, this, &APlayerAvatar::HandleDeathInput);
	PlayerInputComponent->BindAction("Respawn", IE_Pressed, this, &APlayerAvatar::HandleRespawnInput);
	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerAvatar::AMoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerAvatar::AMoveRight);
	PlayerInputComponent->BindAction("Jump",IE_Pressed, this, &APlayerAvatar::Jump);
	PlayerInputComponent->BindAction("Jump",IE_Released, this, &APlayerAvatar::StopJumping);
}
void APlayerAvatar::AMoveForward(float Value)
{
	// Move the player forward/backward
	AddMovementInput(GetActorForwardVector(), Value);
}
void APlayerAvatar::AMoveRight(float Value)
{
	// Move the player right/left
	AddMovementInput(GetActorRightVector(), Value);
}

void APlayerAvatar::HandleDeathInput()
{
	if (!bIsDead) // Check if the player is not already dead
	{

		DiePlayer(); // Call the function to handle player death
	}
}

void APlayerAvatar::DiePlayer()
{
	bIsDead = true; // Set the player as dead
	// Logic to handle player death
	// For example, play a death animation or sound
	AController* PlayerController = GetController();
	if (PlayerController)
	{
		PlayerController->SetIgnoreMoveInput(true); // Ignore player input
		PlayerController->SetIgnoreLookInput(true); // Ignore player look input
	}
	GetMesh()->SetVisibility(false); // Make the player invisible
	GetCharacterMovement()->DisableMovement(); // Stop any movement
	
	UE_LOG(LogTemp, Warning, TEXT("Player has died!"));

	// Start the respawn timer
	GetWorld()->GetTimerManager().SetTimer(RespawnTimer, this, &APlayerAvatar::RespawnPlayer, RespanwnDelay, false);
}
void APlayerAvatar::RespawnPlayer()
{
	SetActorLocation(SpawnLocation); // Respawn the player at the initial spawn location
	GetMesh()->SetVisibility(true); // Make the player visible again
	GetCharacterMovement()->StopMovementImmediately(); // Stop any movement
	AController* PlayerController = GetController();
	if (PlayerController)
	{
		PlayerController->SetIgnoreMoveInput(false);//Unpossess the player controller
		PlayerController->SetIgnoreLookInput(false); // Repossess the player
	}
	// Logic to handle player respawn
	// For example, play a respawn animation or sound
	bIsDead = false; // Set the player as alive
	UE_LOG(LogTemp, Warning, TEXT("Player has respawned!"));
}

void APlayerAvatar::HandleRespawnInput()
{
	if (bIsDead) // Check if the player is dead
	{
		RespawnPlayer(); // Call the function to respawn the player
	}
}
void APlayerAvatar::SetSpawnPoint(FVector InSpawnPoint)
{
	SpawnLocation = InSpawnPoint; // Set the spawn point to the specified location
}