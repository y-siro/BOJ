#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 21967 세워라 반석 위에 - 브루트포스 알고리즘

int N, arr[1111111],  cnt = 0, dif=0;

int main(void) {
	fast;
	cin >> N;
	for (int i = 1; i <= N; ++i) cin >> arr[i];
	for (int i = 1; i <= 8; ++i) {
		for (int j = 1; j <= N; ++j) {
			if (i <= arr[j] and i + 2 >= arr[j]) {
				cnt++;
				dif = max(dif, cnt);
			}
			else cnt = 0;
		}
		cnt = 0;
	}
	cout << dif;
}
