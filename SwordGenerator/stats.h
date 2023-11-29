#pragma once
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <random>
#include "greatSword.h"
using namespace std;
class RandomStats {
private:
	//Tiers of the weapons 
	string tiers[3] = { "Low" , "Medium" , "High" }; 
	string currentTier;
	//All possible names of the weapons 
	string lNames[4] = { "Tree Branch" , "Mop Handle" , "Plunger" , "Stick" };
	string mNames[4] = { "Knight's Sword" , "GreatSword" , "Dagger" , "Katana" }; 
	string hNames[5] = { "Excalibur" , "The King Slayer" , "The Last Stand" , "One Sword To Rule Them All" , "Sword Of The Chosen One" };
	//All possible attributes/special abilities 
	string lAttr[5] = { "Slight Gust of Wind" , "Gentle Breeze" , "" , "" ,"" };
	string mAttr[5] = { "Fire Aspect" , "Ice Aspect" , "Boomerang" , "" , "" };
	string hAttr[5] = { "One Hit One Kill" , "Zeus" , "Light Speed" , "Collatoral Damage" , "Good Luck" };
	
public: 
	//Constructors 
	RandomStats(); 
	RandomStats(greatSword &s1);
	//assigning stats functions
	string getAttributes();
	int assignSharpness(); 
	int assignEdges(); 
	int assignLength(); 
	int assignWeight(); 
	string assignName();
	string setTier();
	int assignDurability();
	

};
