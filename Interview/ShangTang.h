#pragma once
#include <vector>
#include <algorithm>

using namespace std;

class ShangTang
{
public:
	ShangTang();
	~ShangTang();
	void dfs(int index, vector<int> weights, vector<int> paths, vector<bool> &visit, vector<int> &sum);
	int max_total_counts(vector<int> weights, vector<int> paths);
};

