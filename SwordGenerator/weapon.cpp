#include "weapon.h"
//using namespace std;
weapon::weapon(){
    this->name = ""; 
    this->type = ""; 
    this->tier = ""; 
    this->damage = 0; 
}
weapon::weapon(string nName , float nDamage , string nType , string nTier){
    this->tier = nTier; 
    this->name = nName; 
    this->damage = nDamage; 
    this->type = nType;  
}
void weapon::setTier(string nTier){
    this->tier = nTier; 
}
void weapon::setDamage(float nDamage){
    this->damage = nDamage; 
}
void weapon::setName(string nName){
    this->name = nName;
}
void weapon::setType(string nType){
    this->type = nType; 
}

string weapon::getName(){
    return this->name;
}

string weapon::getTier(){
    return this->tier; 
}
string weapon::getType(){
    return this->type;
}

float weapon::getDamage(){
    return this->damage;
}
void weapon::decreaseDurability() {}
void weapon::calculateDamage(){}

//float weapon::attackRange(){}
//void weapon::calculateDamaged(){}
//void weapon::decreaseDurability(){}
string weapon::toString(){
    return "Damage : " + to_string(this->damage) + "\n"\
    "Name : " + this->name + "\n"\
    "tier : " + this->tier + "\n"\
    "Type : " + this->type + "\n";
}

// weapon::~weapon(){
//     cout << "Weapon Destroyed";
// }