#include <bits/stdc++.h>
using namespace std;

const int d[4][2] = { {1,0},{0,1},{-1,0},{0,-1} };
int a[2020][2020] = { 0, }, visited[2020][2020] = { 0, };
queue<pair<int, int>> q;
int n, m, k;
pair<int, int> s;

void pre_bfs() {
	while (!q.empty()) {
		auto cur = q.front();
		int x = cur.first, y = cur.second;
		q.pop();

		if (visited[x][y] == k + 1) continue;
		for (int i = 0; i < 4; ++i) {
			int nx = x + d[i][0], ny = y + d[i][1];
			if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
			if (visited[nx][ny]) continue;
			visited[nx][ny] = visited[x][y] + 1;
			a[nx][ny] = 1;
			q.push({ nx,ny });
		}		
	}	
}

int bfs() {
	visited[s.first][s.second] = 1;
	q.push({ s.first, s.second });

	while (!q.empty()) {
		auto cur = q.front();
		int x = cur.first, y = cur.second;
		q.pop();

		for (int i = 0; i < 4; ++i) {
			int nx = x + d[i][0], ny = y + d[i][1];
			if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
			if (a[nx][ny] == 1 || visited[nx][ny]) continue;
			visited[nx][ny] = visited[x][y] + 1;
			if (a[nx][ny] == 2) return visited[x][y];
			q.push({ nx,ny });
		}
	}
	return -1;
}

int main(void) {
	cin >> n >> m >> k;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> a[i][j];
			if (a[i][j] == 4) {
				s.first = i; s.second = j;
			}
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (a[i][j] == 3) {
				visited[i][j] = 1;
				a[i][j] = 1;
				q.push({ i,j });
			}
		}
	}
	pre_bfs();
	memset(visited, 0, sizeof(visited));
	cout << bfs() << '\n';
	return 0;
}
