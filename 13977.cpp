#include <bits/stdc++.h>
using namespace std;
#define ll long long

const long long mod = (long long)1e9 + 7;
const int M = (int)4000000;
ll f[M + 1], fi[M + 1];
int m, n, k;

ll mpow(ll x, ll y) {
	ll ret = 1, p = x;
	while (y) {
		if (y % 2) ret = (ret * p) % mod;
		p = p * p % mod;
		y /= 2;
	}
	return ret;
}

void init() {
	f[0] = 1;
	for (int i = 1; i <= M; ++i) f[i] = f[i - 1] * i % mod;
	fi[M] = mpow(f[M], mod - 2);
	for (int i = M - 1; i >= 0; --i) fi[i] = fi[i + 1] * (i + 1) % mod;
}

void input() {
	cin >> m;
	while (m--) {
		cin >> n >> k;
		cout << ((f[n] * fi[k]) % mod) * fi[n - k] % mod << '\n';
	}
}

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);

	init();
	input();
}
