#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vii vector<pair<int,int>>
#define vll vector<ll>
#define vs vector<string>
#define pq priority_queue<int,vector<int>,less<int>>
#define pql priority_queue<int,vector<int>,greater<int>>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
const char en = '\n';
const int mod = (int)1e9 + 7;
const int INF = (int)1e9 + 7;

void solve() {
	int n, m; cin >> n >> m;
	map<int, int> a, b;
	vi aa(n), bb(m);
	for (int i = 0; i < n; ++i) {
		int x; cin >> x;
		a[x] += 1;
		aa[i] = x;
	}
	for (int i = 0; i < m; ++i) {
		int x; cin >> x;
		b[x] += 1;
		bb[i] = x;
	}

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (b.find(aa[i]) == b.end()) ans += 1;
	}
	for (int i = 0; i < m; ++i) {
		if (a.find(bb[i]) == a.end()) ans += 1;
	}

	cout << ans << en;
}

int main(void) {
	fast;

	int t = 1; // cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}
