#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// 1676 팩토리얼 0의 개수 - 수학

int N, cnt = 0, idx, d[555];
int main(void) {
	fast;
	cin >> N;
	for (int i = 1; i <= N; ++i) {
		cnt = 0; idx = i;
		while (true) {
			if (idx % 5 == 0) {
				cnt++; idx /= 5;
			}
			else break;
		}
		d[i] = cnt;
	}
	int ans = 0;
	for (int i = 1; i <= N; ++i) ans += d[i];
	cout << ans;
}
