#include "RandomStats.h"

RandomStats::RandomStats() : gen(std::time(nullptr)) { // Seed the random num generator using system time
	this->currentTier = "";
	srand(2);
}

string RandomStats::assignRarity() {
	int min = 0;
	int max = 3;
	int output = min + (rand() % static_cast<int>(max - min + 1));
	cout << output;
	this->currentTier = tiers[2];

	return this->currentTier;
}

// GreatSword: name
string RandomStats::getRandomSwordName(string tier) {
    uniform_int_distribution<int> distribution(0, NAMES_SIZE - 1);
    int randomIndex = distribution(gen);
    string name;

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

// TODO: add random name functions for dagger, bow, hand cannon
// and also 5 names for each

// Weapon: damage
float RandomStats::getRandomDamage(string tier) {
    float minDmg, maxDmg, output;

    if (tier == "Low") {
        minDmg = 10;
        maxDmg = 15;
    }
    else if (tier == "Medium") {
        minDmg = 16;
        maxDmg = 21;
    }
    else if (tier == "High") {
        minDmg = 30;
        maxDmg = 130;
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

    output = minRange + (minRange + static_cast<float>(rand()) / (RAND_MAX / maxRange - minRange));
    return roundFloat(output);
}

// Round a float to 2 decimal places
float RandomStats::roundFloat(float x)
{
    x = (int)((x * 100) + 0.5);
    return (float)(x / 100);
}
