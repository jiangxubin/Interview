#include "stdafx.h"
#include "LeetCode.h"


LeetCode::LeetCode()
{
}


LeetCode::~LeetCode()
{
}

string LeetCode::decode_string(string s)
{
	stack<int> nums;
	stack<string> chars;
	string res;
	int num=0;
	for (char c : s) {
		if (isdigit(c)) {
			num = num*10+(c-'0');
		}
		else if (c == '[') {
			chars.push(res);
			nums.push(num);
			num = 0;
			res = "";
		}
		else if (isalpha(c)) {
			res += c;
		}
		else if (c == ']') {
			string temp = res;
			for (int i = 0; i < nums.top() - 1; i++) {
				res += temp;
			}
			res = chars.top() + res;
			chars.pop();
			nums.pop();
		}
	}
	return res;
}

int LeetCode::bst_min_diff(Node * root)
{
	int pre=numeric_limits<int>::min(), result=numeric_limits<int>::max();
	auxiliary(root, pre, result);
	return result;
}

void LeetCode::auxiliary(Node *root, int &pre, int &res) {
	if (!root) return;
	auxiliary(root->left, pre, res);
	if (pre != -1) {
		res = min(res, root->val-pre);
	}
	pre = root->val;
	auxiliary(root->right, pre, res);
}
