#ifndef weapongenerator_h
#define weapongenerator_h

#include "GreatSword.h"
#include "Dagger.h"
#include "RandomStats.h"

class WeaponGenerator
{
    public:
        WeaponGenerator();
        ~WeaponGenerator();
        GreatSword* getRandomGreatSword(string);
        Dagger* getRandomDagger(string);
    private:
        RandomStats randomStats;
};
#endif
