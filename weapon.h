/*Generic class, Top of the hieracrchy chain for all weapons*/
#ifndef weapon_h
#define weapon_h
#include <string>
#include <iostream>
using namespace std;

class Weapon {
    private:
        float damage;
        string name;
        string tier;
    public:
        //constructors
        Weapon();
        Weapon(string nName, float nDamage, string nTier);
        //mutators
        void setDamage(float nDamage);
        void setName(string nName);
        void setTier(string nTier);
        //accessors
        float getDamage();
        string getName();
        string getTier();

        virtual void attack() = 0;  // Implemented on derived weapons
        string toString();

        virtual ~Weapon();
};
#endif
