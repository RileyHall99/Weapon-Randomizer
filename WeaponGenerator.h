#ifndef weapongenerator_h
#define weapongenerator_h

#include "GreatSword.h"
#include "RandomStats.h"

class WeaponGenerator
{
    public:
        WeaponGenerator();
        ~WeaponGenerator();
        GreatSword* getRandomGreatSword(string);
    private:
        RandomStats randomStats;
};
#endif
