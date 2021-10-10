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

const int M = 21;
int r, c, cnt = 0, max_val=0;
string str; vector<string> s;
int visited[26] = { false, };
int d[4][2] = { {0,1},{0,-1},{-1,0},{1,0} };
void dfs(int x, int y,int cnt) {
	max_val = max(max_val, cnt);
	for (int i = 0; i < 4; ++i) {
		int nx = x + d[i][0];
		int ny = y + d[i][1];
		if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
		int idx = (int)s[nx][ny] - 65;
		if (!visited[idx]) {
			visited[idx]++;
			dfs(nx, ny,cnt+1);
			visited[idx]--;
		}
	}
}

int main(void) {
	fast;

	cin >> r >> c;
	for (int i = 0; i < r; ++i) {
		cin >> str;
		s.pb(str);
	}
	int idx = (int)s[0][0] - 65;
	visited[idx]++;
	dfs(0, 0, 1);
	cout << max_val;

	return 0;
}
