/* header orbit */
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define endl "\n"
/* header orbit */

/* Bottom up */
int t, n;
int d0[41], d1[41];

int dp0(int num) {
	for (int i = 2; i <= num; ++i) {
		d0[i] = d0[i - 1] + d0[i - 2];
	}
	return d0[num];
}
int dp1(int num) {
	for (int i = 2; i <= num; ++i) {
		d1[i] = d1[i - 1] + d1[i - 2];
	}
	return d1[num];
}

int main(void) {
	fast;

	cin >> t;
	d0[0] = 1; d1[0] = 0;
	d0[1] = 0; d1[1] = 1;

	while (t--) {
		cin >> n;
		dp0(n); dp1(n);
		cout << d0[n] << " " << d1[n] << endl;
	}

	return 0;
}
/* Bottom up */

/* c form */
int t, n;
int d[41];

void dp() {
	for (int i = 2; i <= 40; ++i) d[i] = d[i - 1] + d[i - 2];
}

int main(void) {
	fast;

	cin >> t;
	d[0] = 0; d[1] = 1;
	dp();
	while (t--) {
		cin >> n;
		if (n == 0) cout << "1 0" << endl;
		else cout << d[n-1] << " " << d[n] << endl;
	}

	return 0;
}
/* c form */
