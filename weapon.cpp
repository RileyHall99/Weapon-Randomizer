#include "Weapon.h"

Weapon::Weapon(){
    this->name = "";
    this->type = "";
    this->tier = "";
    this->damage = 0;
}
Weapon::Weapon(string nName , float nDamage , string nType , string nTier){
    this->tier = nTier;
    this->name = nName;
    this->damage = nDamage;
    this->type = nType;
}
void Weapon::setTier(string nTier){
    this->tier = nTier;
}
void Weapon::setDamage(float nDamage){
    this->damage = nDamage;
}
void Weapon::setName(string nName){
    this->name = nName;
}
void Weapon::setType(string nType){
    this->type = nType;
}

string Weapon::getName(){
    return this->name;
}

string Weapon::getTier(){
    return this->tier;
}
string Weapon::getType(){
    return this->type;
}

float Weapon::getDamage(){
    return this->damage;
}
void Weapon::decreaseDurability() {}
void Weapon::calculateDamage(){}

//float Weapon::attackRange(){}
//void Weapon::calculateDamaged(){}
//void Weapon::decreaseDurability(){}
string Weapon::toString(){
    return "Damage : " + to_string(this->damage) + "\n"\
    "Name : " + this->name + "\n"\
    "tier : " + this->tier + "\n"\
    "Type : " + this->type + "\n";
}

Weapon::~Weapon() {
    cout << "Weapon Destroyed";
}
