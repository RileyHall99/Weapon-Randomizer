#include "greatSword.h"

greatSword::greatSword(){
    //greatSword::melee();
    this->edges = 0; 
    this->length = 0.0; 
    this->weight = 0.0;
}
greatSword::greatSword(float nWeight , float nLength , int nEdge ){
    this->weight = nWeight; 
    this->length = nLength; 
    this->edges = nEdge;
    //greatSword::melee(float nSharpness, float nStrikeRange, float damage, std::string name, std::string tier, float nDurability);
}
//accessors 
float greatSword::getLength(){
    return this->length; 
}
float greatSword::getWeight(){
    return this->weight;
}
//Mutators
void greatSword::setWeight(float nWeight){
    this->weight = nWeight; 
}
void greatSword::setLength(float nLength){
    this->length = nLength;
}

void greatSword::setEdges(int e) {
    this->edges = e; 
}

void greatSword::setAttr(string attr) {
    this->attributes = attr; 
}
string greatSword::getAttr() {
    return this->attributes;
}


//This the definition of the pure functions from Weapon.h
float greatSword::calculateDamage(float strength, float currentSharpness, float weight){
    return strength * currentSharpness * weight ; 
}

float greatSword::calculateAttackRange(float step_size , float length) {
    return step_size + length;

}
float greatSword::decreaseDurability(float wd , int dura)  {
    return wd - dura;
}

string greatSword::toString(){
    return "Length : " + to_string(this->length) + "\n" \
        "weight : " + to_string(this->weight) + "\n"  \
        + "Edges : " + to_string(this->edges) + "\n" + "Attribute : " + this->attributes + "\n" \
        + "Attack Range : " + to_string(this->getStrikeRange()) + "\n"\
        + melee::toString() + "\n" + weapon::toString();
}

// greatSword::~greatSword(){
//     cout<<"great Sword Destroyed";
// }

