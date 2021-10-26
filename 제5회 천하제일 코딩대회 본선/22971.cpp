#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 22971 증가하는 부분 수열의 개수 - 다이나믹 프로그래밍

const int mod = 998244353;
long long N, arr[5555], d[5555];

void dp(int num) {
	for (int i = 1; i <= N; ++i) d[i] = 1;
	for (int i = 1; i <= N; ++i) {
		for (int j = i - 1; j >= 1; --j) {
			if (arr[j] < arr[i]) d[i] += d[j];
		}
		d[i] %= mod;
	}
}
int main(void) {
	fast;
	cin >> N;
	for (int i = 1; i <= N; ++i) cin >> arr[i];
	dp(N);
	for (int i = 1; i <= N; ++i) cout << d[i] << " ";
}
