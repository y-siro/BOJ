#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long 
#define pii pair<long, long>

int N; ll ret = 0;
ll cost[5050][5050];
vector<int> A[5050];
bool visited[5050];

void dfs(int x, ll d) {
	visited[x] = true;
	ret = max(ret, d);
	for (int i = 0; i < A[x].size(); ++i) {
		int nx = A[x][i];
		if (visited[nx]) continue;
		ll res = d + cost[x][nx];
		dfs(nx, res);
	}
}

int main(void) {
	fast;
	memset(visited, false, sizeof(visited));

	cin >> N;
	for (int i = 0; i < N - 1; ++i) {
		int a, b; ll c; cin >> a >> b >> c;
		A[a].push_back(b); A[b].push_back(a);
		cost[a][b] = c; cost[b][a] = c;
	}
	dfs(1, 0);
	cout << ret;
}
