#ifndef weapongenerator_h
#define weapongenerator_h

#include "RandomStats.h"
#include "GreatSword.h"
#include "Dagger.h"
#include "Bow.h"
#include "HandCannon.h"

class WeaponGenerator {
    public:
        WeaponGenerator();
        ~WeaponGenerator();
        GreatSword* getRandomGreatSword(string tier);
        Dagger* getRandomDagger(string tier);
        Bow* getRandomBow(string tier);
        HandCannon* getRandomHandCannon(string tier);
    private:
        RandomStats randomStats;
};
#endif
