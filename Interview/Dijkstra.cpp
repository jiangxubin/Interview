#include "stdafx.h"
#include "Dijkstra.h"



Dijkstra::Dijkstra()
{
}


Dijkstra::~Dijkstra()
{
}

int Dijkstra::min_distance(vector<int> dist, vector<vector<int>> grapth)
{
	return 0;
}

vector<int> Dijkstra::dijkstra(vector<vector<int>> &graph, int start)
{
	vector<pair<int, int>> visited;
	vector<pair<int, int>> unvisited;
	visited.push_back(make_pair(start, 0));
	for (int i = 0; i < graph.size() && i != start; i++) {
		unvisited.push_back(make_pair(i, graph[start][i]));
	}
	return vector<int>();
}
