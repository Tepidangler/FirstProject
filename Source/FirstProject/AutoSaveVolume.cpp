// Fill out your copyright notice in the Description page of Project Settings.


#include "AutoSaveVolume.h"
#include "Components/BoxComponent.h"
#include "FirstProjectGameInstance.h"
#include "FirstInterface.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AAutoSaveVolume::AAutoSaveVolume()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	bHasOverlapped = false;
	AutoSaveVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("AutoSaveVolume"));
	SetRootComponent(AutoSaveVolume);
}

// Called when the game starts or when spawned
void AAutoSaveVolume::BeginPlay()
{
	Super::BeginPlay();

	AutoSaveVolume->OnComponentBeginOverlap.AddDynamic(this, &AAutoSaveVolume::OnOverlapBegin);
	AutoSaveVolume->OnComponentEndOverlap.AddDynamic(this, &AAutoSaveVolume::OnOverlapEnd);
	
}


void AAutoSaveVolume::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}


void AAutoSaveVolume::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (!bHasOverlapped)
	{
		UFirstProjectGameInstance* GameInstance = Cast<UFirstProjectGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

		check(GameInstance);
		if (!GameInstance->bLoadingSave)
		{
			GameInstance->SaveGame(0, true);
		}
	}

	bHasOverlapped = true;
}