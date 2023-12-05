#ifndef dagger_h
#define dagger_h

#include "Melee.h"

class Dagger : public Melee {
    private:
        int numStrikes;
    public:
        Dagger();
        Dagger(string nName, float nDamage, string nTier, float nSharpness,
                   float nRange, int nNumStrikes);
        ~Dagger();
        int getNumStrikes();
        void setNumStrikes(int nNumStrikes);
        void attack();
        string toString();
};
#endif
