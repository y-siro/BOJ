#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
const char en = '\n';
const int INF = (int)1e9 + 7;
const int mod = (int)1e9 + 7;

int N, K;

ll bs(int s, int e) {
	if (s >= e) return s;
	ll mid = (s + e) / 2;
	if (mid*(mid + 1)*K >= 2 * N) return bs(s, mid);
	else return bs(mid + 1, e);
}

int main(void) {
	fast;

	int tt = 1; cin >> tt;
	while (tt--) {
		cin >> N >> K;
		ll pos = 0, sum = 0;
		ll idx = bs(0, 10000);
		sum = idx * (idx + 1) / 2;
		if (idx % 2 != 0) {
			pos = K * ((idx / 2) + 1);
			pos += (N - 1) - (sum*K);
			cout << pos << ' ' << 'R' << en;
		}
		else {
			pos = (-1*K) * (idx / 2);
			pos -= (N - 1) - (sum*K);
			cout << pos << ' ' << 'L' << en;
		}
	}

	return 0;
}
