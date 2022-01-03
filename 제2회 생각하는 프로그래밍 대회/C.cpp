#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>

int N;
char arr[1234][1234];

void rf(int s, int x, int y) {
	if (s == 1) {
		arr[x][y] = '*'; return;
	}
	int ns = s / 2;
	rf(ns, x, y);
	rf(ns, x + ns, y);
	rf(ns, x, y + ns);
}

int main(void) {
	fast;
	cin >> N;
	int a = 1 << N;
	for (int i = 0; i < a; ++i) {
		for (int j = 0; j < a; ++j) {
			arr[i][j] = ' ';
		}
	}

	rf(a, 0, 0);
	for (int i = 0; i < a; ++i) {
		for (int j = 0; j < a-i; ++j) {
			cout << arr[i][j];
		}
		cout << "\n";
	}
}
