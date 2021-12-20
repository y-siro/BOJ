#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>

int n, m, a, b, mv=(int)1e9;
bool A[22][22];
bool visited[22][22];

void ch3(int x, int y) {
	int cnt = 0;
	memset(visited, false, sizeof(visited));
	for (int i = y; i < y + 3; ++i) {
		if (!A[x][i]) cnt += a;
		visited[x][i] = true;
	}
	if (!A[x + 1][y]) cnt += a;
	visited[x + 1][y] = true;
	for (int i = y; i < y + 3; ++i) {
		if (!A[x + 2][i]) cnt += a;
		visited[x + 2][i] = true;
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (!visited[i][j] and A[i][j]) cnt += b;
		}
	}
	mv = min(mv, cnt);	
}

void ch6(int x, int y) {
	int cnt = 0;
	memset(visited, false, sizeof(visited));
	for (int i = y; i < y + 6; ++i) {
		if (!A[x][i]) cnt += a;
		visited[x][i] = true;
	}
	for (int i = y; i < y + 6; ++i) {
		if (!A[x+1][i]) cnt += a;
		visited[x+1][i] = true;
	}
	for (int i = y; i < y + 2; ++i) {
		if (!A[x + 2][i]) cnt += a;
		visited[x + 2][i] = true;
	}
	for (int i = y; i < y + 2; ++i) {
		if (!A[x + 3][i]) cnt += a;
		visited[x + 3][i] = true;
	}
	for (int i = y; i < y + 6; ++i) {
		if (!A[x + 4][i]) cnt += a;
		visited[x + 4][i] = true;
	}
	for (int i = y; i < y + 6; ++i) {
		if (!A[x + 5][i]) cnt += a;
		visited[x + 5][i] = true;
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (!visited[i][j] and A[i][j]) cnt += b;
		}
	}
	mv = min(mv, cnt);
}

void ch9(int x, int y) {
	int cnt = 0;
	memset(visited, false, sizeof(visited));
	for (int i = y; i < y + 9; ++i) {
		if (!A[x][i]) cnt += a;
		visited[x][i] = true;
	}
	for (int i = y; i < y + 9; ++i) {
		if (!A[x+1][i]) cnt += a;
		visited[x+1][i] = true;
	}
	for (int i = y; i < y + 9; ++i) {
		if (!A[x+2][i]) cnt += a;
		visited[x+2][i] = true;
	}
	for (int i = y; i < y + 3; ++i) {
		if (!A[x + 3][i]) cnt += a;
		visited[x + 3][i] = true;
	}
	for (int i = y; i < y + 3; ++i) {
		if (!A[x + 4][i]) cnt += a;
		visited[x + 4][i] = true;
	}
	for (int i = y; i < y + 3; ++i) {
		if (!A[x + 5][i]) cnt += a;
		visited[x + 5][i] = true;
	}
	for (int i = y; i < y + 9; ++i) {
		if (!A[x + 6][i]) cnt += a;
		visited[x + 6][i] = true;
	}
	for (int i = y; i < y + 9; ++i) {
		if (!A[x + 7][i]) cnt += a;
		visited[x + 7][i] = true;
	}
	for (int i = y; i < y + 9; ++i) {
		if (!A[x + 8][i]) cnt += a;
		visited[x + 8][i] = true;
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (!visited[i][j] and A[i][j]) cnt += b;
		}
	}
	mv = min(mv, cnt);
}

void ch12(int x, int y) {
	int cnt = 0;
	memset(visited, false, sizeof(visited));
	for (int i = y; i < y + 12; ++i) {
		if (!A[x][i]) cnt += a;
		visited[x][i] = true;
	}
	for (int i = y; i < y + 12; ++i) {
		if (!A[x+1][i]) cnt += a;
		visited[x+1][i] = true;
	}
	for (int i = y; i < y + 12; ++i) {
		if (!A[x+2][i]) cnt += a;
		visited[x+2][i] = true;
	}
	for (int i = y; i < y + 12; ++i) {
		if (!A[x+3][i]) cnt += a;
		visited[x+3][i] = true;
	}
	for (int i = y; i < y + 4; ++i) {
		if (!A[x+4][i]) cnt += a;
		visited[x+4][i] = true;
	}
	for (int i = y; i < y + 4; ++i) {
		if (!A[x+5][i]) cnt += a;
		visited[x+5][i] = true;
	}
	for (int i = y; i < y + 4; ++i) {
		if (!A[x+6][i]) cnt += a;
		visited[x+6][i] = true;
	}
	for (int i = y; i < y + 4; ++i) {
		if (!A[x+7][i]) cnt += a;
		visited[x+7][i] = true;
	}
	for (int i = y; i < y + 12; ++i) {
		if (!A[x+8][i]) cnt += a;
		visited[x+8][i] = true;
	}
	for (int i = y; i < y + 12; ++i) {
		if (!A[x+9][i]) cnt += a;
		visited[x+9][i] = true;
	}
	for (int i = y; i < y + 12; ++i) {
		if (!A[x+10][i]) cnt += a;
		visited[x+10][i] = true;
	}
	for (int i = y; i < y + 12; ++i) {
		if (!A[x+11][i]) cnt += a;
		visited[x+11][i] = true;
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (!visited[i][j] and A[i][j]) cnt += b;
		}
	}
	mv = min(mv, cnt);
}

void ch15(int x, int y) {
	int cnt = 0;
	memset(visited, false, sizeof(visited));
	for (int i = y; i < y + 15; ++i) {
		if (!A[x][i]) cnt += a;
		visited[x][i] = true;
	}
	for (int i = y; i < y + 15; ++i) {
		if (!A[x+1][i]) cnt += a;
		visited[x+1][i] = true;
	}
	for (int i = y; i < y + 15; ++i) {
		if (!A[x+2][i]) cnt += a;
		visited[x+2][i] = true;
	}
	for (int i = y; i < y + 15; ++i) {
		if (!A[x+3][i]) cnt += a;
		visited[x+3][i] = true;
	}
	for (int i = y; i < y + 15; ++i) {
		if (!A[x+4][i]) cnt += a;
		visited[x+4][i] = true;
	}
	for (int i = y; i < y + 5; ++i) {
		if (!A[x+5][i]) cnt += a;
		visited[x+5][i] = true;
	}
	for (int i = y; i < y + 5; ++i) {
		if (!A[x+6][i]) cnt += a;
		visited[x+6][i] = true;
	}
	for (int i = y; i < y + 5; ++i) {
		if (!A[x+7][i]) cnt += a;
		visited[x+7][i] = true;
	}
	for (int i = y; i < y + 5; ++i) {
		if (!A[x+8][i]) cnt += a;
		visited[x+8][i] = true;
	}
	for (int i = y; i < y + 5; ++i) {
		if (!A[x+9][i]) cnt += a;
		visited[x+9][i] = true;
	}
	for (int i = y; i < y + 15; ++i) {
		if (!A[x+10][i]) cnt += a;
		visited[x+10][i] = true;
	}
	for (int i = y; i < y + 15; ++i) {
		if (!A[x+11][i]) cnt += a;
		visited[x+11][i] = true;
	}
	for (int i = y; i < y + 15; ++i) {
		if (!A[x+12][i]) cnt += a;
		visited[x+12][i] = true;
	}
	for (int i = y; i < y + 15; ++i) {
		if (!A[x+13][i]) cnt += a;
		visited[x+13][i] = true;
	}
	for (int i = y; i < y + 15; ++i) {
		if (!A[x+14][i]) cnt += a;
		visited[x+14][i] = true;
	}
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (!visited[i][j] and A[i][j]) cnt += b;
		}
	}
	mv = min(mv, cnt);
}

void ch18(int x, int y) {
	int cnt = 0;
	memset(visited, false, sizeof(visited));
	for (int i = y; i < y + 18; ++i) {
		if (!A[x][i]) cnt += a;
		visited[x][i] = true;
	}
	for (int i = y; i < y + 18; ++i) {
		if (!A[x+1][i]) cnt += a;
		visited[x+1][i] = true;
	}
	for (int i = y; i < y + 18; ++i) {
		if (!A[x+2][i]) cnt += a;
		visited[x+2][i] = true;
	}
	for (int i = y; i < y + 18; ++i) {
		if (!A[x+3][i]) cnt += a;
		visited[x+3][i] = true;
	}
	for (int i = y; i < y + 18; ++i) {
		if (!A[x+4][i]) cnt += a;
		visited[x+4][i] = true;
	}
	for (int i = y; i < y + 18; ++i) {
		if (!A[x+5][i]) cnt += a;
		visited[x+5][i] = true;
	}
	for (int i = y; i < y + 6; ++i) {
		if (!A[x+6][i]) cnt += a;
		visited[x+6][i] = true;
	}
	for (int i = y; i < y + 6; ++i) {
		if (!A[x+7][i]) cnt += a;
		visited[x+7][i] = true;
	}
	for (int i = y; i < y + 6; ++i) {
		if (!A[x+8][i]) cnt += a;
		visited[x+8][i] = true;
	}
	for (int i = y; i < y + 6; ++i) {
		if (!A[x+9][i]) cnt += a;
		visited[x+9][i] = true;
	}
	for (int i = y; i < y + 6; ++i) {
		if (!A[x+10][i]) cnt += a;
		visited[x+10][i] = true;
	}
	for (int i = y; i < y + 6; ++i) {
		if (!A[x+11][i]) cnt += a;
		visited[x+11][i] = true;
	}
	for (int i = y; i < y + 18; ++i) {
		if (!A[x+12][i]) cnt += a;
		visited[x+12][i] = true;
	}
	for (int i = y; i < y + 18; ++i) {
		if (!A[x+13][i]) cnt += a;
		visited[x+13][i] = true;
	}
	for (int i = y; i < y + 18; ++i) {
		if (!A[x+14][i]) cnt += a;
		visited[x+14][i] = true;
	}
	for (int i = y; i < y + 18; ++i) {
		if (!A[x+15][i]) cnt += a;
		visited[x+15][i] = true;
	}
	for (int i = y; i < y + 18; ++i) {
		if (!A[x+16][i]) cnt += a;
		visited[x+16][i] = true;
	}
	for (int i = y; i < y + 18; ++i) {
		if (!A[x+17][i]) cnt += a;
		visited[x+17][i] = true;
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (!visited[i][j] and A[i][j]) cnt += b;
		}
	}

	mv = min(mv, cnt);
}

int main(void) {
	fast;
	cin >> n >> m >> a >> b;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			char c; cin >> c;
			if (c == '#') A[i][j] = true;
			else A[i][j] = false;
		}
	}
	int u = min(n, m);
	
	if (u >= 18) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (i + 2 < n and j + 2 < m) ch3(i, j);
				if (i + 5 < n and j + 5 < m) ch6(i, j);
				if (i + 8 < n and j + 8 < m) ch9(i, j);
				if (i + 11 < n and j + 11 < m) ch12(i, j);
				if (i + 14 < n and j + 14 < m) ch15(i, j);
				if (i + 17 < n and j + 17 < m) ch18(i, j);
			}
		}
	}
	else if (u >= 15) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (i + 2 < n and j + 2 < m) ch3(i, j);
				if (i + 5 < n and j + 5 < m) ch6(i, j);
				if (i + 8 < n and j + 8 < m) ch9(i, j);
				if (i + 11 < n and j + 11 < m) ch12(i, j);
				if (i + 14 < n and j + 14 < m) ch15(i, j);
			}
		}
	}
	else if (u >= 12) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (i + 2 < n and j + 2 < m) ch3(i, j);
				if (i + 5 < n and j + 5 < m) ch6(i, j);
				if (i + 8 < n and j + 8 < m) ch9(i, j);
				if (i + 11 < n and j + 11 < m) ch12(i, j);
			}
		}
	}
	else if (u >= 9) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (i + 2 < n and j + 2 < m) ch3(i, j);
				if (i + 5 < n and j + 5 < m) ch6(i, j);
				if (i + 8 < n and j + 8 < m) ch9(i, j);
			}
		}
	}
	else if (u >= 6) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (i + 2 < n and j + 2 < m) ch3(i, j);
				if (i + 5 < n and j + 5 < m) ch6(i, j);
			}
		}
	}
	else if (u >= 3) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if(i+2<n and j+2 < m) ch3(i, j);
			}
		}
	}		
	cout << mv;
}
