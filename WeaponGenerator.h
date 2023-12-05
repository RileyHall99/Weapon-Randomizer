#ifndef weapongenerator_h
#define weapongenerator_h

#include "RandomStats.h"
#include "GreatSword.h"
#include "Dagger.h"
#include "Bow.h"

class WeaponGenerator {
    public:
        WeaponGenerator();
        ~WeaponGenerator();
        GreatSword* getRandomGreatSword(string);
        Dagger* getRandomDagger(string);
        Bow* getRandomBow(string);
    private:
        RandomStats randomStats;
};
#endif
