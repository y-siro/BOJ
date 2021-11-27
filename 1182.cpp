#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// 1182 부분수열의 합

int N,S,cnt=0,arr[22];

void dfs(int x, int num) {
	if (x == N) return;
	if (num + arr[x] == S) cnt++;
	dfs(x + 1, num); dfs(x + 1, num + arr[x]);
}

int main(void) {
	fast;
	cin >> N >> S;
	for (int i = 0; i < N; ++i) cin >> arr[i];
	dfs(0, 0);
	cout << cnt;
}
