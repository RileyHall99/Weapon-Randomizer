// Greatsword.cpp

#include "GreatSword.h"

// Constructors
GreatSword::GreatSword() : Melee() {
    this->edges = 0;
    this->weight = 0.0;
}
GreatSword::GreatSword(string nName, float nDamage, string nTier, float nSharpness,
                       float nRange, float nWeight, int nEdges, string nAttribute)
                       : Melee(nName, nDamage, nTier, nSharpness, nRange) {
    this->weight = nWeight;
    this->edges = nEdges;
    this->attribute = nAttribute;
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
    float dmgModified = this->getDamage() * this->getSharpness();
    float knockback = (this->getStrikeRange() / 2) + (this->weight / 2);

    // Truncate damage and knockback
    stringstream stream;
    stream << std::fixed << std::setprecision(2) << dmgModified;
    string dmgTruncated = stream.str();
    stream.str("");
    stream << knockback;
    string knockbackTruncated = stream.str();

    cout << "You swung the greatsword " << this->getName() << " and dealt "
        << dmgTruncated << " damage! Your target was knocked back "
        << knockbackTruncated << "m!" << endl;
}

string GreatSword::toString() {
    // Truncate weight
    stringstream stream;
    stream << std::fixed << std::setprecision(2) << this->weight;
    string weightTruncated = stream.str();

    return Melee::toString() + "Weight : " + weightTruncated + "\n"
    + "Edges : " + to_string(this->edges) + "\n"
    + "Attribute : " + this->attribute + "\n";
}

GreatSword::~GreatSword() {
    cout<< "Greatsword " << this->getName() << " destroyed" << endl;
}

