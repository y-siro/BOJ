#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
const char en = '\n';

int N, M, L, R;
int cur_x, cur_y, ans = 1;
int A[1010][1010];
bool visited[1010][1010];

void bfs(int x, int y, int l, int r) {
	queue<pair<pair<int,int>, pair<int,int>> > q;
	visited[x][y] = true;
	q.push({ {x,y}, {l,r} });
	while (!q.empty()) {
		auto cur = q.front(); q.pop();

		int idx = 1;
		while (cur.first.first - idx >= 0) {
			if (visited[cur.first.first - idx][cur.first.second]) break;
			q.push({ {cur.first.first - idx,cur.first.second},{cur.second.first,cur.second.second} });
			visited[cur.first.first - idx][cur.first.second] = true;
			ans++; idx++;
		}
		idx = 1;
		while (cur.first.first + idx < N) {
			if (visited[cur.first.first + idx][cur.first.second]) break;
			q.push({ {cur.first.first + idx,cur.first.second},{cur.second.first,cur.second.second} });
			visited[cur.first.first + idx][cur.first.second] = true;
			ans++; idx++;
		}

		if (cur.second.first > 0 and cur.first.second - 1 >= 0 and !visited[cur.first.first][cur.first.second - 1]) {
			q.push({ {cur.first.first,cur.first.second - 1},{cur.second.first - 1,cur.second.second} });
			visited[cur.first.first][cur.first.second - 1] = true;
			ans++;
		}

		while (cur.second.second > 0 and cur.first.second + 1 < M and !visited[cur.first.first][cur.first.second + 1]) {
			q.push({ {cur.first.first,cur.first.second + 1},{cur.second.first,cur.second.second - 1} });
			visited[cur.first.first][cur.first.second + 1] = true;
			ans++;
		}
	}
}

void solve() {
	cin >> N >> M >> L >> R;
	for (int i = 0; i < N; ++i) {
		string s; cin >> s;
		for (int j = 0; j < M; ++j) {
			A[i][j] = s[j] - '0';
			if (A[i][j] == 2) {
				cur_x = i; cur_y = j;
			}
			else if (A[i][j] == 1) visited[i][j] = true;
		}
	}
	bfs(cur_x, cur_y, L, R);
	cout << ans;
}

int main(void) {
	fast;
	memset(visited, false, sizeof(visited));
	memset(A, 0, sizeof(A));

	solve();
}
