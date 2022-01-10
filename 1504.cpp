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
int N, M;
vector<pii> A[808];
int d[808];

void init(int N) {
	for (int i = 0; i <= N; ++i) d[i] = INF;
}

void dijkstra(int start) {
	init(N);
	priority_queue<pii, vector<pii>, greater<pii> > q;
	d[start] = 0;
	q.push({ d[start],start });

	while (!q.empty()) {
		auto cur = q.top(); q.pop();
		int dist = cur.first, idx = cur.second;
		if (d[idx] != dist) continue;
		for (auto nxt : A[idx]) {
			int cost = nxt.first, nidx = nxt.second;
			if (d[nidx] > dist + cost) {
				d[nidx] = dist + cost;
				q.push({ d[nidx], nidx });
			}
		}
	}
}

int main(void) {
	fast;
	cin >> N >> M;
	for (int i = 0; i < M; ++i) {
		int a, b, c; cin >> a >> b >> c;
		A[a].push_back({ c,b });
		A[b].push_back({ c,a });
	}
	int c1, c2; cin >> c1 >> c2;
	dijkstra(1);
	int sToc1 = d[c1];
	int sToc2 = d[c2];

	dijkstra(c1);
	int c1Toc2 = d[c2];
	int c1ToN = d[N];

	dijkstra(c2);
	int c2ToN = d[N];
	
	int ans = INF;
	ans = min(ans, sToc1 + c1Toc2 + c2ToN);
	ans = min(ans, sToc2 + c1Toc2 + c1ToN);
	if (c1Toc2 == INF or ans == INF) cout << -1;
	else cout << ans;
}
