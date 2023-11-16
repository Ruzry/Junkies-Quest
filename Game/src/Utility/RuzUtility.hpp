#pragma once

#include <random>
#include <iostream>

namespace Ruz

{

}

class RuzUtility {

public:
	static int GRN(int lowerRange, int upperRange) {
	
		std::random_device rd;
		std::mt19937 eng(rd());
		std::uniform_int_distribution<int> distr(lowerRange, upperRange);

		int randomInt = distr(eng);

		return randomInt;
	
	}
};