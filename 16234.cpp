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

int N, L, R, cnt = 0;
int sc, ss;
int v[55][55];
int d[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };
bool visited[55][55];
queue<pii> q;
vc<pii> check;
bool flag;

void bfs(int x, int y) {
	visited[x][y] = true;
	q.push({ x,y });
	while (!q.empty()) {
		int x = q.front().first, y = q.front().second;		
		check.pb({ x,y });
		q.pop();
		for (int i = 0; i < 4; ++i) {
			int nx = x + d[i][0], ny = y + d[i][1];
			if (nx < 0 or nx >= N or ny < 0 or ny >= N or visited[nx][ny]) continue;
			if (abs(v[x][y] - v[nx][ny]) >= L and abs(v[x][y] - v[nx][ny]) <= R) {
				q.push({ nx,ny });
				visited[nx][ny] = true;
				sc++; ss += v[nx][ny];
			}
		}		
	}
	if (sc > 1) {
		flag = true;
		for (int i = 0; i < check.size(); ++i) {
			v[check[i].first][check[i].second] = ss / sc;
		}		
	}
	check.clear();
}

int main(void) {
	fast;
	cin >> N >> L >> R;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cin >> v[i][j];
		}
	}
	while (true) {
		memset(visited, false, sizeof(visited));
		flag = false;
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < N; ++j) {
				if (!visited[i][j]) {
					sc = 1;
					ss = v[i][j];
					bfs(i, j);
				}
			}
		}
		if (!flag) break;
		cnt++;
	}
	cout << cnt;
}
