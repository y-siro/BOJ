#include <iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

// 1699 제곱수의 합 - 수학, 다이나믹 프로그래밍

int N, d[111111];
void dp(int num) {
	for (int i = 1; i <= num; ++i) {
		d[i] = i;
		for (int j = 1; j * j <= i; ++j) {
			d[i] = min(d[i], d[i - j * j] + 1);
		}
	}
}

int main(void) {
	fast;
	int N; cin >> N;
	dp(N);
	cout << d[N];
}
