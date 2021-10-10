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

const int MM = 501;
int M, N;
int v[MM][MM];
int dp[MM][MM];
int d[4][2] = { {0,1},{0,-1},{-1,0},{1,0} };

int dfs(int x, int y) {
	if (x == M && y == N) return 1;
	if (dp[x][y] == -1) {
		dp[x][y] = 0;
		for (int i = 0; i < 4; ++i) {
			int nx = x + d[i][0];
			int ny = y + d[i][1];
			if (nx >= 1 && nx <= M && ny >= 1 && ny <= N) if (v[x][y] > v[nx][ny]) dp[x][y] += dfs(nx, ny);
		}
	}

	return dp[x][y];
}

int main(void) {
	fast;
	cin >> M >> N;
	memset(dp, -1, sizeof(dp));
	for (int i = 1; i <= M; ++i) for (int j = 1; j <= N; ++j) cin >> v[i][j];
	cout << dfs(1,1);
	return 0;
}
