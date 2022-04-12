#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long

int N;
int par[101010];
double ans = 0;

struct Edge {
	int u, v;
	double w;
	Edge(int u, int v, double w) {
		this->u = u; this->v = v; this->w = w;
	}
};

void init() {
	for (int i = 1; i <= N; ++i) par[i] = i;
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

double F(double x1, double y1, double x2, double y2) {
	return (double)sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main(void) {
	fast;

	cin >> N;
	init();
	vector<pair<double, double>> stars(N);
	for (int i = 0; i < N; ++i) cin >> stars[i].first >> stars[i].second;

	vector<Edge> A;
	for (int i = 0; i < N; ++i) {
		for (int j = i + 1; j < N; ++j) {
			double w = F(stars[i].first, stars[i].second, stars[j].first, stars[j].second);
			A.push_back({ i,j,w });
		}
	}

	sort(A.begin(), A.end(), cmp);
	for (int i = 0; i < A.size(); ++i) {
		int x = A[i].u, y = A[i].v;
		double w = A[i].w;
		if (find(x) != find(y)) {
			Union(x, y);
			ans += w;
		}
	}
	cout.precision(3);
	cout << ans;
}
