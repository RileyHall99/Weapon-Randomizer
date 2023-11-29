#include "melee.h"

melee::melee(){
    this->sharpness = 0.0;
    this->strikeRange = 0.0;
    melee::weapon();  

}
melee::melee(float nSharpness , float nRange , float damage , string name , string tier , float nDurability){
    this->sharpness = nSharpness; 
    this->strikeRange = nRange;
    this->durability = nDurability;
    melee::weapon(name , damage , this->type , tier);
}

float melee::getSharpness(){
    return this->sharpness;
}
float melee::getStrikeRange(){
    return this->strikeRange; 
}
float melee::getDurability(){
    return this->durability;
}

void melee::setSharpness(float nSharpness){
    this->sharpness = nSharpness; 
}
void melee::setStrikeRange(float nRange){
    this->strikeRange = nRange;
}

void melee::setDurability(float nDura){
    this->durability = nDura;
}

string melee::toString(){
    return "Sharpness  : " + to_string(this->sharpness) + "\n" \
     + "Strike Range : " + to_string(this->strikeRange) + "\n" \
    "Durability : " + to_string(this->durability);
}

void melee::decreaseDurability(int weaponDamage) {
    cout << "Decreasing durability";
    this->durability -= weaponDamage; 
}


// melee::~melee(){
//     cout << "Melee Destroyed";
// }