#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// boj 14646 욱제는 결정장애야!! - 구현

int N, num, cnt=0, mx=0;
bool check[100001] = { false, };

int main(void) {
	fast;
	cin >> N;
	memset(check, false, sizeof(check));
	for (int i = 0; i < N * 2; ++i) {
		cin >> num;
		if (!check[num]) {
			check[num] = true;
			cnt++;
		}
		else {
			mx = max(mx, cnt);
			cnt--;
		}
	}
	cout << mx;
}
