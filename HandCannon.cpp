// HandCannon.cpp

#include "HandCannon.h"

// Constructos
HandCannon::HandCannon() : Ranged() {
    this->caliber = 0;
}
HandCannon::HandCannon(string nName, float nDamage, string nTier,
                       int nMaxAmmo, float nCaliber)
                       : Ranged(nName, nDamage, nTier, nMaxAmmo) {
    this->caliber = nCaliber;
}

// Getter and setter
float HandCannon::getCaliber() { return this->caliber; }
void HandCannon::setCaliber(float nCaliber) { this->caliber = nCaliber; }

// Calculate damage using hand cannon stats and print attack message
void HandCannon::attack() {
    float modifiedDmg = this->getDamage() * (this->caliber + 1);

    // Truncate damage
    stringstream stream;
    stream << std::fixed << std::setprecision(2) << modifiedDmg;
    string dmgTruncated = stream.str();

    cout << "You fired the hand cannon " << this->getName() << " and dealt "
        << dmgTruncated << " damage!" << endl;
}

string HandCannon::toString() {
    // Truncate caliber
    stringstream stream;
    stream << std::fixed << std::setprecision(2) << this->caliber;
    string caliberTruncated = stream.str();

    return Ranged::toString() + "Caliber : " + caliberTruncated + "\n";
}

HandCannon::~HandCannon() {
    cout << "Hand cannon " << this->getName() << " destroyed" << endl;
}
