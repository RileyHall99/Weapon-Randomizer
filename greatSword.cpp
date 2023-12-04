// Greatsword.cpp

#include "GreatSword.h"

// Constructors
GreatSword::GreatSword() : Melee() {
    this->edges = 0;
    this->weight = 0.0;
}
GreatSword::GreatSword(string nName, float nDamage, string nTier,
                       float nSharpness, float nRange, float nWeight, int nEdges)
                       : Melee(nName, nDamage, nTier, nSharpness, nRange) {
    this->weight = nWeight;
    this->edges = nEdges;
}

// Getters
float GreatSword::getWeight() { return this->weight; }
string GreatSword::getAttr() { return this->attribute; }

// Setters
void GreatSword::setWeight(float nWeight) { this->weight = nWeight; }
void GreatSword::setEdges(int e) { this->edges = e; }
void GreatSword::setAttr(string attr) { this->attribute = attr; }

// Calculates damage using sword stats and prints it
void GreatSword::attack() {
    cout << "Swinging greatsword" << endl;
}

string GreatSword::toString() {
    cout << fixed;
    return Melee::toString() + "Weight : " + to_string(this->weight) + "\n"
    + "Edges : " + to_string(this->edges) + "\n"
    + "Attribute : " + this->attribute + "\n";
}

GreatSword::~GreatSword() {
    cout<<"Greatsword destroyed" << endl;
}

