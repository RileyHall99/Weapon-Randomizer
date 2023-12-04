// SwordGeneratorDriver.cpp

#include <iostream>
#include <iomanip>
#include "WeaponGenerator.h"

using namespace std;

int main(){
    WeaponGenerator generator;
    Weapon* lowSword = generator.getRandomGreatSword("Low");
    Weapon* midSword = generator.getRandomGreatSword("Medium");
    lowSword->attack();
    cout << lowSword->toString() << endl;
    cout << midSword->toString() << endl;
}
