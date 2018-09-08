#include "stdafx.h"
#include "IndeedTokyo.h"
#include <vector>
#include <iostream>

using namespace std;

IndeedTokyo::IndeedTokyo()
{
}


IndeedTokyo::~IndeedTokyo()
{
}

int IndeedTokyo::DoublePlus(int N)
{
	vector<int> result(N+1);
	for (int i = 2; i <= N; i++) {
		result[i] = result[i - 1] + 1;
		if (i%2 == 0) {
			int temp = result[i / 2] + 1;
			result[i] = (result[i] < temp ? result[i] : temp);
		}
	}
	return result[N];
}

float IndeedTokyo::Travel()
{
	return 0.0f;
}

void IndeedTokyo::MultiAbsSubarraySum()
{
}
