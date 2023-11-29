#pragma once 
//The last instance of the hierarchy tree.... This is the specific instance of the tree
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

        //int getEdges(); 
        float getWeight();
        float getLength(); 
        string getAttr();

        //This is for selecting the weapons type, range melee, magic etc......Defined in a more specific instance 
        float  calculateAttackRange(float stepSize , float)override;
        float decreaseDurability(float wd , int )override;
        float calculateDamage(float strength , float , float weight)override;
        string toString();

        

        

};
