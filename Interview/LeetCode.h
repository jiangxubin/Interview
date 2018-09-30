#pragma once
#include <string>
#include <stack>
#include <algorithm>
#include <limits>
#include "ctype.h"

using namespace std;


class LeetCode
{
public:
	struct Node {
		int val;
		Node *left;
		Node *right;
		Node(int x) :val(x), left(NULL), right(NULL) {};
	};
	LeetCode();
	~LeetCode();
	string decode_string(string s);
	int bst_min_diff(Node *root);
	void auxiliary(Node *root, int &pre, int &res);
	//https://leetcode.com/problems/minimum-distance-between-bst-nodes/discuss/128516/C++-Recursive-and-Iterative-Summary-for-Question-783-and-530.
	//http://www.cnblogs.com/grandyang/p/6540165.html
	//http://www.cnblogs.com/grandyang/p/6540165.html

	int rob(Node* root);
};

