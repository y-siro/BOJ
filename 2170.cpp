#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// boj 2170 선 긋기 - 정렬, 스위핑

ll N, ans = 0, idx, idy;
vector<pair<ll, ll>> v;

int main(void) {
	fast;
	cin >> N;
	v.resize(N);
	for (int i = 0; i < N; ++i) cin >> v[i].first >> v[i].second;
	sort(v.begin(), v.end());
	idx = v[0].first; idy = v[0].second;
	for (int i = 0; i < N; ++i) {
		if (v[i].first > idy) {
			ans += idy - idx;
			idx = v[i].first; idy = v[i].second;
		}
		if (v[i].second > idy) {
			idy = v[i].second;
		}

	}
	ans += idy - idx;
	cout << ans;
}
