#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// Goricon A

int main(void) {
	fast;
	string s; cin >> s;
	if (s.size() < 5) {
		cout << "not cute"; return 0;
	}
	if (s[s.size() - 1] != 'p') {
		cout << "not cute"; return 0;
	}
	if (s[s.size() - 2] != 'i') {
		cout << "not cute"; return 0;
	}
	if (s[s.size() - 3] != 'i') {
		cout << "not cute"; return 0;
	}
	if (s[s.size() - 4] != 'r') {
		cout << "not cute"; return 0;
	}
	if (s[s.size() - 5] != 'd') {
		cout << "not cute"; return 0;
	}
	cout << "cute";
}
