#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define pb push_back
#define mp make_pair
#define vc vector
#define vi vector<int>
#define vl vector<ll>
#define pq priority_queue<int,vector<int>,less<int>>
#define pql priority_queue<int,vector<int>,greater<int>>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
#define F first
#define S second
#define endl "\n"
typedef long long ll;

// 2589 보물섬 - 그래프 이론, 그래프 탐색, 브루트포스 알고리즘, 너비 우선 탐색

int N, M,max_val=0,ans=0;
vc<string> v;
bool visited[55][55];
int m[55][55];
int d[4][2] = { {0,1},{0,-1},{-1,0},{1,0} };
queue<pii> q;

int bfs(int x, int y) {
	visited[x][y] = true;
	q.push(mp(x, y));
	while (!q.empty()) {
		int x = q.front().first; int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; ++i) {
			int nx = x + d[i][0]; int ny = y + d[i][1];
			if (nx < 0 or nx >= N or ny < 0 or ny >= M) continue;
			if (v[nx][ny] == 'L' and !visited[nx][ny]) {
				visited[nx][ny] = true;
				m[nx][ny] = m[x][y]+1;
				q.push(mp(nx, ny));
				max_val = max(max_val, m[nx][ny]);
			}
		}
	}	
	return max_val;
}	

int main(void) {
	fast;
	cin >> N >> M;
	for (int i = 0; i < N; ++i) {
		string s; cin >> s;
		v.pb(s);
	}
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			if (v[i][j] == 'L') {
				ans = max(bfs(i, j), ans);
				max_val = 0;
				memset(visited, false, sizeof(visited));
				memset(m, 0, sizeof(m));
			}
		}
	}
	cout << ans;
}
