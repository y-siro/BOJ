#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vc vector
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define F first
#define S second

// 1388 바닥 장식 - DFS

int N, M, cnt=0;
vc<string> v;
bool visited[55][55];

void dfs1(int x, int y) {
	visited[x][y] = true;
	int ny = y + 1;
	if (ny < 0 or ny >= M) return;
	if (v[x][ny] == '-') dfs1(x, ny);
}

void dfs2(int x, int y) {
	visited[x][y] = true;
	int nx = x + 1;
	if (nx < 0 or nx >= N) return;
	if (v[nx][y] == '|') dfs2(nx, y);
}	

int main(void) {
	fast;
	cin >> N >> M;
	for (int i = 0; i < N; ++i) {
		string s; cin >> s;
		v.pb(s);
	}
	memset(visited, false, sizeof(visited));
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			if (v[i][j] == '-' and !visited[i][j]) {
				dfs1(i, j); cnt++;
			}
			if (v[i][j] == '|' and !visited[i][j]) {
				dfs2(i, j); cnt++;
			}
		}
	}
	cout << cnt;
}
