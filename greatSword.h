#pragma once

#include "Melee.h"
class GreatSword : public Melee {
    private:
        float weight;
        float length;
        int edges;
        string attributes;
    public:
        GreatSword();
        GreatSword(float nWeight , float nLength , int nEdge);
        ~GreatSword();
        void setWeight(float nWeight);
        void setLength(float nLength);
        void setEdges(int nEdges);
        void setAttr(string attr);

        int getEdges();
        float getWeight();
        float getLength();
        string getAttr();

        float attackRange(float stepSize);
        void attack();
        string toString();

};
