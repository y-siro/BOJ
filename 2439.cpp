#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

int n;
int main(void) {
	fast;
	cin >> n;
	vector<int> ans(n);
	stack<pair<int, int>> s;

	for (int i = 1; i <= n; ++i) {
		cin >> ans[i];
		if (s.empty()) {
			s.push(make_pair(ans[i], i));
			cout << "0" << " ";
		}
		else {
			while (!s.empty()) {
				if (s.top().first > ans[i]) {
					cout << s.top().second << " ";
					break;
				}
				else s.pop();
			}

			if (s.empty()) cout << "0" << " ";
			s.push(make_pair(ans[i], i));
		}
	}

	return 0;
}
