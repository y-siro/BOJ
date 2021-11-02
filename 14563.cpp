#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 14563 완전수 - 수학, 정수론

int T, N;
int c(int num) {
	int ret = 0;
	for (int i = 1; i < num; ++i) {
		if (num % i == 0) {
			ret += i;
		}
	}
	return ret;
}

int main(void) {
	fast;
	cin >> T;
	while (T--) {
		cin >> N;
		if (N == c(N)) cout << "Perfect" << "\n";
		if (N > c(N)) cout << "Deficient" << "\n";
		if (N < c(N)) cout << "Abundant" << "\n";
	}
}
