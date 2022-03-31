#include <bits/stdc++.h>
using namespace std;

const int d[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
int N, M, cnt = 0, l_cnt = 0;
int A[101][101];
bool visited[101][101];

bool check() {
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			if (A[i][j]) return true;
		}
	}
	return false;
}

int rs() {
	int ret = 0;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			if (A[i][j]) ret++;
		}
	}
	return ret;
}

void dfind() {
	memset(visited, false, sizeof(visited));
	queue<pair<int, int> > q;
	q.push({ 0,0 });
	visited[0][0] = true;
	
	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		for (int i = 0; i < 4; ++i) {
			int nx = cur.first + d[i][0], ny = cur.second + d[i][1];
			if (nx < 0 or ny < 0 or nx >= N or ny >= M) continue;
			if (visited[nx][ny]) continue;
			if (!A[nx][ny]) q.push({ nx,ny });
			else A[nx][ny] = 0;
			visited[nx][ny] = true;
		}
	}
}			

int main(void) {
	cin >> N >> M;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			cin >> A[i][j];
		}
	}

	while (check()) {
		cnt++;
		l_cnt = rs();
		dfind();
	}

	cout << cnt << '\n' << l_cnt;
}
