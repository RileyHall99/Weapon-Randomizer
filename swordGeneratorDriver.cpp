#include <iostream>
#include "greatSword.h"
#include "stats.h"
using namespace std;
int main(){
    cout << "Creating new great sword \n"; 
    // greatSword s1(0.0 , 0.0 , 1);
    greatSword s1;

    RandomStats stats(s1);

   // s1.setSharpness(stats.assignSharpness());
    cout << "New sword\n";
    s1.setType("Melee");
    s1.setDamage(s1.calculateDamage(100, s1.getSharpness(), s1.getWeight()));
    s1.setStrikeRange(s1.calculateAttackRange(1.5, s1.getLength()));
    s1.setDurability(s1.decreaseDurability( s1.getDurability() , 10));

    cout << s1.toString();
}   