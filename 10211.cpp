#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define pii pair<int,int>

int main(void) {
	fast;

	int t; cin >> t;
	while (t--) {
		int N; cin >> N;
		vector<int> A(N), pSum(N);
		for (int i = 0; i < N; ++i) {
			cin >> A[i];
			if (!i) pSum[i] = A[i];
			else pSum[i] = pSum[i - 1] + A[i];
		}

		int ret = -(1e9 + 7);
		for (int i = 0; i < N; ++i) ret = max(ret, pSum[i]);
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < i; ++j) {
				ret = max(ret, pSum[i] - pSum[j]);
			}
		}
		cout << ret << '\n';
	}
}
