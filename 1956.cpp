#include <bits/stdc++.h>
using namespace std;
const int INF = (int)1e9 + 7;

int main(void) {
	int n, m;
	cin >> n >> m;

	int a[404][404];
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			a[i][j] = INF;
		}
	}

	for (int i = 0; i < m; ++i) {
		int u, v, c;
		cin >> u >> v >> c;
		a[u][v] = c;
	}

	for (int k = 1; k <= n; ++k) {
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= n; ++j) {
				if (a[i][j] > a[i][k] + a[k][j]) a[i][j] = a[i][k] + a[k][j];
			}
		}
	}

	int ans = (int)1e9 + 7;
	for (int i = 1; i <= n; ++i) ans = min(ans, a[i][i]);

	if (ans == INF) cout << -1;
	else cout << ans << '\n';

	return 0;
}
