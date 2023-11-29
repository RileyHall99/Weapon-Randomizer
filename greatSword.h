#pragma once 

#include "melee.h"
class greatSword : public melee {
    private:
        float weight; 
        float length; 
        int edges; 
        string attributes; 
    public:
        greatSword(); 
        greatSword(float nWeight , float nLength , int nEdge); 
        //~greatSword();
        void setWeight(float nWeight);
        void setLength(float nLength); 
        void setEdges(int nEdges); 
        void setAttr(string attr);

        int getEdges(); 
        float getWeight();
        float getLength(); 
        string getAttr();

        float attackRange(float stepSize);
        void calculateDamage(float strength);
        string toString();

        

        

};
