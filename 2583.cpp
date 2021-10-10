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
#define pi pair<int,int>
#define pr pair<ll,ll>
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
#define F first
#define S second
#define endl "\n"
typedef long long int ll;

const int M = 101;
int m, n, k,cnt=0;
int v[M][M];
bool visited[M][M] = { false, };
int d[4][2] = { {0,1},{0,-1},{-1,0},{1,0} };
vi ans;

void dfs(int x, int y) {
	visited[x][y] = true;
	cnt++;
	for (int i = 0; i < 4; ++i) {
		int nx = x + d[i][0];
		int ny = y + d[i][1];
		if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
		if (!visited[nx][ny] && !v[nx][ny]) {
			dfs(nx, ny);
		}
	}
}

int main(void) {
	fast;

	cin >> n >> m >> k;
	for (int i = 0; i < k; ++i) {
		int x1, x2, y1, y2;
		cin >> y1 >> x1 >> y2 >> x2;
		for (int j = x1; j < x2; ++j) {
			for (int k = y1; k < y2; ++k) {
				v[j][k] = 1;
				visited[j][k] = true;
			}
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (!visited[i][j] && !v[i][j]) {
				dfs(i, j);
				ans.pb(cnt);
				cnt = 0;
			}
		}
	}
	sort(ans.begin(), ans.end());
	cout << ans.size() << endl;
	for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";

	return 0;
}
