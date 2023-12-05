// Weapon.cpp

#include "Weapon.h"

// Constructors
Weapon::Weapon(){
    this->name = "";
    this->tier = "";
    this->damage = 0;
}
Weapon::Weapon(string nName, float nDamage, string nTier){
    this->tier = nTier;
    this->name = nName;
    this->damage = nDamage;
}

// Setters
void Weapon::setTier(string nTier){ this->tier = nTier; }
void Weapon::setDamage(float nDamage){ this->damage = nDamage; }
void Weapon::setName(string nName) { this->name = nName; }

// Getters
string Weapon::getName(){ return this->name; }
string Weapon::getTier(){ return this->tier; }
float Weapon::getDamage(){ return this->damage; }

string Weapon::toString(){
    // Truncate damage
    stringstream stream;
    stream << std::fixed << std::setprecision(2) << this->damage;
    string damageRounded = stream.str();

    return "Name : " + this->name + "\n"\
    "Damage : " + damageRounded + "\n"\
    "Tier : " + this->tier + "\n";
}

Weapon::~Weapon() {}

