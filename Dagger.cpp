// Dagger.cpp

#include "Dagger.h"

// Constructors
Dagger::Dagger() : Melee() {
    this->numStrikes = 0;
}
Dagger::Dagger(string nName, float nDamage, string nTier, float nSharpness,
                       float nRange, int nNumStrikes)
                       : Melee(nName, nDamage, nTier, nSharpness, nRange) {
    this->numStrikes = nNumStrikes;
}

// Getter and setter
int Dagger::getNumStrikes() { return this->numStrikes; }
void Dagger::setNumStrikes(int nNumStrikes) { this->numStrikes = nNumStrikes; }

// Calculates damage using dagger stats and prints it
void Dagger::attack() {
    float dmgModified = this->getDamage() * this->getSharpness() * this->numStrikes;

    // Truncate damage
    stringstream stream;
    stream << std::fixed << std::setprecision(2) << dmgModified;
    string dmgTruncated = stream.str();

    // If striking only once, adjust dialogue
    if (numStrikes == 1) {
        cout << "You thrusted the dagger " << this->getName() << " and dealt "
            << dmgTruncated << " damage!" << endl;
        return;
    }

    // Striking multiple times
    cout << "You thrusted the dagger " << this->getName() << " and struck "
        << this->numStrikes << " times! Your target took "
        << dmgTruncated << " damage!" << endl;
}

string Dagger::toString() {
    return Melee::toString() + "Number of strikes per attack: "
        + to_string(this->numStrikes) + "\n";
}

Dagger::~Dagger()
{
    cout << "Dagger destroyed" << endl;
}
