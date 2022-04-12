#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long

int V, E;
int par[10101];
ll ans = 0;

struct Edge {
	int u, v, w;
	Edge(int u, int v, int w) {
		this->u = u; this->v = v; this->w = w;
	}
};

void init() {
	for (int i = 1; i <= V; ++i) par[i] = i;
}

int find(int x) {
	if (x==par[x]) return x;
	return par[x] = find(par[x]);
}

void Union(int x, int y) {
	x = find(x); y = find(y);
	par[y] = x;
}

bool cmp(const Edge& a, const Edge& b) {
	return a.w < b.w;
}

int main(void) {
	fast;

	cin >> V >> E;
	vector<Edge> A;
	init();
	for (int i = 0; i < E; ++i) {
		int u, v, w; cin >> u >> v >> w;
		A.push_back(Edge(u, v, w));
	}
	sort(A.begin(), A.end(), cmp);
	for (auto n : A) {
		if (find(n.v) != find(n.u)) {
			Union(n.u, n.v);
			ans += n.w;
		}
	}
	cout << ans;
}
