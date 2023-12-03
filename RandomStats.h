#pragma once
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <random>
#include "GreatSword.h"
//#include <nlomann/json.hpp>
using namespace std;
class RandomStats {
private:
	string tiers[3] = { "Low" , "Medium" , "High" };
	string currentTier;
	string lNames[4] = { "Tree Branch" , "Mop Handle" , "Plunger" , "Stick" };
	string mNames[4] = { "Knight's Sword" , "GreatSword" , "Dagger" , "Katana" };
	string hNames[5] = { "Excalibur" , "The King Slayer" , "The Last Stand" , "One Sword To Rule Them All" , "Sword Of The Chosen One" };
	string lAttr[5] = { "Slight Gust of Wind" , "Gentle Breeze" , "" , "" ,"" };
	string mAttr[5] = { "Fire Aspect" , "Ice Aspect" , "Boomerang" , "" , "" };
	string hAttr[5] = { "One Hit One Kill" , "Zeus" , "Light Speed" , "Collatoral Damage" , "Good Luck" };

public:
	RandomStats();
	RandomStats(GreatSword &s1);

	string getAttributes();
	int assignSharpness();
	int assignEdges();
	int assignLength();
	int assignWeight();
	string assignName();
	string assignRarity();
	string setTier();
	int assignDurability();


};
