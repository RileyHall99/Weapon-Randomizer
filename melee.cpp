// Melee.cpp
#include "Melee.h"

// Constructors
Melee::Melee()
    : Weapon() {
    this->sharpness = 0.0;
    this->strikeRange = 0.0;
}

Melee::Melee(float nSharpness, float nRange, float damage, string name, string tier)
    : Weapon(name, damage, tier) {
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
    return Weapon::toString() + "Sharpness  : " + to_string(this->sharpness) + "\n" \
     + "Strike Range : " + to_string(this->strikeRange) + "\n";
}

Melee::~Melee() {
    cout << "Melee weapon destroyed" << endl;
}
