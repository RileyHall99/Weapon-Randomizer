#include "GreatSword.h"

GreatSword::GreatSword(){
    //GreatSword::Melee();
    this->edges = 0;
    this->length = 0.0;
    this->weight = 0.0;
}
GreatSword::GreatSword(float nWeight , float nLength , int nEdge ){
    this->weight = nWeight;
    this->length = nLength;
    this->edges = nEdge;
    //GreatSword::Melee(float nSharpness, float nStrikeRange, float damage, std::string name, std::string tier, float nDurability);
}
float GreatSword::getLength(){
    return this->length;
}
float GreatSword::getWeight(){
    return this->weight;
}

void GreatSword::setWeight(float nWeight){
    this->weight = nWeight;
}
void GreatSword::setLength(float nLength){
    this->length = nLength;
}
float GreatSword::attackRange(float step_size ){
    return this->length+step_size;
}
void GreatSword::setEdges(int e) {
    this->edges = e;
}

void GreatSword::setAttr(string attr) {
    this->attributes = attr;
}
string GreatSword::getAttr() {
    return this->attributes;
}


void GreatSword::calculateDamage(float strength) {
    this->setDamage(this->getSharpness() * this->weight * strength);
}

string GreatSword::toString(){
    return "Length : " + to_string(this->length) + "\n" \
    "weight : " + to_string(this->weight) + "\n"  \
    + "Edges : " + to_string(this->edges) + "\n" + " Attribute " + this->attributes + "\n" + Melee::toString() + "\n" + Weapon::toString();
}

// GreatSword::~GreatSword(){
//     cout<<"great Sword Destroyed";
// }

