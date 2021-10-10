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

int n, cnt=0;
int d[4][2] = { {0,1},{0,-1},{-1,0},{1,0} };
bool visited[101][101] = { false, };
string str;
vector<string> s;

void dfs(int x, int y) {
	visited[x][y] = true;
	for (int i = 0; i < 4; ++i) {
		int nx = x + d[i][0];
		int ny = y + d[i][1];
		if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
		if (!visited[nx][ny] && s[x][y] == s[nx][ny]) {
			dfs(nx, ny);
		}
	}
}

int main(void) {
	fast;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> str;
		s.push_back(str);
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (!visited[i][j]) {
				dfs(i, j);
				cnt++;
			}
		}
	}
	cout << cnt << " ";
	memset(visited, false, sizeof(visited));
	cnt = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (s[i][j] == 'G') s[i][j] = 'R';
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (!visited[i][j]) {
				dfs(i, j);
				cnt++;
			}
		}
	}

	cout << cnt;
	return 0;
}
