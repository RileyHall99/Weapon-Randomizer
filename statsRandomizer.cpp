#include "stats.h"

	RandomStats::RandomStats(greatSword &s1) {
		this->currentTier = setTier();
		cout << "Currently given great sword object";
		s1.setSharpness(assignSharpness());
		//s1.setEdges(this->assignEdges());
		s1.setWeight(assignWeight());
		s1.setName(assignName());
		s1.setTier(this->currentTier);
		s1.setEdges(assignEdges());
		s1.setLength(assignLength());
		s1.setDurability(assignDurability());
		s1.setAttr(getAttributes());
	}
	int RandomStats::assignSharpness() {
		int min, max, output;
		if (this->currentTier == "low") {
			min = 10;
			max = 15;
			output = min + (rand() % static_cast<int>(max - min + 1));
			return output;
		}
		else if (this->currentTier == "Medium") {
			min = 16;
			max = 21;
			output = min + (rand() % static_cast<int>(max - min + 1));
			return output;
		}
		else {
			min = 30;
			max = 130;
			output = min + (rand() % static_cast<int>(max - min + 1));
			return output;
		}
	}

	int RandomStats::assignEdges(){

		int min = 0;
		int max = 3;
		int output = min + (rand() % static_cast<int>(max - min + 1));

		return output;
	}

	int RandomStats::assignLength() {
		int max, min, output;

		if (this->currentTier == "Low") {
			min = 50;
			max = 90;
			output = min + (rand() % static_cast<int>(max - min + 1));
			return output;
		}
		else if (this->currentTier == "Medium") {
			min = 100;
			max = 120;
			output = min + (rand() % static_cast<int>(max - min + 1));
			return output;
		}
		else {
			min = 115;
			max = 140;
			output = min + (rand() % static_cast<int>(max - min + 1));
			return output;
		}
	}

	int RandomStats::assignWeight() {
		int max, min, output;
		if (this->currentTier == "Low") {
			min = 100;
			max = 110;
			return output = min + (rand() % static_cast<int>(max - min + 1));

		}
		else if (this->currentTier == "Medium") {
			min = 110;
			max = 130;
			return output = min + (rand() % static_cast<int>(max - min + 1));
		}
		else {
			min = 140;
			max = 160;
			return output = min + (rand() % static_cast<int>(max - min + 1));
		}
	}
	string RandomStats::assignName() {
		int output  , max;
		int min = 0;
		random_device rd;
		mt19937 gen(rd());
		if (this->currentTier == "Low") {
			max = 4-1;
			/*output = min + (rand() % static_cast<int>(max - min + 1));*/
			uniform_int_distribution<int>distribution(min, max);
			output = distribution(gen);
			return this->lNames[output];
		}
		else if (this->currentTier == "Medium") {
			max = 4-1;
			uniform_int_distribution<int>distribution(min, max);
			output = distribution(gen);
			return this->mNames[output];
		}
		else {
			max = 5-1;
			uniform_int_distribution<int>distribution(min, max);
			output = distribution(gen);
			return this->hNames[output];
		}
	}

	string RandomStats::setTier() {
		int min = 0;
		int max = 3-1;
		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<int>distribution(min, max);
		int output = distribution(gen);
		return this->tiers[output];

	}

	int RandomStats::assignDurability() {
		int max, min, output;
		if (this->currentTier == "Low") {
			min = 100;
			max = 104;
			return output = min + (rand() % static_cast<int>(max - min + 1));

		}
		else if (this->currentTier == "Medium") {
			min = 105;
			max = 109;
			return output = min + (rand() % static_cast<int>(max - min + 1));
		}
		else {
			min = 200;
			max = 240;
			return output = min + (rand() % static_cast<int>(max - min + 1));
		}
	}

	string RandomStats::getAttributes() {
		int min, max, output;
		min = 0;
		random_device rd;
		mt19937 gen(rd());
		if (this->currentTier == "Low") {
			max = 5 - 1;
			/*output = min + (rand() % static_cast<int>(max - min + 1));*/
			uniform_int_distribution<int>distribution(min, max);
			output = distribution(gen);
			return this->lAttr[output];
		}
		else if (this->currentTier == "Medium") {
			max = 5 - 1;
			uniform_int_distribution<int>distribution(min, max);
			output = distribution(gen);
			return this->mAttr[output];
		}
		else {
			max = 5 - 1;
			uniform_int_distribution<int>distribution(min, max);
			output = distribution(gen);
			return this->hAttr[output];
		}
	}

