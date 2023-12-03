#ifndef melee_h
#define melee_h
#include "Weapon.h"

class Melee : public Weapon{
    private:
        float sharpness;
        float strikeRange;
    public:
        Melee();
        Melee(float nSharpness, float nStrikeRange, float damage, string name, string tier);
        //accessors
        float getSharpness();
        float getStrikeRange();
        //mutators
        void setSharpness(float nSharpness);
        void setStrikeRange(float nRange);

        void attack() = 0;
        string toString();
        void assignStats();
        ~Melee();
};

#endif
