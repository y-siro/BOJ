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
#define F first
#define S second

// 23741 야바위 게임

int N, M, X, Y;
vi v[1111];
bool d[1111][1111];
queue<int> q;

void bfs(int x,int cnt) {
	q.push(x);
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < v[x].size(); ++i) {
			int nx = v[x][i];
			d[nx][cnt + 1] = true;
		}
	}
}

int main(void) {
	fast;
	memset(d, false, sizeof(d));
	cin >> N >> M >> X >> Y;
	for (int i = 0; i < M; ++i) {
		int s, e; cin >> s >> e;
		v[s].pb(e); v[e].pb(s);
	}
	if (!v[X].size()) {
		cout << -1; return 0;
	}
	d[X][0] = true;
	for (int i = 0; i < Y; ++i) {
		for (int j = 1; j <= N; ++j) {
			if (d[j][i]) bfs(j,i);
		}
	}

	for (int i = 1; i <= N; ++i) {
		if (d[i][Y]) cout << i << ' ';
	}
}
