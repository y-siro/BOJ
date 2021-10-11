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
int n, m, max_val=0, cnt;
string str;
vector<string> s;
int check[M][M];
bool visited[M][M] = { false, };
int d[4][2] = { {0,1},{0,-1},{-1,0},{1,0} };

void bfs(int x, int y) {
	visited[x][y] = true;
	queue<pair<int, int>> q;
	q.push(mp(x, y));
	while (!q.empty()) {
		int x = q.front().F;
		int y = q.front().S;
		q.pop();
		for (int i = 0; i < 4; ++i) {
			int nx = x + d[i][0];
			int ny = y + d[i][1];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (s[nx][ny] == '1' && !visited[nx][ny]) {
				check[nx][ny] = check[x][y] + 1;
				visited[nx][ny] = true;
				q.push(mp(nx, ny));
			}
		}
	}
}

int main(void) {
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> str;
		s.pb(str);
	}	
	bfs(0, 0);
	cout << check[n - 1][m - 1] + 1;
	return 0;
}
