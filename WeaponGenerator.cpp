// WeaponGenerator.cpp

#include "WeaponGenerator.h"

// Constructor; creates a RandomStats object and gets a handle to it
WeaponGenerator::WeaponGenerator() : randomStats() {}
WeaponGenerator::~WeaponGenerator() {}

// Generate a random GreatSword
GreatSword* WeaponGenerator::getRandomGreatSword(string tier) {
    string name = randomStats.getRandomSwordName(tier);
    float damage = randomStats.getRandomDamage(tier);
    float sharpness = randomStats.getRandomSharpness(tier);
    float strikeRange = randomStats.getRandomStrikeRange(tier);
    float weight = randomStats.getRandomWeight(tier);
    int edges = randomStats.getRandomEdges(tier);
    string attribute = randomStats.getRandomAttribute(tier);

    GreatSword* swordPtr = new GreatSword(name, damage, tier, sharpness,
                                          strikeRange, weight, edges, attribute);
    return swordPtr;
}

// Generate a random Dagger
Dagger* WeaponGenerator::getRandomDagger(string tier) {
    string name = randomStats.getRandomDaggerName(tier);
    float damage = randomStats.getRandomDamage(tier);
    float sharpness = randomStats.getRandomSharpness(tier);
    float strikeRange = randomStats.getRandomStrikeRange(tier);
    int numStrikes = randomStats.getRandomNumStrikes(tier);

    Dagger* daggerPtr = new Dagger(name, damage, tier, sharpness,
                                   strikeRange, numStrikes);
    return daggerPtr;
}

// Generate a random Bow
Bow* WeaponGenerator::getRandomBow(string tier) {
    string name = randomStats.getRandomBowName(tier);
    float damage = randomStats.getRandomDamage(tier);
    int maxAmmo = randomStats.getRandomMaxAmmo(tier);
    int arrowsPerVolley = randomStats.getRandomArrowsPerVolley(tier);

    Bow* bowPtr = new Bow(name, damage, tier, maxAmmo, arrowsPerVolley);
    return bowPtr;
}
