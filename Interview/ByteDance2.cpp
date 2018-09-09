#include "stdafx.h"
#include "ByteDance2.h"


ByteDance2::ByteDance2()
{
}


ByteDance2::~ByteDance2()
{
}

int ByteDance2::longest_unique_substring(string data)
{
	set<string> all;
	for (int i = 0; i < data.size(); i++) {
		for (int j = i + 1; j < data.size(); j++) {
			string sub = data.substr(i, j - i);
			all.insert(sub);
		}
	}
	return 0;
}

int ByteDance2::find_bu(vector<vector<int>> data)
{
	return 0;
}

int ByteDance2::restore_ip(string data)
{
	return 0;
}

bool ByteDance2::vliad_utf8(string data)
{
	return false;
}

int ByteDance2::famous_user(vector<vector<int>> data)
{
	return 0;
}
