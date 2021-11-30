#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

// 11722 가장 긴 감소하는 부분 수열 - 다이나믹 프로그래밍

int N, mv = 0;
vector<int> v, d;

void dp(int num) {
	for (int i = 1; i <= num; ++i) {
		d[i] = 1;
		for (int j = 1; j < i; ++j) {
			if (v[i] < v[j] and d[i] < d[j] + 1) d[i] = d[j] + 1;
		}
		mv = max(mv, d[i]);
	}
}

int main(void) {
	fast;
	int N; cin >> N;
	 v.resize(N + 1); d.resize(N + 1);
	for (int i = 1; i <= N; ++i) cin >> v[i];
	dp(N);
	cout << mv;
}
