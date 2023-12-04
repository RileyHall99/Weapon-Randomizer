// Melee.cpp
#include "Melee.h"

// Constructors
Melee::Melee() : Weapon() {
    this->sharpness = 0.0;
    this->strikeRange = 0.0;
}
Melee::Melee(string nName, float nDamage, string nTier,
             float nSharpness, float nRange)
             : Weapon(nName, nDamage, nTier) {
    this->sharpness = nSharpness;
    this->strikeRange = nRange;
}

// Getters
float Melee::getSharpness() { return this->sharpness; }
float Melee::getStrikeRange() { return this->strikeRange; }

// Setters
void Melee::setSharpness(float nSharpness) { this->sharpness = nSharpness; }
void Melee::setStrikeRange(float nRange) { this->strikeRange = nRange; }

string Melee::toString() {
    // Truncate sharpness and strike range
    stringstream stream;
    stream << std::fixed << std::setprecision(2) << this->sharpness;
    string sharpnessRounded = stream.str();
    stream.str("");
    stream << this->strikeRange;
    string strikeRangeRounded = stream.str();

    return Weapon::toString() + "Sharpness : " + sharpnessRounded + "\n"
        + "Strike Range : " + strikeRangeRounded + "\n";
}

Melee::~Melee() {
    cout << "Melee weapon destroyed" << endl;
}
