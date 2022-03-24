#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long

int M[19][19];

int check_1(int x, int y, int c) { // ㅡ 방향
	int ret = 0, xx = x, yy = y;
	while (true) {
		if (M[xx][yy] == c) {
			ret++;
			yy++;
			if (xx < 0 or yy < 0 or xx >= 19 or yy >= 19) break;
		}
		else break;
	}
	while (true) {
		if (y == 0) break;
		if (M[x][y - 1] == c) {
			ret++;
			y--;			
		}
		else break;
	}	
	return ret;
}

int check_2(int x, int y, int c) { // \ 방향
	int ret = 0, xx = x, yy = y;
	while (true) {
		if (M[xx][yy] == c) {
			ret++;
			xx++;  yy++;
			if (xx < 0 or yy < 0 or xx >= 19 or yy >= 19) break;
		}
		else break;
	}
	while (true) {
		if (x == 0 or y == 0) break;
		if (M[x - 1][y - 1] == c) {
			ret++;
			x--; y--;
		}
		else break;
	}
	return ret;
}

int check_3(int x, int y, int c) { // l 방향
	int ret = 0, xx = x, yy = y;
	while (true) {
		if (M[xx][yy] == c) {
			ret++;
			xx++;
			if (xx < 0 or yy < 0 or xx >= 19 or yy >= 19) break;
		}
		else break;
	}
	while (true) {
		if (x == 0) break;
		if (M[x-1][y] == c) {
			ret++;
			x--;
		}
		else break;
	}
	return ret;
}

int check_4(int x, int y, int c) { // / 방향
	int ret = 0, xx = x, yy = y;
	while (true) {
		if (M[xx][yy] == c) {
			ret++;
			yy++; xx--;
			if (xx < 0 or yy < 0 or xx >= 19 or yy >= 19) break;
		}
		else break;
	}
	while (true) {
		if (y == 0) break;
		if (M[x+1][y - 1] == c) {
			ret++;
			x++; y--;
		}
		else break;
	}
	return ret;
}

int main(void) {
	fast;

	for (int i = 0; i < 19; ++i) {
		for (int j = 0; j < 19; ++j) {
			cin >> M[i][j];
		}
	}

	for (int i = 0; i < 19; ++i) {
		for (int j = 0; j < 19; ++j) {
			if (M[i][j] == 0) continue;
			else if (M[i][j] == 1) {
				if (check_1(i, j, 1) == 5) {
					cout << "1"<<'\n';
					cout << i + 1 << ' ' << j+1;
					return 0;
				}
				else if (check_2(i, j, 1) == 5) {
					cout << "1" << '\n';
					cout << i + 1 << ' ' << j+1;
					return 0;
				}
				else if (check_3(i, j, 1) == 5) {
					cout << "1" << '\n';
					cout << i + 1 << ' ' << j+1;
					return 0;
				}
				else if (check_4(i, j, 1) == 5) {
					cout << "1" << '\n';
					cout << i + 1 + 4 << ' ' << j+1-4;
					return 0;
				}
			}
			else {
				if (check_1(i, j, 2) == 5) {
					cout << "2" << '\n';
					cout << i + 1 << ' ' << j+1;
					return 0;
				}
				else if (check_2(i, j, 2) == 5) {
					cout << "2" << '\n';
					cout << i + 1 << ' ' << j+1;
					return 0;
				}
				else if (check_3(i, j, 2) == 5) {
					cout << "2" << '\n';
					cout << i + 1 << ' ' << j+1;
					return 0;
				}
				else if (check_4(i, j, 2) == 5) {
					cout << "2" << '\n';
					cout << i + 1 + 4<< ' ' << j+1-4;
					return 0;
				}
			}
		}
	}
	cout << 0;
}
