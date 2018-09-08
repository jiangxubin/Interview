#include "stdafx.h"
#include "FuXiLab.h"
#include <vector>
#include <iostream>
#include <map>

using namespace std;

FuXiLab::FuXiLab()
{
}


FuXiLab::~FuXiLab()
{
}

void FuXiLab::GetThroughTrapArea()
{
	//vector< vector<int>> condition = { { 1, 0, 0, 1, 0 },
	//{ 0,1,0, 0,1,0 },
	//{ 0,0,1,0,0 },
	//{ 0,1,1,1,0 },
	//};
	//int N = 4;
	//int M = 5;
	//map<int, int> init = { 1, 1 };
	//vector< map<int, int>> prev = { { 1, 1 },{ 2, 2 },{ 3, 3 } };
	//vector< map<int, int>> curr;
	//for (int i = 1; i < N - 1; i++) {
	//	for (auto iter = prev.begin(); iter != prev.end(); iter++) {
	//		int prev_loc = iter->begin()->first;
	//		for (int j = (iter->begin()->second - 1 > 0 ? iter->begin()->second - 1 : 0); j <= (iter->begin()->second + 1 < M - 1 ? iter->begin()->second + 1 : M - 1); j++) {
	//			if (condition[i][j] != 1) {
	//				curr.push_back({ prev_loc + j, j });
	//			}
	//		}
	//	}
	//	prev = curr;
	//	curr.clear();
	//}
	//if (prev.size() == 0) {
	//	cout << "Can't reach safety area" << endl;
	//}
	//if (prev.size() != 0) {
	//	cout << "Can reach safety area" << endl;
	//}
}
