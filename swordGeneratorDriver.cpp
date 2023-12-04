// SwordGeneratorDriver.cpp

#include <iostream>
#include <iomanip>
#include "WeaponGenerator.h"

using namespace std;

int main(){
    WeaponGenerator generator;
    Weapon* lowSword = generator.getRandomGreatSword("Low");
    Weapon* midSword = generator.getRandomGreatSword("Medium");
    Weapon* highSword = generator.getRandomGreatSword("High");

    cout << lowSword->toString();
    lowSword->attack();
    cout << endl << midSword->toString();
    midSword->attack();
    cout << endl << highSword->toString();
    highSword->attack();
    cout << endl;

    Weapon* lowDagger = generator.getRandomDagger("Low");
    Weapon* midDagger = generator.getRandomDagger("Medium");
    Weapon* highDagger = generator.getRandomDagger("High");

    cout << lowDagger->toString();
    lowDagger->attack();
    cout << endl << midDagger->toString();
    midDagger->attack();
    cout << endl << highDagger->toString();
    highDagger->attack();
    cout << endl;

    delete lowSword;
    delete midSword;
    delete highSword;
    delete lowDagger;
    delete midDagger;
    delete highDagger;
}
