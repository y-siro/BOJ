#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// boj 17297 Messi Gimossi - 수학, 다이나믹 프로그래밍, 분할 정복

int M; string s = "Messi Gimossi";
ll d[40];
void dp() {
	d[1] = 5;
	d[2] = 13;
	for (int i = 3; i < 40; ++i) {
		d[i] = d[i - 1] + d[i - 2] + 1;
	}
}

int main(void) {
	fast;
	cin >> M;
	M--;
	dp();
	for (int i = 39; i >= 2; --i) {
		if (d[i] <= M) M -= d[i] + 1;
	}
	if (M == -1 or M == 5) cout << "Messi Messi Gimossi";
	else cout << s[M];
}
