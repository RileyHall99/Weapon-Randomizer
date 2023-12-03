#pragma once
#ifndef melee_h
#define melee_h
#include "Weapon.h"
class Melee : public Weapon{
    private:
        float sharpness;
        float strikeRange;
        float durability;
        string type = "melee";
    public:
        Melee();
        Melee(float nSharpness , float nStrikeRange , float damage , string name  , string tier , float nDurability);
        //accessors
        float getSharpness();
        float getStrikeRange();
        float getDurability();
        //mutators
        void setSharpness(float nSharpness);
        void setStrikeRange(float nRange);
        void setDurability(float nDurability);
        string toString();
        void decreaseDurability(int weaponDamge);
        void assignStats();
        ~Melee();

};

#endif
