#include "stdafx.h"
#include "MeiTuan.h"


MeiTuan::MeiTuan()
{
}


MeiTuan::~MeiTuan()
{
}

int MeiTuan::ModBy7(vector<int> data)
{
	//Given a list of int data, concate two element into one, compute the number of concated number which can  be divided by 7
	unordered_map<int, int> mod_res(7);
	for (int i = 0; i < 7; i++) {
		mod_res[i] = 0;
	}
	for (auto ele : data) {
		int res = ele % 7;
		mod_res[res] += 1;
	}
	int total = 0;
	total += mod_res[0] * (mod_res[0] - 1);
	total += mod_res[1] * mod_res[6] * 2;
	total += mod_res[2] * mod_res[5] * 2;
	total += mod_res[3] * mod_res[4] * 2;
	return total;
}
