// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstBlockingVolume.h"
#include "Components/BoxComponent.h"
#include "Components/BillboardComponent.h"
#include "FirstProjectGameInstance.h"
#include "FirstInterface.h"
#include "CharacterBase.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AFirstBlockingVolume::AFirstBlockingVolume()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	BlockingVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("BlockingVolume"));
	SetRootComponent(BlockingVolume);
	Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));

}

// Called when the game starts or when spawned
void AFirstBlockingVolume::BeginPlay()
{
	Super::BeginPlay();

	BlockingVolume->OnComponentBeginOverlap.AddDynamic(this, &AFirstBlockingVolume::OnOverlapBegin);
	BlockingVolume->OnComponentEndOverlap.AddDynamic(this, &AFirstBlockingVolume::OnOverlapEnd);

	BlockingVolume->SetCollisionProfileName(FName("InvisibleWallDynamic"));
	BlockingVolume->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	
}

void AFirstBlockingVolume::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{


}

void AFirstBlockingVolume::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ACharacterBase* MC = Cast<ACharacterBase>(UGameplayStatics::GetPlayerCharacter(this, 0));
	check(MC);
	
	if (MC->GetCombatStatus() == ECombatStatus::ECS_InCombat)
	{
		GetWorld()->GetTimerManager().SetTimer(CollisionTimerHandle, this, &AFirstBlockingVolume::ChangeCollisionResponses, 1.5f);
		UFirstProjectGameInstance* GameInstance = Cast<UFirstProjectGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
		check(GameInstance);
		GameInstance->SaveGame(0, true);
	}

}

void AFirstBlockingVolume::ChangeCollisionResponses()
{
	BlockingVolume->SetCollisionProfileName(FName("Wall"));
	BlockingVolume->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Block);
	BlockingVolume->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
}