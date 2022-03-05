#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long 
#define pii pair<long, long>

int N;
vector<int> A[55];
bool visited[55];
int score[55];
vector<int> B, C;

void bfs(int x) {
	memset(visited, false, sizeof(visited));
	memset(score, -1, sizeof(score));

	visited[x] = true;
	score[x] = 0;
	queue<int> q;
	q.push(x);
	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		for (int i = 0; i < A[cur].size(); ++i) {
			int nx = A[cur][i];
			if (visited[nx]) continue;
			q.push(nx);
			score[nx] = score[cur] + 1;
			visited[nx] = true;
		}
	}

	int ret = 0;
	for (int i = 1; i <= N; ++i) ret = max(ret, score[i]);
	B[x] = ret;
}

int main(void) {
	fast;

	cin >> N;
	B.resize(N + 1);
	while (true) {
		int u, v; cin >> u >> v;
		if (u == -1 and v == -1) break;
		A[u].push_back(v); A[v].push_back(u);
	}

	for (int i = 1; i <= N; ++i) bfs(i);
	int ans = 1e9 + 7, cnt = 0;
	for (int i = 1; i <= N; ++i) ans = min(ans, B[i]);
	for (int i = 1; i <= N; ++i) {
		if (B[i] == ans) {
			cnt++; C.push_back(i);
		}
	}
	cout << ans << ' ' << cnt << '\n';
	for (int i = 0; i < C.size(); ++i) cout << C[i] << ' ';	
}
