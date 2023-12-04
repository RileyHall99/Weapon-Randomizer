#ifndef greatsword_h
#define greatsword_h

#include "Melee.h"

class GreatSword : public Melee {
    private:
        float weight;
        int edges;
        string attribute;
    public:
        GreatSword();
        GreatSword(string nName, float nDamage, string nTier, float nSharpness,
                   float nRange, float nWeight, int nEdges, string nAttribute);
        ~GreatSword();
        // Setters
        void setWeight(float nWeight);
        void setLength(float nLength);
        void setEdges(int nEdges);
        void setAttr(string attr);
        // Getters
        int getEdges();
        float getWeight();
        float getLength();
        string getAttr();

        void attack();
        string toString();
};
#endif
