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
    RandomStats();
    // Each weapon name list must have this many elements
    static const unsigned int NAMES_SIZE = 5;
    // Each attribute name list must have this many elements
    static const unsigned int ATTRIBUTES_SIZE = 5;

    // Weapon member
	float getRandomDamage(string tier);
	// Melee members
	float getRandomSharpness(string tier);
	float getRandomStrikeRange(string tier);
	// GreatSword members
	string getRandomSwordName(string tier);
	float getRandomWeight(string tier);
	int getRandomEdges(string tier);
	string getRandomAttribute(string tier);
	// Dagger members
	string getRandomDaggerName(string tier);
	int getRandomNumStrikes(string tier);

	// Ranged member
	int getRandomMaxAmmo(string tier);
	// Bow members
	string getRandomBowName(string tier);
	int getRandomArrowsPerVolley(string tier);
	// HandCannon members

	float roundFloat(float x);
private:
    mt19937 gen; // Random number generator
    const string tiers[3] = { "Low", "Medium", "High" };
	//Sword Names
    const string lSwordNames[NAMES_SIZE] = { "Tree Branch", "Mop Handle", "Plunger", "Stick", "Copper Blade" };
    const string mSwordNames[NAMES_SIZE] = { "Knight's Sword", "Greatsword", "Steel Sawblade", "Katana", "Rose Rapier" };
    const string hSwordNames[NAMES_SIZE] = { "Excalibur" , "The King Slayer" , "The Last Stand" , "One Sword To Rule Them All" , "Sword Of The Chosen One" };
    const string lAttr[ATTRIBUTES_SIZE] = { "Slight Gust of Wind", "Gentle Breeze", "None", "None", "None" };
    const string mAttr[ATTRIBUTES_SIZE] = { "Fire Aspect" , "Ice Aspect" , "Boomerang" , "None" , "None" };
    const string hAttr[ATTRIBUTES_SIZE] = { "One Hit One Kill" , "Zeus" , "Light Speed" , "Collateral Damage" , "Good Luck" };
	//Dagger Names
	const string lDaggerNames[NAMES_SIZE] = { "Kitchen Knife" , "Wooden Knife" , "Rusted Knife" , "Broken Bottle" , "Dismantled Knife" };
	const string mDaggerNames[NAMES_SIZE] = { "Thieves Dagger" , "Rusted Dagger" , "Cleaver" , "Half a Sword" , "Slice And Dice jr"};
	const string hDaggerNames[NAMES_SIZE] = { "Dagger Of The Shattered Soul" , "Ka-Bar" , "Huntsmans Ghost" , "Slice And Dice" , "Throwing Star" };
	//HandCannon Names
	const string lHandCannonNames[NAMES_SIZE] = { "Bubble Gun" , "Nerf Gun" , "Water Gun" , "Pea shooter" , "Nail Gun"};
	const string mHandCannonNames[NAMES_SIZE] = {"Hand Cannon" , "Boom Stick" , "Golden Eye" , "Musket" , "Hit and Run"};
	const string hHandCannonNames[NAMES_SIZE] = { "Black Beard's Gun" , "KaBoom" , "He Was Standing" , "Last Resort" , "DEAGLE" };
	//Bow
	const string lBowNames[NAMES_SIZE] = { "Stick and String" , "This is a Bow?" , "Loose Ends" , "Tie The Knot" , "Copper Longbow"};
	const string mBowNames[NAMES_SIZE] = {"English Long Bow" , "CrossBow" , "Soldier's Bow" , "Armory Surplus" , "Merchant's Bow"};
	const string hBowNames[NAMES_SIZE] = {"Sniper's Dream" , "Long Shot" , "Hail Mary" , "From Downtown" , "Artemis's Bow"};
};
#endif
