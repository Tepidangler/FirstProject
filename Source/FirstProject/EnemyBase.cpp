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
#include "ProjectileBase.h"
#include "DrawDebugHelpers.h"

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
	LeftCombatCollision->SetupAttachment(GetMesh(), FName("EnemySocketL"));

	RightCombatCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("RightCombatCollison"));
	RightCombatCollision->SetupAttachment(GetMesh(), FName("EnemySocketR"));

	bOverlappingAgroSphere = false;
	bOverlappingCombatSphere = false;
	bLeftCollisionOverlapped = false;
	bRightCollisionOverlapped = false;
	bAttacking = false;
	bHasValidTarget = false;
	bMeleeCombat = true;
	bShooting = false;
	bIsBossEnemy = false;

	EnemyMovementStatus = EEnemyMovementStatus::EMS_Idle;

	Health = 75.f;
	MaxHealth = 100.f;
	Damage = 10.f;

	AttackMinTime = .5f;
	AttackMaxTime = 3.5f;

	DeathDelay = 3.f;

	Desperation = 0.f;
}

// Called when the game starts or when spawned
void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();
	AIController = Cast<AAIController>(GetController());


	AgroSphere->OnComponentBeginOverlap.AddDynamic(this, &AEnemyBase::AgroSphereOnOverlapBegin);
	AgroSphere->OnComponentEndOverlap.AddDynamic(this, &AEnemyBase::AgroSphereOnOverlapEnd);
	AgroSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	AgroSphere->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldDynamic, ECollisionResponse::ECR_Ignore);
	CombatSphere->OnComponentBeginOverlap.AddDynamic(this, &AEnemyBase::CombatSphereOnOverlapBegin);
	CombatSphere->OnComponentEndOverlap.AddDynamic(this, &AEnemyBase::CombatSphereOnOverlapEnd);
	CombatSphere->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldDynamic, ECollisionResponse::ECR_Ignore);
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

	GetMesh()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
}

// Called every frame
void AEnemyBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bIsBossEnemy && bOverlappingAgroSphere)
	{
		Raycast(CastHit);
	}

	if (bCharging && IsCharacterInView())
	{
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		if (AnimInstance)
		{
			AnimInstance->Montage_Play(CombatMontage, 1.35f);
			AnimInstance->Montage_JumpToSection(FName("ChargeBlastFire"), CombatMontage);
			bCharging = false;
		}

	}

	if (bUltimateAttack && IsCharacterInView())
	{
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		if (AnimInstance)
		{
			AnimInstance->Montage_Play(CombatMontage, 1.35f);
			AnimInstance->Montage_JumpToSection(FName("UltimateFire"), CombatMontage);
			bUltimateAttack = false;
		}
	}
	/**
	if (Projectile)
	{

		ProjectileLocation.Add(Projectile->GetActorLocation());

		if (ProjectileLocation.Num() != 0)
		{
			for (auto p : ProjectileLocation)
			{
				DrawDebugLine(GetWorld(), GetMesh()->GetSocketByName(FName("Muzzle_L"))->GetSocketLocation(GetMesh()), p, FColor::Red, true);
			}
		}
	}
	*/
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
	bOverlappingAgroSphere = true;
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
			Target->UpdateCombatTarget();
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
			MC->UpdateCombatTarget();
			CombatTarget = MC;
			bOverlappingCombatSphere = true;
			float AttackTime = FMath::FRandRange(AttackMinTime, AttackMaxTime);
			GetWorldTimerManager().SetTimer(AttackTimer, this, &AEnemyBase::Attack, AttackTime, false);
		}	
	}
}

void AEnemyBase::CombatSphereOnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && OtherComp)
	{
		ACharacterBase* MC = IFirstInterface::Execute_SetPlayerRef(OtherActor);
		if (MC)
		{
			if (MC->CombatTarget == this)
			{
				MC->SetCombatTarget(nullptr);
				MC->bHasCombatTarget = false;
				MC->UpdateCombatTarget();
				bOverlappingCombatSphere = false;
				MoveToTarget(MC);
				CombatTarget = nullptr;	
			}
			if (MC->MainPlayerController)
			{
				USkeletalMeshComponent* MCMesh = Cast<USkeletalMeshComponent>(OtherComp);
				if (MCMesh) MC->MainPlayerController->RemoveEnemyHealthBar();
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
			ACharacterBase* MC = IFirstInterface::Execute_SetPlayerRef(OtherActor);
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
			ACharacterBase* MC = IFirstInterface::Execute_SetPlayerRef(OtherActor);
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

void AEnemyBase::GetActorEyesViewPoint(FVector& Location, FRotator& Rotation) const
{
	Location = GetMesh()->GetSocketLocation(FName("head"));
	Rotation = GetActorRotation();
	Rotation.Yaw -= GetMesh()->GetSocketTransform(FName("head", ERelativeTransformSpace::RTS_ParentBoneSpace)).Rotator().Roll;
}

bool AEnemyBase::Raycast(FHitResult &HitResult)
{
	

	float CastLength = 500.f;

	FVector Location;
	FRotator Rotation;
	GetActorEyesViewPoint(Location, Rotation);
	//UE_LOG(LogTemp, Warning, TEXT("Location = %s, Rotation= %s"), *Location.ToString(), *Rotation.ToString())

	FVector StartLocation = Location;

	FVector EndLocation = StartLocation + (GetActorForwardVector() * CastLength);

	FCollisionQueryParams CollisionParams;
	
	GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECollisionChannel::ECC_Visibility, CollisionParams);

	

	//DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, true);

	if (GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECollisionChannel::ECC_Visibility, CollisionParams))
	{
		return true;
	}
	return false;
	
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
	if (SwingSound)
	{
		UGameplayStatics::PlaySound2D(this, SwingSound);
	}
}

void AEnemyBase::LeftCombatAboutToCollide()
{
	bLeftCollisionOverlapped = true;
}

void AEnemyBase::RightCombatAboutToCollide()
{
	bRightCollisionOverlapped = true;
}

void AEnemyBase::LeftGunAboutToFire()
{
	bLeftGunFiring = true;
}

void AEnemyBase::RightGunAboutToFire()
{
	bRightGunFiring = true;
}

void AEnemyBase::UltimateAttackEnd()
{
	bUltimateAttack = false;
}

void AEnemyBase::Attack()
{
	int32 Section;

	if (Alive() && bHasValidTarget)
	{
		if (AIController)
		{
			AIController->StopMovement();
			SetEnemyMovementStatus(EEnemyMovementStatus::EMS_Attacking);
		}
		if (!bAttacking && bMeleeCombat)
		{
			bAttacking = true;
			UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
			if (AnimInstance)
			{
				AnimInstance->Montage_Play(CombatMontage, 1.35f);
				AnimInstance->Montage_JumpToSection(FName("AttackA"), CombatMontage);

			}

		}
		if (!bShooting && !bMeleeCombat)
		{
			bShooting = true;
			UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
			if (AnimInstance)
			{
				if (Desperation == 1.f)
				{
					Section = 3;
				}
				else
				{
					Section = FMath::RandRange(0, 2);
				}
				switch (Section)
				{
				case 0:
					CalculateDesperation();
					AnimInstance->Montage_Play(CombatMontage, 1.35f);
					AnimInstance->Montage_JumpToSection(FName("Attack1"), CombatMontage);
					//GetWorldTimerManager().SetTimer(ComboTimerHandle, 1.5f, false);
					break;

				case 1:
					CalculateDesperation();
					AnimInstance->Montage_Play(CombatMontage, 1.35f);
					AnimInstance->Montage_JumpToSection(FName("Attack2"), CombatMontage);
					//GetWorldTimerManager().SetTimer(ComboTimerHandle, 1.5f, false);
					break;

				case 2:
					if (!bCharging)
					{
						CalculateDesperation();
						AnimInstance->Montage_Play(CombatMontage, 1.35f);
						AnimInstance->Montage_JumpToSection(FName("ChargeBlast"), CombatMontage);
						bCharging = true;
						//GetWorldTimerManager().SetTimer(ComboTimerHandle, 1.5f, false);
					}
					break;

				case 3:
					if (Desperation == 1.f)
					{
						CalculateDesperation();
						AnimInstance->Montage_Play(CombatMontage, 1.35f);
						AnimInstance->Montage_JumpToSection(FName("UltimateStart"), CombatMontage);
						bUltimateAttack = true;
					}
					break;
				default:

					break;

				}
			}
			if (ProjectileClass)
			{
				MuzzleOffset.Set(0.f, 0.f, 0.f);
/**


				FVector LeftMuzzleSocketLocation = GetMesh()->GetSocketLocation(FName("Muzzle_L"));
				FVector RightMuzzleSocketLocation = GetMesh()->GetSocketLocation(FName("Muzzle_R"));
				UE_LOG(LogTemp,Warning,TEXT("LeftMuzzleLocation: %s, RightMuzzleLocation: %s"), *LeftMuzzleSocketLocation.ToString(), *RightMuzzleSocketLocation.ToString())

				FRotator LeftMuzzleSocketRotation = GetMesh()->GetSocketRotation(FName("Muzzle_L"));
				FRotator RightMuzzleSocketRotation = GetMesh()->GetSocketRotation(FName("Muzzle_R"));

				LeftMuzzleSocketRotation.Pitch -= 10.f;
				RightMuzzleSocketRotation.Pitch -= 10.f;
*/
				
				FVector LeftMuzzleSocketLocation;
				FVector RightMuzzleSocketLocation;
				FRotator LeftMuzzleSocketRotation;
				FRotator RightMuzzleSocketRotation;

				LeftMuzzleSocketRotation.Pitch -= 90.f;
				RightMuzzleSocketRotation.Pitch -= 90.f;

				GetMesh()->GetSocketWorldLocationAndRotation("Muzzle_L", LeftMuzzleSocketLocation, LeftMuzzleSocketRotation);
				GetMesh()->GetSocketWorldLocationAndRotation("Muzzle_R", RightMuzzleSocketLocation, RightMuzzleSocketRotation);

				//FVector LeftMuzzleLocation = LeftMuzzleSocketLocation + FTransform(LeftMuzzleSocketRotation).TransformVector(FVector(100.f, 0.f, 0.f));
				//FVector RightMuzzleLocation = RightMuzzleSocketLocation + FTransform(RightMuzzleSocketRotation).TransformVector(FVector(100.f, 0.f, 0.f));
				
				UE_LOG(LogTemp, Warning, TEXT("LeftMuzzleLocation: %s, RightMuzzleLocation: %s"), *LeftMuzzleSocketLocation.ToString(), *RightMuzzleSocketLocation.ToString())

				UWorld* World = GetWorld();
				if (World)
				{
					FActorSpawnParameters SpawnParams;
					SpawnParams.Owner = this;
					SpawnParams.Instigator = GetInstigator();

					if (bLeftGunFiring)
					{
						Projectile = World->SpawnActor<AProjectileBase>(ProjectileClass, LeftMuzzleSocketLocation, LeftMuzzleSocketRotation, SpawnParams);
						if (Projectile)
						{
							FVector LaunchDirection = LeftMuzzleSocketRotation.Vector(); 
							Projectile->FireInDirection(LaunchDirection);
							UGameplayStatics::SpawnEmitterAttached(Projectile->ProjectileParticles, Projectile->StaticMeshComponent, FName("ProjectileAttachSocket"), Projectile->StaticMeshComponent->GetRelativeLocation(), FRotator(0.f), FVector(1.f), EAttachLocation::SnapToTarget, false);
							if (!bCharging)
							{
								UGameplayStatics::SpawnEmitterAtLocation(World, WeaponFireParticles, LeftMuzzleSocketLocation, FRotator(0.f), false);
							}
							
						}
						if (!bUltimateAttack)
						{
							bLeftGunFiring = false;
						}
					}
					if (bRightGunFiring)
					{
						Projectile = World->SpawnActor<AProjectileBase>(ProjectileClass, RightMuzzleSocketLocation, RightMuzzleSocketRotation, SpawnParams);
						if (Projectile)
						{
							FVector LaunchDirection = RightMuzzleSocketRotation.Vector();
							Projectile->FireInDirection(LaunchDirection);
							UGameplayStatics::SpawnEmitterAttached(Projectile->ProjectileParticles, Projectile->StaticMeshComponent, FName("ProjectileAttachSocket"), Projectile->StaticMeshComponent->GetRelativeLocation(), FRotator(0.f), FVector(1.f), EAttachLocation::SnapToTarget, false);
							if (!bCharging)
							{
								UGameplayStatics::SpawnEmitterAtLocation(World, WeaponFireParticles, RightMuzzleSocketLocation, FRotator(0.f), false);
							}

							
						}
						if (!bUltimateAttack)
						{
							bRightGunFiring = false;
						}
					}

				}
			}
		}

		if (EffortSound && !bCharging)
		{
			UGameplayStatics::PlaySound2D(this, EffortSound);
		}
	}
	

}

void AEnemyBase::SpawnMuzzleFlashParticles()
{
	if (bLeftGunFiring)
	{
		if (WeaponFireParticles)
		{
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), WeaponFireParticles, GetMesh()->GetSocketLocation(FName("Muzzle_L")), FRotator(0.f), false);
		}
		
	}

	if (bRightGunFiring)
	{
		if (WeaponFireParticles)
		{
			if (WeaponFireParticles)
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), WeaponFireParticles, GetMesh()->GetSocketLocation(FName("Muzzle_R")), FRotator(0.f), false);
			}
		}
	}
}

void AEnemyBase::PlayEffortSound()
{
	if (EffortSound)
	{
		UGameplayStatics::PlaySound2D(this, EffortSound);
	}
}

void AEnemyBase::AttackEnd()
{
	bAttacking = false;
	bShooting = false;
	bCharging = false;

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

float AEnemyBase::CalculateDesperation()
{
	if (Health <= 200.f)
	{
		if (Desperation == 1.f)
		{
			return Desperation = 0.f;
		}
		if (Desperation >= .5f)
		{
			return Desperation += Desperation + FMath::FRandRange(.1f, .5f);
		}
		if (Desperation <= .5f)
		{
			return Desperation += Desperation + FMath::FRandRange(.01f, .1f);
		}
	}

	return Desperation;


}

bool AEnemyBase::IsCharacterInView()
{
	ACharacterBase* MC = Cast<ACharacterBase>(CastHit.GetActor());
	if (MC)
	{
		return true;
	}

	return false;
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

AEnemyBase* AEnemyBase::SetEnemyRef_Implementation()
{
	return this;
}

float AEnemyBase::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	if (Health - DamageAmount <= 0.f)
	{
		Health = 0.f;
		if (Alive())
		{
			Die(DamageCauser);
		}
	}
	else
	{
		Health -= DamageAmount;
	}

	return DamageAmount;
}

void AEnemyBase::Die(AActor* Causer)
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

		ACharacterBase* MC = Cast<ACharacterBase>(Causer);
		if (MC)
		{
			MC->UpdateCombatTarget();
		}

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

