/*Generic class, Top of the hieracrchy chain for all weapons*/
#ifndef weapon_h
#define weapon_h
#pragma once 
#include <string>
using namespace std; 
class weapon{
    private:
        float damage;
        string type;
        string name; 
        string tier; 
    public:
        //constructors 
        weapon(); 
        weapon(string nName , float nDamage , string nType , string nTier); 
        //mutators 
        void setDamage(float nDamage); 
        void setName(string nName); 
        void setType(string nType);
        void setTier(string nTier); 
        //accessors  
        float getDamage();
        string getName(); 
        string getType(); 
        string getTier();

        virtual void attackRange(); //This is for selecting the weapons type, range melee, magic etc......Defined in a more specific instance 
        virtual void decreaseDurability(); //Used to decrease durability 
        virtual void calculateDamaged(); //used to calculate damage of specified item

};
#endif
