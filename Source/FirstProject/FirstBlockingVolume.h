// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FirstBlockingVolume.generated.h"

UCLASS()
class FIRSTPROJECT_API AFirstBlockingVolume : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFirstBlockingVolume();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Transition")
		class UBoxComponent* BlockingVolume;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Transition")
	class UBillboardComponent* Billboard;

	FTimerHandle CollisionTimerHandle;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION()
	void ChangeCollisionResponses();

public:	

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

};
