#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long 
#define pii pair<long, long>

int main(void) {
	fast;

	int t; cin >> t;
	cin.ignore();
	while (t--) {
		string s; getline(cin, s);
		int dep = 0;
		stack<int> st;
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == '[') {
				st.push(0);
				dep = max(dep, (int)st.size());
			}
			else st.pop();
		}
		ll ret = 1;
		for (int i = 0; i < dep; ++i) ret = ret << 1;
		cout << ret << '\n';
	}
}
