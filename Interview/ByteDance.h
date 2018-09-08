#pragma once
#include <vector>
#include <iostream>

using namespace std;

class ByteDance
{
public:
	ByteDance();
	~ByteDance();
	class ConnectedComponnent
	{
	public:
		int dx[4] = { -1,0,0,1};
		int dy[4] = {0,1,-1,0};
		int row_count;
		int col_count;
		vector<vector<int>> data;//input data of 0 or 1 
		vector<vector<int>> label;//matrix store whether this position has been visited
		ConnectedComponnent(vector<vector<int>>input_data);
		~ConnectedComponnent();
		void DFS(int i, int j, int current_label);
		int find_connected_components();
		//https://blog.csdn.net/rnzhiw/article/details/81358942
		//https://stackoverflow.com/questions/14465297/connected-component-labelling
	};
	int BagDp(vector<pair<int, int>> data);
};

