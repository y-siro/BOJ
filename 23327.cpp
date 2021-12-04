#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define vc vector
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
using ll = long long;

// 23327 리그전 오브 레전드 - 수학, 누적 합

ll N, Q;
vc<ll> v, s; // v:prefix val sum, s:prefix Popularity sum

int main(void) {
	fast;
	cin >> N >> Q;
	v.resize(N + 1, 0); s.resize(N + 1, 0);
	for (int i = 1; i <= N; ++i) {
		ll num; cin >> num;
		if (i == 1) v[i] = num;
		if (i != 1) {
			v[i] = v[i - 1] + num;
			s[i] = s[i - 1] + num * v[i - 1];
		}
	}	
	
	while (Q--) {
		int a, b; cin >> a >> b;
		if (a == 1) cout << s[b] << "\n";
		else cout << s[b] -(v[b]-v[a-1])*v[a-1] - s[a - 1] << "\n";
	}
}
