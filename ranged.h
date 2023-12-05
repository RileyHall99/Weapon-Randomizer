#ifndef ranged_h
#define ranged_h

#include "Weapon.h"

class Ranged : public Weapon {
    private:
        int maxAmmo;
    public:
        Ranged();
        Ranged(string nName, float nDamage, string nTier, int nMaxAmmo);
        ~Ranged();
        // Getter and setter
        int getMaxAmmo();
        void setMaxAmmo(int nMaxAmmo);
        // Implemented on derived weapons
        void attack() = 0;
        virtual string toString();
};
#endif
