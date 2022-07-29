#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
const char en = '\n';
const int INF = (int)1e9 + 7;
const int mod = (int)1e9 + 7;

bool cmp(pair<ll, ll> a, pair<ll, ll> b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

int main(void) {
	fast;

	int m, n; cin >> m >> n;
	vector<pair<ll, ll>> a(n);
	for (int i = 0; i < n; ++i) cin >> a[i].first;
	for (int i = 0; i < n; ++i) cin >> a[i].second;

	if (m == n) {
		for (int i = 0; i < n; ++i) {
			if (a[i].first != a[i].second) {
				cout << -1 << en; return 0;
			}
		}
		cout << 0 << en; return 0;
	}

	sort(a.begin(), a.end(), cmp);
	for (int i = 0; i < n - 1; ++i) {
		if (a[i].second == a[i + 1].second) {
			cout << -1 << en; return 0;
		}
	}

	ll ans = 0, cnt = 0;

	for (int i = 0; i < n - 1; ++i) {
		if (a[i].first > a[i + 1].first) {
			double ce = ceil(((double)a[i].first - (double)a[i + 1].first) / (double)m)*(double)m;
			a[i + 1].first += ce;
		}
	}

	for (int i = 0; i < n; ++i) {		
		if (a[i].first+(cnt*m) < a[i].second) {
			cnt += 1;
		}
	}

	for (int i = 0; i < n; ++i) a[i].first += cnt * m;

	if (a.front().first + m <= a.back().first) {
		cout << -1 << en; return 0;
	}
	for (int i = 0; i < n; ++i) ans += a[i].first - a[i].second;
	cout << ans << en;

	return 0;
}
