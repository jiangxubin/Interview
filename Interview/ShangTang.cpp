#include "stdafx.h"
#include "ShangTang.h"


ShangTang::ShangTang()
{
}


ShangTang::~ShangTang()
{
}

void ShangTang::dfs(int index, vector<int>weights, vector<int> paths, vector<bool> &visit,vector<int> &sum)
{
	if (visit[index]) {
		return;
	}
	else {
		visit[index] = true;
		int curr_weights = weights[index];
		int curr_sum = (*sum.rbegin()) + curr_weights;
		sum.push_back(curr_sum);
		dfs(paths[index], weights, paths, visit, sum);
	}
}

int ShangTang::max_total_counts(vector<int> weights, vector<int> paths)
{
	vector<int> all;
	for (int i = 0; i < weights.size(); i++) {
		vector<int> sum(10, 0);
		vector<bool> visit(weights.size(), false);
		dfs(i, weights, paths, visit,sum);
		int max = *max_element(sum.begin(), sum.end());
		all.push_back(max);
	}
	return *max_element(all.begin(), all.end());
}
