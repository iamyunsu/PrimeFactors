#include "pch.h"

#include <vector>
#include "../PrimeFactors/PrimeFactors.cpp"
using namespace std;

TEST(PrimeFactors, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}