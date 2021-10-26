#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 22968 균형 - 다이나믹 프로그래밍, 이분탐색

int T, num, h, d[43];

void dp() {
	d[0] = 0; d[1] = 1; d[2] = 2;
	for (int i = 3; i < 43; ++i) {
		d[i] = d[i - 1] + d[i - 2] + 1;
	}
}
	
int main(void) {
	fast;
	dp();
	cin >> T;
	while (T--) {
		cin >> num;
		h=upper_bound(d + 1, d + 43, num)-d-1;
		cout<<h<<"\n";
	}
}
