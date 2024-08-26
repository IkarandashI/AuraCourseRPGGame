// Copyright

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraBaseCharacter.h"
#include "Interaction/PlayerInterface.h"
#include "AuraCharacter.generated.h"

/**
 *
 */
UCLASS()
class AURA_API AAuraCharacter : public AAuraBaseCharacter, public IPlayerInterface
{
    GENERATED_BODY()

public:
    AAuraCharacter();
    virtual void PossessedBy(AController* NewController) override;
    virtual void OnRep_PlayerState() override;

    /** Players Interface */
    virtual void AddToXP_Implementation(int32 InXP) override;
    virtual void LevelUp_Implementation() override;
    /** end Player Interface */

    /* Combat Interface */
    virtual int32 GetPlayerLevel_Implementation() override;
    /* end Combat Interface */

private:
    virtual void InitAbilityActorInfo() override;
};
