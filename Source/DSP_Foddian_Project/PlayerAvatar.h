// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerAvatar.generated.h"

UCLASS()
class DSP_FODDIAN_PROJECT_API APlayerAvatar : public ACharacter
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerAvatar();
	void AMoveForward(float Value); // Function to move the player forward/backward
	void AMoveRight(float Value); // Function to move the player right/left
	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void SetSpawnPoint(FVector InSpawnPoint); // Function to set the spawn point
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable) 
	void RespawnPlayer(); // Function to respawn the player
	UFUNCTION(BlueprintCallable) 
	void DiePlayer(); // Function to handle player death
	UFUNCTION(BlueprintCallable) 
	void HandleDeathInput(); // Function to handle player death input
	UFUNCTION(BlueprintCallable) 
	void HandleRespawnInput(); // Function to handle player respawn input
	
private:
	FVector SpawnLocation; // Variable to store the spawn location
	bool bIsDead; // Variable to check if the player is dead
	UPROPERTY(EditAnywhere, Category = "Delay")
	float RespanwnDelay = 5.0f; // Delay before respawning the player

	FTimerHandle RespawnTimer; // Timer handle for respawn delay


};
