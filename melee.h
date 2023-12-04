#ifndef melee_h
#define melee_h
#include "Weapon.h"

class Melee : public Weapon{
    private:
        float sharpness;
        float strikeRange;
    public:
        Melee();
        Melee(string nName, float nDamage, string nTier, float nSharpness, float nStrikeRange);
        //accessors
        float getSharpness();
        float getStrikeRange();
        //mutators
        void setSharpness(float nSharpness);
        void setStrikeRange(float nRange);

        // Implemented on derived weapons
        void attack() = 0;
        virtual string toString();
        void assignStats();
        ~Melee();
};
#endif
