#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define vc vector
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
using ll = long long;

// boj 2021 아주대학교 프로그래밍 경시대회 APC Open Contest - A

string s, str, ms = "99999999"; int N, mx = 0, Y = 0, M = 0, D = 0;

int main(void) {

	fast;
	cin >> s >> N;
	for (int i = 0; i < N; ++i) {
		cin >> str;
		for (int j = 0; j < 4; ++j) Y += pow(s[j] - str[j], 2);
		for (int j = 4; j < 6; ++j) M += pow(s[j] - str[j], 2);
		for (int j = 6; j < 8; ++j) D += pow(s[j] - str[j], 2);
		Y *= M * D;

		if (Y>mx) {
			mx = Y;
			ms = str;
		}
		if (Y == mx) {
			if (ms > str) ms = str;
		}
		Y = 0; M = 0; D = 0;
	}
	cout << ms;
}
