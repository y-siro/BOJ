#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>

// 23742 Player-based Team Distribution 

ll N, ans = 0, cnt = 0, idx=-1, am = 0, ap = 0;
vi v;

int main(void) {
	fast;
	cin >> N;
	v.resize(N);
	for (int i = 0; i < N; ++i) cin >> v[i];
	sort(v.begin(), v.end());
	for (int i = 0; i < N; ++i) {
		if (v[i] < 0) am += v[i];
		if (v[i] >= 0 and idx == -1) idx = i;
		if (v[i] >= 0) ap += v[i];
	}
	ans = am + (N - idx) * ap;
	for (int i = idx - 1; i >= 0; --i) {
		am -= v[i]; ap += v[i];
		ans = max(ans, am + (N - i) * ap);
	}

	cout << ans;
}
