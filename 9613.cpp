#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// boj 9613 GCD 합 - 수학, 정수론, 유클리드 호제법

int t, n;
int arr[111];
ll ans = 0;

int gcd(int a, int b) {
	if (a % b == 0) return b;
	return gcd(b, a % b);
}

int main(void) {
	fast;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; ++i) cin >> arr[i];
		for (int i = 0; i < n; ++i) for (int j = i + 1; j < n; ++j) ans += gcd(arr[i], arr[j]);
		cout << ans << "\n";
		ans = 0;
	}
}
