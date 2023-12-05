#ifndef handcannon_h
#define handcannon_h

#include "Ranged.h"

class HandCannon : public Ranged
{
    private:
        float caliber;
    public:
        // Constructors
        HandCannon();
        HandCannon(string nName, float nDamage, string nTier, int nMaxAmmo, float nCaliber);
        ~HandCannon();
        // Getter and setter
        float getCaliber();
        void setCaliber(float nCaliber);

        void attack();
        string toString();
};

#endif // handcannon_h
