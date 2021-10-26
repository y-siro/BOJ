#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 14647 준오는 조류혐오야!! - 구현

int n, m, cnt = 0, total = 0, mx = 0,idx;
int arr[555][555];
string s;

int main(void) {
	fast;
	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> s;
			for (int l = 0; l < s.size(); ++l) {
				if (s[l] == '9') {
					cnt++; total++;
				}
			}

			arr[i][j] = cnt;
			cnt = 0;
		}
	}
	idx = 0;
	while (idx <= n) {
		for (int i = 0; i < n; ++i) {
			cnt += arr[i][idx];
		}
		mx = max(mx, cnt);
		cnt = 0; idx++;
	}
	idx = 0;
	while (idx <= m) {
		for (int i = 0; i < m; ++i) cnt += arr[idx][i];
		mx = max(mx, cnt);
		cnt = 0; idx++;
	}
	cout << total - mx;
}
