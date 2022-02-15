#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define pq priority_queue
#define pii pair<int,int>
#define pll pair<ll,ll>

int N;
vector<string> A;
int d[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
int c[55][55];

void bfs(int x, int y) {
	queue<pair<int, int>> q;
	q.push({ x,y });
	c[x][y] = 0;
	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		int x = cur.first, y = cur.second;
		for (int i = 0; i < 4; ++i) {
			int nx = x+d[i][0], ny = y+d[i][1];
			if (nx < 0 or ny < 0 or nx >= N or ny >= N) continue;
			if (A[nx][ny] == '1') {
				if (c[nx][ny] == -1 or c[nx][ny] > c[x][y]) {
					c[nx][ny] = c[x][y];
					q.push({ nx,ny });
				}
			}
			else {
				if (c[nx][ny] == -1 or c[nx][ny] > c[x][y] + 1) {
					c[nx][ny] = c[x][y] + 1;
					q.push({ nx,ny });
				}
			}
		}
	}
}

int main(void) {
	fast;
	memset(c, -1, sizeof(c));
	cin >> N;
	A.resize(N);
	for (int i = 0; i < N; ++i) cin >> A[i];
	bfs(0, 0);
	cout << c[N - 1][N - 1];
}
