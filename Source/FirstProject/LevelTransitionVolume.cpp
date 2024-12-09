// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelTransitionVolume.h"
#include "Components/BoxComponent.h"
#include "CharacterBase.h"
#include "MainPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "FirstProjectGameInstance.h"
#include "Components/BillboardComponent.h"
#include "Particles/ParticleSystemComponent.h"

bool ALevelTransitionVolume::bIsVisible = false;

// Sets default values
ALevelTransitionVolume::ALevelTransitionVolume()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TransitionVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("Transition Volume"));
	RootComponent = TransitionVolume;
	LevelTransitionParticlesComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Idle Particles Component"));
	LevelTransitionParticlesComponent->SetupAttachment(RootComponent);

	Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
	Billboard->SetupAttachment(GetRootComponent());

	TransitionLevelName = "SunTemple";

	LevelTransitionParticlesComponent->SetHiddenInGame(true);

	bIsVisible = false;

	LoadDelay = 5.f;
}

// Called when the game starts or when spawned
void ALevelTransitionVolume::BeginPlay()
{
	Super::BeginPlay();
	TransitionVolume->OnComponentBeginOverlap.AddDynamic(this, &ALevelTransitionVolume::OnOverlapBegin);
	TransitionVolume->OnComponentEndOverlap.AddDynamic(this, &ALevelTransitionVolume::OnOverlapEnd);
	
}

// Called every frame
void ALevelTransitionVolume::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsVisible)
	{
		LevelTransitionParticlesComponent->SetHiddenInGame(false);
	}

}

void ALevelTransitionVolume::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && bIsVisible)
	{
		
		ACharacterBase* MC = Cast<ACharacterBase>(OtherActor);
		AMainPlayerController* PC = Cast<AMainPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
		check(PC);
		if (MC)
		{
			PC->DisplayLoadingScreen();
			GetWorldTimerManager().SetTimer(LoadTimer, this, &ALevelTransitionVolume::RemoveLoadingScreen, LoadDelay);
			UFirstProjectGameInstance* GameInstance = Cast<UFirstProjectGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
			check(GameInstance);
			GameInstance->SaveGame(0, true);
			if (!TransitionLevelName.ToString().EndsWith(TEXT("Interior")))
			{
				GameInstance->CurrentSaveGame = nullptr;
			}
			else
			{
				GameInstance->bIsMovingToInteriorMap = true;
			}
			MC->SwitchLevel(TransitionLevelName);
		}
	}
}

void ALevelTransitionVolume::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

void ALevelTransitionVolume::RemoveLoadingScreen()
{
	AMainPlayerController* PC = Cast<AMainPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	check(PC);
	PC->RemoveLoadingScreen();
}

void ALevelTransitionVolume::SetIsVisible(bool Visibility)
{
	ALevelTransitionVolume::bIsVisible = Visibility;
}