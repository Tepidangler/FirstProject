// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNotifyStateBase.h"
#include "Kismet/GameplayStatics.h"

void UAnimNotifyStateBase::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration);
	MC = Cast<ACharacterBase>(UGameplayStatics::GetPlayerCharacter(MeshComp->GetWorld(), 0));
}

void UAnimNotifyStateBase::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	Super::NotifyTick(MeshComp, Animation, TotalDuration);

}

void UAnimNotifyStateBase::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::NotifyEnd(MeshComp, Animation);
}

/*SaveAttack1*/

void USaveAttack1::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration);
	SkeletalMeshComp = MeshComp;
	AnimationSeq = Animation;
	Duration = TotalDuration;
	if (MeshComp->GetWorld())
	{
		MeshComp->GetWorld()->GetTimerManager().SetTimer(ComboTimer, this, &USaveAttack1::ContinueCombo, ComboDelay);
	}

}

void USaveAttack1::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	Super::NotifyTick(MeshComp, Animation, TotalDuration);
}

void USaveAttack1::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::NotifyEnd(MeshComp, Animation);
}

void USaveAttack1::ContinueCombo()
{
	if (MC->GetMovementStatus() == EMovementStatus::EMS_Dead)
	{
		SkeletalMeshComp->GetAnimInstance()->Montage_JumpToSection("Death", MC->CombatMontage);
		return;
	}

	if (ShouldContinue(MC))
	{
		SkeletalMeshComp->GetAnimInstance()->Montage_JumpToSection(MontageSections[1], MC->CombatMontage);
		MC->PlaySwingSound();
		return;
	}
	else
	{
		MC->AttackEnd(AttackRecoverySections[0]);
		return;
	}

}

bool USaveAttack1::ShouldContinue(ACharacterBase* Character)
{
	if (Character->bAttacking && Character->GetMovementStatus() != EMovementStatus::EMS_Dead)
	{
		return true;
	}
	return false;
}

/*SaveAttack2*/

void USaveAttack2::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration);
	SkeletalMeshComp = MeshComp;
	AnimationSeq = Animation;
	Duration = TotalDuration;

	if (MeshComp->GetWorld())
	{
		MeshComp->GetWorld()->GetTimerManager().SetTimer(ComboTimer, this, &USaveAttack2::ContinueCombo, ComboDelay);
	}
}

void USaveAttack2::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	Super::NotifyTick(MeshComp, Animation, TotalDuration);
}

void USaveAttack2::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::NotifyEnd(MeshComp, Animation);
}

void USaveAttack2::ContinueCombo()
{
	if (MC->GetMovementStatus() == EMovementStatus::EMS_Dead)
	{
		SkeletalMeshComp->GetAnimInstance()->Montage_JumpToSection("Death", MC->CombatMontage);
		return;
	}

	if (ShouldContinue(MC))
	{
		SkeletalMeshComp->GetAnimInstance()->Montage_JumpToSection(MontageSections[2], MC->CombatMontage);
		MC->PlaySwingSound();
		return;
	}
	else
	{
		MC->AttackEnd(AttackRecoverySections[1]);
		return;
	}


}

bool USaveAttack2::ShouldContinue(ACharacterBase* Character)
{
	if (Character->bAttacking && MC->GetMovementStatus() != EMovementStatus::EMS_Dead)
	{
		return true;
	}
	return false;
}

/*SaveAttack3*/

void USaveAttack3::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration);
	SkeletalMeshComp = MeshComp;
	AnimationSeq = Animation;
	Duration = TotalDuration;

	if (MeshComp->GetWorld())
	{
		MeshComp->GetWorld()->GetTimerManager().SetTimer(ComboTimer, this, &USaveAttack3::ContinueCombo, ComboDelay);
	}
}

void USaveAttack3::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	Super::NotifyTick(MeshComp, Animation, TotalDuration);
}

void USaveAttack3::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::NotifyEnd(MeshComp, Animation);
}

void USaveAttack3::ContinueCombo()
{
	if (MC->GetMovementStatus() == EMovementStatus::EMS_Dead)
	{
		SkeletalMeshComp->GetAnimInstance()->Montage_JumpToSection("Death", MC->CombatMontage);
		return;
	}

	if (ShouldContinue(MC))
	{
		SkeletalMeshComp->GetAnimInstance()->Montage_JumpToSection(MontageSections[3], MC->CombatMontage);
		MC->PlaySwingSound();
		return;
	}
	else
	{
		MC->AttackEnd(AttackRecoverySections[2]);
		return;
	}


}

bool USaveAttack3::ShouldContinue(ACharacterBase* Character)
{
	if (MC->bAttacking && Character->GetMovementStatus() != EMovementStatus::EMS_Dead)
	{
		return true;
	}
	return false;
}



/*SaveAttack4*/

void USaveAttack4::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration);
	SkeletalMeshComp = MeshComp;
	AnimationSeq = Animation;
	Duration = TotalDuration;

	if (MeshComp->GetWorld())
	{
		MeshComp->GetWorld()->GetTimerManager().SetTimer(ComboTimer, this, &USaveAttack4::ContinueCombo, ComboDelay);
	}
}

void USaveAttack4::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	Super::NotifyTick(MeshComp, Animation, TotalDuration);
}

void USaveAttack4::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::NotifyEnd(MeshComp, Animation);
}

void USaveAttack4::ContinueCombo()
{
	if (MC->GetMovementStatus() == EMovementStatus::EMS_Dead)
	{
		SkeletalMeshComp->GetAnimInstance()->Montage_JumpToSection("Death", MC->CombatMontage);
		return;
	}

	if (ShouldContinue(MC))
	{
		SkeletalMeshComp->GetAnimInstance()->Montage_JumpToSection(MontageSections[0], MC->CombatMontage);
		MC->PlaySwingSound();
		return;
	}
	else
	{
		MC->AttackEnd("None");
		return;
	}


}

bool USaveAttack4::ShouldContinue(ACharacterBase* Character)
{
	if (Character->bAttacking && Character->GetMovementStatus() != EMovementStatus::EMS_Dead)
	{
		return true;
	}
	return false;
}
