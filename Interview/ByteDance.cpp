#include "stdafx.h"
#include "ByteDance.h"


ByteDance::ByteDance()
{
}


ByteDance::~ByteDance()
{
}

int ByteDance::BagDp(vector<pair<int, int>> data)
{

	return 0;
}



ByteDance::ConnectedComponnent::ConnectedComponnent(vector<vector<int>>input_data)
{
	this->row_count = input_data.size();
	this->col_count = input_data[0].size();
	this->data = input_data;
	for (int i = 0; i < this->row_count; i++) {
		this->label.push_back(vector<int>(this->col_count, 0));
	}
}

ByteDance::ConnectedComponnent::~ConnectedComponnent()
{
}

void ByteDance::ConnectedComponnent::DFS(int i, int j, int current_label)
{
	if (i < 0 || i == this->row_count) return;
	if (j < 0 || j == this->col_count) return;
	if (this->label[i][j]!=0) return;
	this->label[i][j] = current_label;
	for (int neighbour = 0; neighbour < 4; neighbour++) {
		DFS(i + dx[neighbour], j + dy[neighbour], current_label);
	}
}

int ByteDance::ConnectedComponnent::find_connected_components()
{
	int current_label = 1;
	for (int i = 0; i < this->row_count; i++) {
		for (int j = 0; j < this->col_count; j++) {
			if (this->data[i][j] != 0 && this->label[i][j] == 0) DFS(i, j, current_label++);
		}
	}
	return current_label;
}

