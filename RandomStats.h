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
	//Sword Names 
    const string lSwordNames[NAMES_SIZE] = { "Tree Branch", "Mop Handle", "Plunger", "Stick", "Copper Blade" };
    const string mSwordNames[NAMES_SIZE] = { "Knight's Sword", "Greatsword", "Steel Sawblade", "Katana", "Rose Rapier" };
    const string hSwordNames[NAMES_SIZE] = { "Excalibur" , "The King Slayer" , "The Last Stand" , "One Sword To Rule Them All" , "Sword Of The Chosen One" };
    const string lAttr[5] = { "Slight Gust of Wind" , "Gentle Breeze" , "" , "" ,"" };
    const string mAttr[5] = { "Fire Aspect" , "Ice Aspect" , "Boomerang" , "" , "" };
    const string hAttr[5] = { "One Hit One Kill" , "Zeus" , "Light Speed" , "Collatoral Damage" , "Good Luck" };
	//Dagger Names 
	const string lDaggerNames[NAMES_SIZE] = { "Kitchen Knife" , "Wooden Knife" , "Rusted Knife" , "Broken Bottle" , "Dismantled Knife" }; 
	const string mDaggerNames[NAMES_SIZE] = { "Thieves Dagger" , "Rusted Dagger" , "Cleaver" , "Half a Sword" , "Slice And Dice jr"};
	const string hDaggerNames[NAMES_SIZE] = { "Dagger Of The Shattered Soul" , "Ka-Bar" , "Huntsmans Ghost" , "Slice And Dice" , "Throwing Star" };
	//HandCannon Names
	const string lHandCannonNames[NAMES_SIZE] = { "Bubble Gun" , "Nerf Gun" , "Water Gun" , "Pea shooter" , "Nail Gun"};
	const string mHandCannonNames[NAMES_SIZE] = {"Hand Cannon" , "Boom Stick" , "Golden Eye" , "Musket" , "Hit and Run"};
	const string hHandCannonNames[NAMES_SIZE] = { "Black Beard's Gun" , "KaBoom" , "He Was Standing" , "Last Resort" , "DEAGLE" };
	//Bow 
	const string lBowNames[NAMES_SIZE] = { "Stick and String" , "This is a Bow?" , "Loose Ends" , "Tie The Knot" , "Bow"};
	const string mBowNames[NAMES_SIZE] = {"English Long Bow" , "CrossBow" , "Soldier's Bow" , "Armory Surplus" , "Merchant's Bow"};
	const string hBowNames[NAMES_SIZE] = {"Sniper's Dream" , "Long Shot" , "Hail Mary" , "From Downtown" , "Artemis's Bow"}
};
#endif
