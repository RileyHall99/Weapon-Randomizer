// RandomStats.cpp

#include "RandomStats.h"

// Constructor; seed the random num generator using system time
RandomStats::RandomStats() : gen(std::time(nullptr)) {}

// Weapon: damage
float RandomStats::getRandomDamage(string tier) {
    float minDmg, maxDmg, output;

    if (tier == "Low") {
        minDmg = 10.0;
        maxDmg = 15.0;
    }
    else if (tier == "Medium") {
        minDmg = 16.0;
        maxDmg = 21.0;
    }
    else if (tier == "High") {
        minDmg = 30.0;
        maxDmg = 130.0;
    }
    else {
        return -1;
    }

    uniform_real_distribution<double> distribution(minDmg, maxDmg);
    output = distribution(gen);
    return roundFloat(output);
}

// Melee: sharpness
float RandomStats::getRandomSharpness(string tier) {
    float minSharpness, maxSharpness, output;

    if (tier == "Low") {
        minSharpness = 0.8;
        maxSharpness = 2.0;
    }
    else if (tier == "Medium") {
        minSharpness = 2.01;
        maxSharpness = 3.0;
    }
    else if (tier == "High") {
        minSharpness = 3.01;
        maxSharpness = 6.0;
    }
    else {
        return -1;
    }

    uniform_real_distribution<double> distribution(minSharpness, maxSharpness);
    output = distribution(gen);
    return roundFloat(output);
}
// Melee: strike range
float RandomStats::getRandomStrikeRange(string tier) {
    float minRange, maxRange, output;

    if (tier == "Low") {
        minRange = 0.4;
        maxRange = 1.0;
    }
    else if (tier == "Medium") {
        minRange = 1.01;
        maxRange = 3.0;
    }
    else if (tier == "High") {
        minRange = 3.01;
        maxRange = 20.0;
    }
    else {
        return -1;
    }

    uniform_real_distribution<double> distribution(minRange, maxRange);
    output = distribution(gen);
    return roundFloat(output);
}

// GreatSword: name
string RandomStats::getRandomSwordName(string tier) {
    uniform_int_distribution<int> distribution(0, NAMES_SIZE - 1);
    int randomIndex = distribution(gen);

    if (tier == "Low") {
        return this->lSwordNames[randomIndex];
    }
    else if (tier == "Medium") {
        return this->mSwordNames[randomIndex];
    }
    else if (tier == "High") {
        return this->hSwordNames[randomIndex];
    }
    else {
        return "";
    }
}
// GreatSword: weight
float RandomStats::getRandomWeight(string tier) {
    float minWeight, maxWeight, output;

    if (tier == "Low") {
        minWeight = 0.2;
        maxWeight = 1.5;
    }
    else if (tier == "Medium") {
        minWeight = 1.51;
        maxWeight = 5.0;
    }
    else if (tier == "High") {
        minWeight = 5.01;
        maxWeight = 80.0;
    }
    else {
        return -1;
    }

    uniform_real_distribution<double> distribution(minWeight, maxWeight);
    output = distribution(gen);
    return roundFloat(output);
}
// GreatSword: edges
int RandomStats::getRandomEdges(string tier) {
    int minEdges, maxEdges;

    if (tier == "Low") {
        minEdges = 1;
        maxEdges = 2;
    }
    else if (tier == "Medium") {
        minEdges = 1;
        maxEdges = 3;
    }
    else if (tier == "High") {
        minEdges = 2;
        maxEdges = 5;
    }
    else {
        return -1;
    }

    uniform_int_distribution<int> distribution(minEdges, maxEdges);
    return distribution(gen);
}
// GreatSword: attribute
string RandomStats::getRandomAttribute(string tier) {
    uniform_int_distribution<int> distribution(0, ATTRIBUTES_SIZE - 1);
    int randomIndex = distribution(gen);

    if (tier == "Low") {
        return this->lAttr[randomIndex];
    }
    else if (tier == "Medium") {
        return this->mAttr[randomIndex];
    }
    else if (tier == "High") {
        return this->hAttr[randomIndex];
    }
    else {
        return "";
    }
}

// Dagger: name
string RandomStats::getRandomDaggerName(string tier) {
    uniform_int_distribution<int> distribution(0, NAMES_SIZE - 1);
    int randomIndex = distribution(gen);

    if (tier == "Low") {
        return this->lDaggerNames[randomIndex];
    }
    else if (tier == "Medium") {
        return this->mDaggerNames[randomIndex];
    }
    else if (tier == "High") {
        return this->hDaggerNames[randomIndex];
    }
    else {
        return "";
    }
}
// Dagger: numStrikes
int RandomStats::getRandomNumStrikes(string tier) {
    int minStrikes, maxStrikes;

    if (tier == "Low") {
        minStrikes = 1;
        maxStrikes = 2;
    }
    else if (tier == "Medium") {
        minStrikes = 2;
        maxStrikes = 3;
    }
    else if (tier == "High") {
        minStrikes = 3;
        maxStrikes = 5;
    }
    else {
        return -1;
    }

    uniform_int_distribution<int> distribution(minStrikes, maxStrikes);
    return distribution(gen);
}

// Ranged: maxAmmo
int RandomStats::getRandomMaxAmmo(string tier) {
    int minAmmo, maxAmmo;

    if (tier == "Low") {
        minAmmo = 1;
        maxAmmo = 5;
    }
    else if (tier == "Medium") {
        minAmmo = 6;
        maxAmmo = 20;
    }
    else if (tier == "High") {
        minAmmo = 21;
        maxAmmo = 100;
    }
    else {
        return -1;
    }

    uniform_int_distribution<int> distribution(minAmmo, maxAmmo);
    return distribution(gen);
}

// Bow: name
string RandomStats::getRandomBowName(string tier) {
    uniform_int_distribution<int> distribution(0, NAMES_SIZE - 1);
    int randomIndex = distribution(gen);

    if (tier == "Low") {
        return this->lBowNames[randomIndex];
    }
    else if (tier == "Medium") {
        return this->mBowNames[randomIndex];
    }
    else if (tier == "High") {
        return this->hBowNames[randomIndex];
    }
    else {
        return "";
    }
}
// Bow: arrowsPerVolley
int RandomStats::getRandomArrowsPerVolley(string tier) {
    int minArrows, maxArrows;

    if (tier == "Low") {
        return 1;
    }
    else if (tier == "Medium") {
        minArrows = 1;
        maxArrows = 3;
    }
    else if (tier == "High") {
        minArrows = 1;
        maxArrows = 10;
    }
    else {
        return -1;
    }

    uniform_int_distribution<int> distribution(minArrows, maxArrows);
    return distribution(gen);
}

// HandCannon: name
string RandomStats::getRandomHandCannonName(string tier) {
    uniform_int_distribution<int> distribution(0, NAMES_SIZE - 1);
    int randomIndex = distribution(gen);

    if (tier == "Low") {
        return this->lHandCannonNames[randomIndex];
    }
    else if (tier == "Medium") {
        return this->mHandCannonNames[randomIndex];
    }
    else if (tier == "High") {
        return this->hHandCannonNames[randomIndex];
    }
    else {
        return "";
    }
}
// HandCannon: caliber
float RandomStats::getRandomCaliber(string tier) {
    float minCaliber, maxCaliber, output;

    if (tier == "Low") {
        minCaliber = 0.3;
        maxCaliber = 0.8;
    }
    else if (tier == "Medium") {
        minCaliber = 0.81;
        maxCaliber = 1.5;
    }
    else if (tier == "High") {
        minCaliber = 1.51;
        maxCaliber = 8.0;
    }
    else {
        return -1;
    }

    uniform_real_distribution<double> distribution(minCaliber, maxCaliber);
    output = distribution(gen);
    return roundFloat(output);
}

// Round a float to 2 decimal places
float RandomStats::roundFloat(float x) {
    x = (int)((x * 100) + 0.5);
    return (float)(x / 100);
}
