// Melee.cpp
#include "Melee.h"

// Default constructor
Melee::Melee() :
    Weapon()
{
    this->sharpness = 0.0;
    this->strikeRange = 0.0;
}

// Parameterized constructor
Melee::Melee(float nSharpness , float nRange , float damage , string name , string tier , float nDurability) :
    Weapon(name , damage , this->type , tier)
{
    this->sharpness = nSharpness;
    this->strikeRange = nRange;
    this->durability = nDurability;
}

float Melee::getSharpness(){
    return this->sharpness;
}
float Melee::getStrikeRange(){
    return this->strikeRange;
}
float Melee::getDurability(){
    return this->durability;
}

void Melee::setSharpness(float nSharpness){
    this->sharpness = nSharpness;
}
void Melee::setStrikeRange(float nRange){
    this->strikeRange = nRange;
}

void Melee::setDurability(float nDura){
    this->durability = nDura;
}

string Melee::toString(){
    return "Sharpness  : " + to_string(this->sharpness) + "\n" \
     + "Strike Range : " + to_string(this->strikeRange) + "\n" \
    "Durability : " + to_string(this->durability);
}

void Melee::decreaseDurability(int weaponDamage) {
    cout << "Decreasing durability";
    this->durability -= weaponDamage;
}

Melee::~Melee(){
    cout << "Melee Destroyed";
}
