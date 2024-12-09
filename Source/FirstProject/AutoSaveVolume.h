// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AutoSaveVolume.generated.h"

UCLASS()
class FIRSTPROJECT_API AAutoSaveVolume : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAutoSaveVolume();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Volumes")
	class UBoxComponent* AutoSaveVolume;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Volumes")
	bool bHasOverlapped;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


};
