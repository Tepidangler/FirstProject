// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "CharacterBase.h"
#include "BaseAnimInstance.h"
#include "AnimNotifyStateBase.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTPROJECT_API UAnimNotifyStateBase : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
	
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Montage | Section Names")
	TArray<FName> AttackRecoverySections{ FName("PrimaryAttackA_Recover"), FName("PrimaryAttackB_Recover"), FName("PrimaryAttackC_Recover") };

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Montage | Section Names")
	TArray<FName> MontageSections{ FName("PrimaryAttack_1"), FName("PrimaryAttack_B"), FName("PrimaryAttack_C"), FName("PrimaryAttack_D"), FName("PrimaryAttack_Air") };

	ACharacterBase* MC = nullptr;

	FTimerHandle ComboTimer;

	float ComboDelay = .3f;

	USkeletalMeshComponent* SkeletalMeshComp;
	UAnimSequenceBase* AnimationSeq;
	float Duration;
};


UCLASS()
class FIRSTPROJECT_API USaveAttack1 : public UAnimNotifyStateBase
{
	GENERATED_BODY()
public:
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

	void ContinueCombo();

	bool ShouldContinue(ACharacterBase* Character);
};

UCLASS()
class FIRSTPROJECT_API USaveAttack2 : public UAnimNotifyStateBase
{
	GENERATED_BODY()
public:
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

	void ContinueCombo();

	bool ShouldContinue(ACharacterBase* Character);
};

UCLASS()
class FIRSTPROJECT_API USaveAttack3 : public UAnimNotifyStateBase
{
	GENERATED_BODY()
public:
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

	void ContinueCombo();

	bool ShouldContinue(ACharacterBase* Character);
};
UCLASS()
class FIRSTPROJECT_API USaveAttack4 : public UAnimNotifyStateBase
{
	GENERATED_BODY()
public:
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

	void ContinueCombo();

	bool ShouldContinue(ACharacterBase* Character);
};