#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define pq priority_queue
#define pii pair<int,int>
#define pll pair<ll,ll>

const int INF = 1e9 + 7;
int N, M, s, e;
vector<pii> A[1010];
int d[1010], path[1010];

void dijkstra(int start) {
	priority_queue<pii, vector<pii>, greater<>> q;
	d[start] = 0;
	q.push({ 0,start });

	while (!q.empty()) {
		auto cur = q.top(); q.pop();
		int dist = cur.first, idx = cur.second;
		if (d[idx] < dist) continue;
		for (auto nxt : A[idx]) {
			int cost = nxt.first, nidx = nxt.second;
			if (d[nidx] > dist + cost) {
				d[nidx] = dist + cost;
				q.push({ d[nidx],nidx });
				path[nidx] = idx;
			}
		}
	}
}

int main(void) {
	fast;
	cin >> N >> M;
	for (int i = 1; i <= N; ++i) d[i] = INF;
	for (int i = 0; i < M; ++i) {
		int a, b, c; cin >> a >> b >> c;
		A[a].push_back({ c,b });
	}
	cin >> s >> e;
	dijkstra(s);
	cout << d[e] << '\n';

	vector<int> ans;
	int es = e;
	while (es) {
		ans.push_back(es);
		es = path[es];
	}

	cout << ans.size() << '\n';
	for (int i = ans.size() - 1; i >= 0; --i) cout << ans[i] << ' ';
}
