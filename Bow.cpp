// Bow.cpp

#include "Bow.h"

// Constructors
Bow::Bow() : Ranged() {
    this->arrowsPerVolley = 0;
}
Bow::Bow(string nName, float nDamage, string nTier, int nMaxAmmo, int nArrowsPerVolley)
    : Ranged(nName, nDamage, nTier, nMaxAmmo) {
    this->arrowsPerVolley = nArrowsPerVolley;
}

// Getter and setter
int Bow::getArrowsPerVolley() { return this->arrowsPerVolley; }
void Bow::setArrowsPerVolley(int nArrowsPerVolley) { this->arrowsPerVolley = nArrowsPerVolley; }

// Calculate damage using bow stats and print attack message
void Bow::attack() {
    // Truncate damage
    stringstream stream;
    stream << std::fixed << std::setprecision(2) << this->getDamage();
    string dmgTruncated = stream.str();

    // If shooting only one arrow, adjust dialogue
    if (arrowsPerVolley == 1) {
        cout << "You shot the bow " << this->getName() << " and dealt "
            << dmgTruncated << " damage!" << endl;
        return;
    }

    // Shooting multiple arrows
    cout << "You shot the bow " << this->getName() << " and unleashed a volley of "
        << this->arrowsPerVolley << " arrows! Each arrow dealt "
        << dmgTruncated << " damage!" << endl;
}

string Bow::toString() {
    return Ranged::toString() + "Arrows per volley: "
        + to_string(this->arrowsPerVolley) + "\n";
}

Bow::~Bow() {
    cout << "Bow destroyed" << endl;
}
