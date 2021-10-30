#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 15919 사자는 여행왕이야!! - 다이나믹 프로그래밍

int N, M;
int d[1111][1111];
vector<pair<int, int>> v;

int dp(int cur, int bef) {
	if (d[cur][bef] != -1) return d[cur][bef];
	if (cur == M) return d[cur][bef] = N - bef;
	if (v[cur].first <= bef) return d[cur][bef] = dp(cur+1, bef);
	return d[cur][bef] = min(dp(cur+1, bef), max(v[cur].first - bef - 1, dp(cur + 1, v[cur].second)));
}

int main(void) {
	fast;
	memset(d, -1, sizeof(d));
	cin >> N >> M;
	v.resize(M);
	for (int i = 0; i < M; ++i) cin >> v[i].first >> v[i].second;
	sort(v.begin(), v.end());
	cout << dp(0, 0);
}
