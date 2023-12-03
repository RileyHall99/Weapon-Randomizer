#include <iostream>
#include "greatSword.h"
#include "RandomStats.h"
using namespace std;
int main(){
    cout << "Creating new great sword \n";

    GreatSword sword(55.0 , 100.0 , 2);
    GreatSword s1;
    RandomStats stats(s1);

   // s1.setSharpness(stats.assignSharpness());
    cout << "New sword\n";
    s1.attack();
    cout << s1.toString();


    cout << "WHAT???\n";
    cout << s1.getSharpness();

}
