/*Generic class, Top of the hieracrchy chain for all weapons*/
#ifndef weapon_h
#define weapon_h

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Weapon {
    private:
        string name;
        float damage;
        string tier;
    public:
        //constructors
        Weapon();
        Weapon(string nName, float nDamage, string nTier);
        virtual ~Weapon();
        //mutators
        void setDamage(float nDamage);
        void setName(string nName);
        void setTier(string nTier);
        //accessors
        float getDamage();
        string getName();
        string getTier();
        // Implemented on derived weapons
        virtual void attack() = 0;
        virtual string toString();
};
#endif
