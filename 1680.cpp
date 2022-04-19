#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
const char en = '\n';

void solve() {
	int W, N; cin >> W >> N;
	vector<pair<int, int> > A(N+1);
	for (int i = 0; i < N; ++i) cin >> A[i].first >> A[i].second;

	int ans = 0, cur = 0, cur_w = 0;
	for (int i = 0; i < N; ++i) {
		cur = A[i].first;
		cur_w += A[i].second;

		if (cur_w > W) {
			ans += cur * 2;
			cur_w = A[i].second;
		}
		else if (cur_w == W) {
			ans += cur * 2;
			cur_w = 0;
		}
	}
	if(cur_w>0) ans += cur*2;
	cout << ans << '\n';
}

int main(void) {
	fast;

	int t; cin >> t;
	while (t--) {
		solve();
	}
}
