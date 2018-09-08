#include "stdafx.h"
#include "CoinCombination.h"
#include <vector>
#include <algorithm>

using namespace std;

CoinCombination::CoinCombination()
{
}


CoinCombination::~CoinCombination()
{
}

//Given 1, 3, 5 value coins,and a int target, find minimum number of coins used to sum up as target
int CoinCombination::MinCoinCombination(int target)
{
	vector<int> results(target);
	results[0] = 0;
	results[1] = 1;
	results[2] = 2;
	for (int i = 3; i <= target; i++) {
		int n_1 = results[i - 1];
		int n_3 = results[i - 3];
		int n_4 = results[i - 4];
		results[i] = min(n_1, n_3, n_4)+1;
	}
	return results[target - 1];
}
