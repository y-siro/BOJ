#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 22970 문제 재탕 - 구현, 브루트포스 알고리즘

int N, arr[5555], cnt=1, ret=0;
bool down;
int main(void) {
	fast;
	cin >> N;
	for (int i = 0; i < N; ++i) cin >> arr[i];
	for (int i = 1; i < N; ++i) {
		if (arr[i - 1] == arr[i]) {
			ret = max(ret, cnt);
			cnt = 1;
		}
		else if (arr[i - 1] < arr[i] and down) {
			ret = max(ret, cnt);
			cnt = 2;
			down = false;
		}
		else if (arr[i - 1] > arr[i]) {
			down = true;
			cnt++;
		}
		else cnt++;
	}
	ret = max(ret, cnt);
	cout << ret;
}
