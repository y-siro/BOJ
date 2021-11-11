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

// 7562 나이트의 이동 - BFS

int t, N, x, xx, y, yy;
int arr[333][333];
bool visited[333][333];
int d[8][2] = { {1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1},{-2,1},{-1,2} };
queue<pii> q;

void bfs(int x, int y) {
	visited[x][y] = true;
	q.push(mp(x, y));
	while (!q.empty()) {
		int x = q.front().F;
		int y = q.front().S;
		q.pop();
		if (x == xx and y == yy) {
			cout << arr[x][y] << "\n";
			while (!q.empty()) q.pop();
			break;
		}
		for (int i = 0; i < 8; ++i) {
			int nx = x + d[i][0];
			int ny = y + d[i][1];
			if (nx < 0 or nx >= N or ny < 0 or ny >= N or visited[nx][ny]) continue;
			visited[nx][ny] = true;
			arr[nx][ny] = arr[x][y] + 1;
			q.push(mp(nx, ny));
		}
	}
}

int main(void) {
	fast;
	cin >> t;
	while (t--) {
		memset(arr, 0, sizeof(arr));
		memset(visited, false, sizeof(visited));
		cin >> N >> x >> y >> xx >> yy;
		bfs(x, y);
	}
}
