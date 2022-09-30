#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) cin >> a[i];
	int ans = 1;
	vector<int> b;
	while (true) {
		sort(a.begin(), a.end());
		for (int i = 0; i < a.size()-1; ++i) {
			if (a[i] == a[i + 1]) b.push_back(a[i]);
		}
		if (b.empty()) break;
		ans += 1;
		if (b.size() == 1) break;
		a = b;
		b.clear();
	}

	cout << ans << '\n';
	return 0;
}
