#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> a;

bool check(int x) {
	string b = a[x], c = a[x + 1];
	for (int i = 1; i <= m; ++i) {
		string c1 = "", c2 = "";
		string t1 = b, t2 = c;
		int cc1 = i, cc2 = i;
		while (cc1--) {
			c1 += t1.front();
			reverse(t1.begin(), t1.end());
			t1.pop_back();
			reverse(t1.begin(), t1.end());
		}
		while (cc2--) {
			c2 += t2.back();
			t2.pop_back();
		}
		reverse(c2.begin(), c2.end());

		if (c1 == c2) return true;
	}
	for (int i = 1; i < m; ++i) {
		string c1 = "", c2 = "";
		string t1 = b, t2 = c;
		int cc1 = i, cc2 = i;
		while (cc1--) {
			c1 += t1.back();
			t1.pop_back();
		}
		reverse(c1.begin(), c1.end());
		while (cc2--) {
			c2 += t2.front();
			reverse(t2.begin(), t2.end());
			t2.pop_back();
			reverse(t2.begin(), t2.end());
		}
		if (c1 == c2) return true;
	}		
	return false;
}

int main(void) {
	cin >> n >> m;
	a.resize(n);
	for (int i = 0; i < n; ++i) cin >> a[i];
	for (int i = 0; i < n - 1; ++i) {
		if (!check(i)) {
			cout << 0 << '\n'; return 0;
		}
	}
	cout << 1 << '\n';
	return 0;
}
