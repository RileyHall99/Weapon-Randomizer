// WeaponGenerator.cpp

#include "WeaponGenerator.h"

// Constructor; creates a RandomStats object and gets a handle to it
WeaponGenerator::WeaponGenerator() : randomStats() {}
WeaponGenerator::~WeaponGenerator() {}

// Generates a random greatsword of given tier
GreatSword* WeaponGenerator::getRandomGreatSword(string tier) {

    GreatSword* swordPtr = new GreatSword();
    swordPtr->setName(randomStats.getRandomSwordName(tier));
    swordPtr->setDamage(randomStats.getRandomDamage(tier));
    swordPtr->setTier(tier);
    swordPtr->setSharpness(randomStats.getRandomSharpness(tier));
    swordPtr->setStrikeRange(randomStats.getRandomStrikeRange(tier));
    return swordPtr;
}
