#pragma once
#include <iostream>
#include <vector>

using namespace std;

class ZOJ
{
public:
	ZOJ();
	~ZOJ();
	class FireNET {
		int N;
		vector<vector<char>> maps;
		int best_res;
		int test_main();
		void DFS(int index, int total);
		bool judge(int x, int y);
	};

};

