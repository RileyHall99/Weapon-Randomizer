#include "RandomStats.h"

RandomStats::RandomStats() {
	this->currentTier = "";
}
string RandomStats::assignRarity() {
	int min = 0;
	int max = 3;
	int output = min + (rand() % static_cast<int>(max - min + 1));
	cout << output;
	this->currentTier = tiers[2];

	return this->currentTier;

}
