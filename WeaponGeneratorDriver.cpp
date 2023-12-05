// SwordGeneratorDriver.cpp

#include <iostream>
#include <iomanip>
#include "WeaponGenerator.h"

using namespace std;

int main(){
    WeaponGenerator generator;

    // Generate a GreatSword of each tier
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

    // Generate a Dagger of each tier
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

    // Generate a Bow of each tier
    Weapon* lowBow = generator.getRandomBow("Low");
    Weapon* midBow = generator.getRandomBow("Medium");
    Weapon* highBow = generator.getRandomBow("High");

    cout << lowBow->toString();
    lowBow->attack();
    cout << endl << midBow->toString();
    midBow->attack();
    cout << endl << highBow->toString();
    highBow->attack();
    cout << endl;

    // Generate a HandCannon of each tier
    Weapon* lowCannon = generator.getRandomHandCannon("Low");
    Weapon* midCannon = generator.getRandomHandCannon("Medium");
    Weapon* highCannon = generator.getRandomHandCannon("High");

    cout << lowCannon->toString();
    lowCannon->attack();
    cout << endl << midCannon->toString();
    midCannon->attack();
    cout << endl << highCannon->toString();
    highCannon->attack();
    cout << endl;

    delete lowSword;
    delete midSword;
    delete highSword;
    delete lowDagger;
    delete midDagger;
    delete highDagger;
    delete lowBow;
    delete midBow;
    delete highBow;
    delete lowCannon;
    delete midCannon;
    delete highCannon;
}
