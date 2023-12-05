#ifndef bow_h
#define bow_h

#include "Ranged.h"

class Bow : public Ranged {
    private:
        int arrowsPerVolley;
    public:
        Bow();
        Bow(string nName, float nDamage, string nTier, int nMaxAmmo, int nArrowsPerVolley);
        ~Bow();
        // Getter and setter
        int getArrowsPerVolley();
        void setArrowsPerVolley(int nArrowsPerVolley);
        // Implemented on derived weapons
        void attack();
        string toString();
};
#endif
