#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
const char en = '\n';
const int INF = (int)1e9 + 7;
const int mod = (int)1e9 + 7;

int main(void) {
	fast;

	int n; cin >> n;
	vector<int> a(21, 0);
	for (int i = 0; i < n; ++i) {
		int num; cin >> num;
		bitset<20>bit(num);
		string s = bit.to_string();
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == '1') a[i] += 1;
		}
	}

	int ans = 0, check = -1;
	for (int i = 0; i < a.size(); ++i) {
		ans = max(ans, a[i]);
	}

	cout << ans << en;

	return 0;
}
