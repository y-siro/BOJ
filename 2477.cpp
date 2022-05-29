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
	int k; cin >> k;
	vii a;
	vi b[5];
	for (int i = 0; i < 6; ++i) {
		int d, c; cin >> d >> c;
		a.push_back({ d,c });
		b[d].push_back(c);
	}
	for (int i = 0; i < 6; ++i) {
		a.push_back({ a[i].first,a[i].second });
	}
	
	int row = max(b[1].front(), b[2].front()), col = max(b[3].front(), b[4].front());
	int ans = row * col;

	int ch = 0;
	for (int i = 0; i < 6; ++i) {
		if ((a[i].second == row and a[i + 1].second != col) or (a[i].second == col and a[i + 1].second != row)) {
			ch = a[i + 2].second * a[i + 3].second; break;
		}
	}

	ans -= ch;
	cout << ans * k << en;
}

int main(void) {
	fast;

	int t = 1; // cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}
