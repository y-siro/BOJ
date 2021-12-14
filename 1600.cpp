#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
using ll = long long;

// 1600 말이 되고픈 원숭이

int K, W, H;
int m[202][202];
bool visited[202][202][31];
int d[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
int dh[8][2] = { {-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1} };
queue<pair<pii, pii> >q;

void bfs(int x, int y, int hc, int cnt) { // hc : K 남은 횟수, cnt : 이동 거리 카운트
	visited[x][y][hc] = true;
	q.push({ {x,y},{hc,cnt} });
	while (!q.empty()) {
		int x = q.front().first.first, y = q.front().first.second, hc = q.front().second.first, cnt = q.front().second.second;
		q.pop();
		if (x == H - 1 and y == W - 1) {
			cout << cnt; return;
		}

		if (hc) {
			for (int j = 0; j < 8; ++j) {
				int nx = x + dh[j][0], ny = y + dh[j][1];
				if (nx < 0 or nx >= H or ny < 0 or ny >= W) continue;
				if (!visited[nx][ny][hc-1] and !m[nx][ny]) {
					visited[nx][ny][hc-1] = true;
					q.push({ {nx,ny},{hc - 1,cnt + 1} });
				}
			}
		}

		for (int i = 0; i < 4; ++i) {
			int nx = x + d[i][0], ny = y + d[i][1];
			if (nx < 0 or nx >= H or ny < 0 or ny >= W) continue;
			if (!visited[nx][ny][hc] and !m[nx][ny]) {
				visited[nx][ny][hc] = true;
				q.push({ {nx,ny},{hc,cnt + 1} });
			}
		}
	}
	cout << -1;
}



int main(void) {
	fast;
	cin >> K >> W >> H;
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			cin >> m[i][j];
		}
	}
	bfs(0, 0, K, 0);	
}
