#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 11653 소인수분해 - 수학, 정수론, 소수 판정

int N, k=2;

int main(void) {
	fast;
	cin >> N;
	while (N != 1) {
		if (N % k == 0) {
			cout << k << "\n";
			N /= k;
		}
		else k++;
	}
}
