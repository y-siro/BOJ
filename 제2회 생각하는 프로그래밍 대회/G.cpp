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

int R1, R2, C1, C2;
int cnt = 0;
int d[8][2] = { {-3,2},{-2,3},{2,3},{3,2},{3,-2},{2,-3},{-2,-3},{-3,-2} };
int m[10][9];
bool visited[10][9];
queue<pair<pii,int>> q;

bool check(int num, int x, int y) {
	if (num == 0) {
		if (m[x - 1][y] or m[x - 2][y + 1]) return false;
	}
	else if (num == 1) {
		if (m[x][y+1] or m[x - 1][y + 2]) return false;
	}
	else if (num == 2) {
		if (m[x][y+1] or m[x + 1][y + 2]) return false;
	}
	else if (num == 3) {
		if (m[x+1][y] or m[x + 2][y + 1]) return false;
	}
	else if (num == 4) {
		if (m[x + 1][y] or m[x + 2][y - 1]) return false;
	}
	else if (num == 5) {
		if (m[x][y-1] or m[x+1][y-2]) return false;
	}
	else if (num == 6) {
		if (m[x][y-1] or m[x-1][y-2]) return false;
	}
	else if (num == 7) {
		if (m[x - 1][y] or m[x - 2][y - 1]) return false;
	}
	return true;
}


void bfs(int x, int y, int cnt) {
	visited[x][y] = true;
	q.push({ {x,y}, cnt });

	while (!q.empty()) {
		int x = q.front().first.first, y = q.front().first.second, cnt = q.front().second;
		//cout << x << ' ' << y << ' ' << cnt << "\n";
		q.pop();
		if (x == R2 and y == C2) {
			cout << cnt; return;
		}
		for (int i = 0; i < 8; ++i) {
			int nx = x + d[i][0], ny = y + d[i][1];
			if (nx < 0 or ny < 0 or nx >= 10 or ny >= 9) continue;
			if (visited[nx][ny]) continue;
			if(!check(i,x,y)) continue;
			visited[nx][ny] = true;
			q.push({ {nx,ny}, cnt + 1 });
		}
	}
	cout << -1;
}

int main(void) {
	fast;
	cin >> R1 >> C1 >> R2 >> C2;
	m[R2][C2] = 1;
	bfs(R1, C1, 0);
}
