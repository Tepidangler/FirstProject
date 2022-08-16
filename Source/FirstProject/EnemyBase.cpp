// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBase.h"
#include "Components/SphereComponent.h"
#include "AIController.h"
#include "CharacterBase.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Sound/SoundCue.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Animation/AnimInstance.h"
#include "Components/CapsuleComponent.h"
#include "MainPlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AEnemyBase::AEnemyBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AgroSphere = CreateDefaultSubobject<USphereComponent>(TEXT("AgroSphere"));
	AgroSphere->SetupAttachment(GetRootComponent());
	AgroSphere->InitSphereRadius(600.f);

	CombatSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CombatSphere"));
	CombatSphere->SetupAttachment(GetRootComponent());
	CombatSphere->InitSphereRadius(75.f);

	LeftCombatCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftCombatCollison"));
	LeftCombatCollision->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, FName("EnemySocketL"));

	RightCombatCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("RightCombatCollison"));
	RightCombatCollision->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, FName("EnemySocketR"));

	bOverlappingCombatSphere = false;
	bLeftCollisionOverlapped = false;
	bRightCollisionOverlapped = false;
	bAttacking = false;
	bHasValidTarget = false;

	EnemyMovementStatus = EEnemyMovementStatus::EMS_Idle;

	Health = 75.f;
	MaxHealth = 100.f;
	Damage = 10.f;

	AttackMinTime = .5f;
	AttackMaxTime = 1.5f;

	DeathDelay = 3.f;
}

// Called when the game starts or when spawned
void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();
	AIController = Cast<AAIController>(GetController());


	AgroSphere->OnComponentBeginOverlap.AddDynamic(this, &AEnemyBase::AgroSphereOnOverlapBegin);
	AgroSphere->OnComponentEndOverlap.AddDynamic(this, &AEnemyBase::AgroSphereOnOverlapEnd);
	CombatSphere->OnComponentBeginOverlap.AddDynamic(this, &AEnemyBase::CombatSphereOnOverlapBegin);
	CombatSphere->OnComponentEndOverlap.AddDynamic(this, &AEnemyBase::CombatSphereOnOverlapEnd);
	LeftCombatCollision->OnComponentBeginOverlap.AddDynamic(this, &AEnemyBase::LeftCombatCollisionOnOverlapBegin);
	LeftCombatCollision->OnComponentEndOverlap.AddDynamic(this, &AEnemyBase::LeftCombatCollisionOnOverlapEnd);
	RightCombatCollision->OnComponentBeginOverlap.AddDynamic(this, &AEnemyBase::RightCombatCollisionOnOverlapBegin);
	RightCombatCollision->OnComponentEndOverlap.AddDynamic(this, &AEnemyBase::RightCombatCollisionOnOverlapEnd);

	LeftCombatCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	LeftCombatCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	LeftCombatCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	LeftCombatCollision->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);

	RightCombatCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RightCombatCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	RightCombatCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	RightCombatCollision->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	
}

// Called every frame
void AEnemyBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemyBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemyBase::SetEnemyMovementStatus(EEnemyMovementStatus Status)
{
	EnemyMovementStatus = Status;
	
}

void AEnemyBase::AgroSphereOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && Alive())
	{
		ACharacterBase* Target = Cast<ACharacterBase>(OtherActor);
		if (Target)
		{
			MoveToTarget(Target);
		}
	}
}

void AEnemyBase::AgroSphereOnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor)
	{
		ACharacterBase* Target = Cast<ACharacterBase>(OtherActor);
		if (Target)
		{
			bHasValidTarget = false;			
			Target->SetHasCombatTarget(false);
			SetEnemyMovementStatus(EEnemyMovementStatus::EMS_Idle);
			if (AIController)
			{
				AIController->StopMovement();
			}
		}
	}
}

void AEnemyBase::CombatSphereOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && Alive())
	{
		ACharacterBase* MC = Cast<ACharacterBase>(OtherActor);
		if (MC)
		{
			bHasValidTarget = true;
			MC->SetCombatTarget(this);
			MC->SetHasCombatTarget(true);

			if (MC->MainPlayerController)
			{
				MC->MainPlayerController->DisplayEnemyHealthBar();
			}

			CombatTarget = MC;
			bOverlappingCombatSphere = true;
			Attack();
		}	
	}
}

void AEnemyBase::CombatSphereOnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor)
	{
		ACharacterBase* MC = Cast<ACharacterBase>(OtherActor);
		if (MC)
		{
			if (MC->CombatTarget == this)
			{
				if (MC->MainPlayerController)
				{
					MC->MainPlayerController->RemoveEnemyHealthBar();
				}

				MC->SetCombatTarget(nullptr);

			}
			bOverlappingCombatSphere = false;

			if (EnemyMovementStatus != EEnemyMovementStatus::EMS_Attacking)
			{
				MoveToTarget(MC);
				CombatTarget = nullptr;
				
			}
			GetWorldTimerManager().ClearTimer(AttackTimer);

		}
	}
}

void AEnemyBase::LeftCombatCollisionOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor)
	{
		if (bAttacking)
		{
			ACharacterBase* MC = Cast<ACharacterBase>(OtherActor);
			if (MC)
			{
				if (MC->HitParticles)
				{
						const USkeletalMeshSocket* WeaponSocket = GetMesh()->GetSocketByName("TipSocketL");
					if (WeaponSocket)
					{
						FVector SocketLocation = WeaponSocket->GetSocketLocation(GetMesh());
						UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), MC->HitParticles, SocketLocation, FRotator(0.f), false);
					}

				}
				if (MC->HitSound)
				{
					UGameplayStatics::PlaySound2D(this, MC->HitSound);
				}

				if (DamageTypeClass)
				{
					UGameplayStatics::ApplyDamage(MC, Damage, AIController, this, DamageTypeClass);
				}
			}
		}
		
	}
}

void AEnemyBase::LeftCombatCollisionOnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bLeftCollisionOverlapped = false;
}

void AEnemyBase::RightCombatCollisionOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor)
	{
		if (bAttacking)
		{
			ACharacterBase* MC = Cast<ACharacterBase>(OtherActor);
			if (MC)
			{
				if (MC->HitParticles)
				{
					const USkeletalMeshSocket* WeaponSocket = GetMesh()->GetSocketByName("TipSocketR");
					if (WeaponSocket)
					{
						FVector SocketLocation = WeaponSocket->GetSocketLocation(GetMesh());
						UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), MC->HitParticles, SocketLocation, FRotator(0.f), false);
					}

				}
				if (MC->HitSound)
				{
					UGameplayStatics::PlaySound2D(this, MC->HitSound);
				}
				if (DamageTypeClass)
				{
					UGameplayStatics::ApplyDamage(MC, Damage, AIController, this, DamageTypeClass);
				}
			}
		}
		
	}
}

void AEnemyBase::RightCombatCollisionOnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bRightCollisionOverlapped = false;
}

void AEnemyBase::ActivateCollision()
{
	if (bLeftCollisionOverlapped)
	{
		LeftCombatCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	}
	if (bRightCollisionOverlapped)
	{
		RightCombatCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	}
}

void AEnemyBase::DeactivateCollision()
{
	if (!bLeftCollisionOverlapped)
	{
		LeftCombatCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	if (!bRightCollisionOverlapped)
	{
		RightCombatCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

void AEnemyBase::PlaySwingSound()
{
	UGameplayStatics::PlaySound2D(this, SwingSound);
}

void AEnemyBase::LeftCombatAboutToCollide()
{
	bLeftCollisionOverlapped = true;
}

void AEnemyBase::RightCombatAboutToCollide()
{
	bRightCollisionOverlapped = true;
}

void AEnemyBase::Attack()
{
	if (Alive() && bHasValidTarget)
	{
		if (AIController)
		{
			AIController->StopMovement();
			SetEnemyMovementStatus(EEnemyMovementStatus::EMS_Attacking);
		}
		if (!bAttacking)
		{
			bAttacking = true;
			UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
			if (AnimInstance)
			{
				AnimInstance->Montage_Play(CombatMontage, 1.35);
				AnimInstance->Montage_JumpToSection(FName("AttackA"), CombatMontage);

			}
			/**
			if (SwingSound)
			{
				UGameplayStatics::PlaySound2D(this, SwingSound);

			}

			*/
		}
	}
	

}

void AEnemyBase::AttackEnd()
{
	bAttacking = false;

	if (bOverlappingCombatSphere)
	{
		float AttackTime = FMath::FRandRange(AttackMinTime, AttackMaxTime);
		GetWorldTimerManager().SetTimer(AttackTimer, this, &AEnemyBase::Attack, AttackTime, false);
	}
	else
	{
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		if (AnimInstance)
		{
			AnimInstance->Montage_Stop(1.f, CombatMontage);
		}

	}

}

void AEnemyBase::MoveToTarget(ACharacterBase* Target)
{
	SetEnemyMovementStatus(EEnemyMovementStatus::EMS_MoveToTarget);

	if (AIController)
	{

		FAIMoveRequest MoveRequest;
		MoveRequest.SetGoalActor(Target);
		MoveRequest.SetAcceptanceRadius(10.f);

		FNavPathSharedPtr NavPath;

		AIController->MoveTo(MoveRequest, &NavPath);

		//auto PathPoints = NavPath->GetPathPoints();
		/**
				for (auto Points : PathPoints)
				{
					FVector Location = Points.Location;

					UKismetSystemLibrary::DrawDebugSphere(this, Location, 25.f, 8, FLinearColor::Red, 10.f, 1.5f);		}
				}
		*/
	}
}

float AEnemyBase::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	if (Health - DamageAmount <= 0.f)
	{
		Health = 0.f;
		if (Alive())
		{
			Die();
		}
	}
	else
	{
		Health -= DamageAmount;
	}

	return DamageAmount;
}

void AEnemyBase::Die()
{
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		if (AnimInstance && CombatMontage && Alive())
		{
			AnimInstance->Montage_Play(CombatMontage, 1.f);
			AnimInstance->Montage_JumpToSection(FName("Death"), CombatMontage);
			//AnimInstance->Montage_Stop(1.f, CombatMontage);
			SetEnemyMovementStatus(EEnemyMovementStatus::EMS_Dead);
			GetWorld()->GetTimerManager().PauseTimer(AttackTimer);
		}

		LeftCombatCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		RightCombatCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		CombatSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		AgroSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldDynamic, ECollisionResponse::ECR_Ignore); // Commented out because I don't want players running through dead enemy actors

}

void AEnemyBase::DeathEnd()
{
	GetMesh()->bPauseAnims = true;
	GetMesh()->bNoSkeletonUpdate = true;
	if (DeathParticles)
	{
		FVector Location = GetMesh()->GetComponentLocation();
		FVector ParticleSpawnLocation(Location.X,Location.Y,(Location.Z - GetCapsuleComponent()->GetScaledCapsuleHalfHeight()));
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DeathParticles, Location, FRotator(0.f), true);
	}
	GetWorldTimerManager().SetTimer(DeathTimer, this, &AEnemyBase::Disappear, DeathDelay);
}

void AEnemyBase::Disappear()
{
	Destroy();
}

bool AEnemyBase::Alive()
{
	return GetEnemyMovementStatus()  !=  EEnemyMovementStatus::EMS_Dead;
}

