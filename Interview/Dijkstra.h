#pragma once
#include <vector>

using namespace std;
class Dijkstra
{
public:
	Dijkstra();
	~Dijkstra();
	int min_distance(vector<int> dist, vector<vector<int>> grapth);
	vector<int> dijkstra(vector<vector<int>>&graph, int start);
};

