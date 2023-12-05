#include "Ranged.h"

// Constructors
Ranged::Ranged() : Weapon() {
    this->maxAmmo = 0;
}
Ranged::Ranged(string nName, float nDamage, string nTier, int nMaxAmmo)
    : Weapon(nName, nDamage, nTier) {
    this->maxAmmo = nMaxAmmo;
}


// Getter and setter
int Ranged::getMaxAmmo() { return this->maxAmmo; }
void Ranged::setMaxAmmo(int nMaxAmmo) { this->maxAmmo = nMaxAmmo; }

string Ranged::toString() {
    return Weapon::toString() + "Max ammo : " + to_string(this->maxAmmo) + " \n";
}

Ranged::~Ranged() {}
