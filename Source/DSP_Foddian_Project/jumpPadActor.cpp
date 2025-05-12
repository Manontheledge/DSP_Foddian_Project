// Fill out your copyright notice in the Description page of Project Settings.


#include "jumpPadActor.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Character.h"
#include "GameFramework/Actor.h"


// Sets default values
AjumpPadActor::AjumpPadActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;
	Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	TriggerArea = CreateDefaultSubobject<UCapsuleComponent>(TEXT("TriggerArea"));
	TriggerArea->SetupAttachment(Mesh);
	TriggerArea->SetCapsuleRadius(150.f);
	TriggerArea->SetCapsuleHalfHeight(50.f);
	TriggerArea->SetCollisionProfileName(TEXT("Trigger"));

	TriggerArea->OnComponentBeginOverlap.AddDynamic(this, &AjumpPadActor::OnOverlapBegin);

}

void AjumpPadActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (ACharacter* PlayerCharacter = Cast<ACharacter>(OtherActor))
	{
		// Check if the overlapping actor is a character
			// Launch the character in the direction of the jump pad
		PlayerCharacter->LaunchCharacter(LaunchDirection * LaunchStrength, true, true);
	}
}

// Called when the game starts or when spawned
void AjumpPadActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AjumpPadActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

