﻿#include <vector>
using namespace std;

class PrimeFactor {
public:
	std::vector<int> of(int number) {
		vector<int> result = {};
		if (number > 1) {
			result.push_back(number);
		}
		return result;
	}
};