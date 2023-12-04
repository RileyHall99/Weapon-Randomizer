#ifndef randomstats_h
#define randomstats_h

#include <string>
#include <iostream>
#include <random>
#include <ctime> // Used for random seed
#include "GreatSword.h"
using namespace std;

// Holds datasets used to generate random weapons and fetches random entries
class RandomStats {
public:
    // Each weapon name list must have this many elements
    static const unsigned int NAMES_SIZE = 5;

	RandomStats();
	RandomStats(GreatSword &s1);

	string getAttributes();
	int assignSharpness();
	int assignEdges();
	int assignWeight();
	string assignName();
	string assignRarity();
	string setTier();
	int assignDurability();

	float roundFloat(float x);

	string getRandomSwordName(string tier);
	float getRandomDamage(string tier);
	float getRandomSharpness(string tier);
	float getRandomStrikeRange(string tier);
private:
    mt19937 gen;
    const string tiers[3] = { "Low", "Medium", "High" };
    string currentTier;
    const string lSwordNames[NAMES_SIZE] = { "Tree Branch", "Mop Handle", "Plunger", "Stick", "Copper Blade" };
    const string mSwordNames[NAMES_SIZE] = { "Knight's Sword", "Greatsword", "Steel Sawblade", "Katana", "Rose Rapier" };
    const string hSwordNames[NAMES_SIZE] = { "Excalibur" , "The King Slayer" , "The Last Stand" , "One Sword To Rule Them All" , "Sword Of The Chosen One" };
    const string lAttr[5] = { "Slight Gust of Wind" , "Gentle Breeze" , "" , "" ,"" };
    const string mAttr[5] = { "Fire Aspect" , "Ice Aspect" , "Boomerang" , "" , "" };
    const string hAttr[5] = { "One Hit One Kill" , "Zeus" , "Light Speed" , "Collatoral Damage" , "Good Luck" };
};
#endif
