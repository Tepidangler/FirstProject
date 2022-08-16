// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAnimInstance.h"
#include "EnemyBase.h"
#include "Kismet/KismetMathLibrary.h"

void UEnemyAnimInstance::NativeInitializeAnimation()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
		if (Pawn)
		{
			Enemy = Cast<AEnemyBase>(Pawn);
		}
	}

}

void UEnemyAnimInstance::UpdateAnimationProperties()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
		if (Pawn)
		{
			Enemy = Cast<AEnemyBase>(Pawn);

		}
	}
	if (Pawn)
	{
		UWorld* World = GetWorld();
		//Set Speed
		FVector Velocity = Pawn->GetVelocity();
		FVector LateralSpeed = FVector(Velocity.X, Velocity.Y, 0.f);
		MovementSpeed = LateralSpeed.Size();
	}

}


