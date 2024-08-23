// Copyright

#include "AbilitySystem/Data/LevelUpInfo.h"

// TODO : Make more normal function
int32 ULevelUpInfo::FindLevelForXP(int32 XP)
{
    int32 Level = 1;
    bool bSearching = true;
    while (bSearching)
    {
        if (LevelUpInformation.Num() - 1 <= Level) return Level;

        if (XP >= LevelUpInformation[Level].LevelUpRequirement)
        {
            ++Level;
        }
        else
        {
            bSearching = false;
        }
        
       //XP >= LevelUpInformation[Level].LevelUpRequirement ? ++Level :  bSearching = false;
    }
    return Level;
}