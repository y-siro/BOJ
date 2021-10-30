#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// boj 15924 욱제는 사과팬이야!! - 다이나믹 프로그래밍

const int mod = 1e9 + 9;
int N, M, ans; string s;
vector<string> v;
int d[3333][3333] = { 0, };

void dp() {
	d[N - 1][M - 1] = 1;
	for (int i = N - 1; i >= 0; --i) {
		for (int j = M - 1; j >= 0; --j) {
			if (i == N - 1 and j == M - 1) continue;

			if (v[i][j] == 'E') d[i][j] = d[i][j + 1] % mod;
			else if (v[i][j] == 'S') d[i][j] = d[i + 1][j] % mod;
			else if (v[i][j] == 'B') d[i][j] = (d[i][j + 1] % mod + d[i + 1][j] % mod) % mod;
		}
	}
}

int main(void) {
	fast;
	cin >> N >> M;
	v.resize(N);
	for(int i=0;i<N;++i) cin >> v[i];
	dp();
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			ans += d[i][j] % mod;
			ans %= mod;
		}
	}
	cout << ans;
}
