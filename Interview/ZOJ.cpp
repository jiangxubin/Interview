#include "stdafx.h"
#include "ZOJ.h"


ZOJ::ZOJ()
{
}


ZOJ::~ZOJ()
{
}


int ZOJ::FireNET::test_main()
{
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> maps[i][j];
		}
	}
	DFS(0, 0);
	return best_res;
}

void ZOJ::FireNET::DFS(int index, int total)
{
	if (total > best_res) {
		best_res = total;
	}
	else {
		int x = index / N;
		int y = index % N;
		if (maps[x][y] == '.'&&judge(x, y)) {
			maps[x][y] = 'E';
			DFS(index + 1, total+1);
			maps[x][y] = '.';
		}
		DFS(index + 1, total);
	}
}

bool ZOJ::FireNET::judge(int x, int y)
{
	int N = maps[0].size();
	//X-wall,.-blank, E-existed castle
	if (maps[x][y] == 'X') return false;
	else if (maps[x][y] == 'E') return false;
	for (int i = x; i >= 0; i--) {
		if (maps[i][y] == 'E') return false;
		else if (maps[i][y] == 'X') break;
	}
	for (int i = x; i < N; i++) {
		if (maps[i][y] == 'E') return false;
		else if (maps[i][y] == 'X') break;
	}
	for (int j = y; j >= 0; j--) {
		if (maps[x][j] == 'E') return false;
		else if (maps[x][j] == 'X') break;
	}
	for (int j = y; j < N; j++) {
		if (maps[x][j] == 'E') return false;
		else if (maps[x][j] == 'X') break;
	}
	return true;
}
