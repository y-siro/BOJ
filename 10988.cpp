#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// 10988 팰린드롬인지 확인하기

int main(void) {
	fast;
	string s; cin >> s;
	bool check = true;
	for (int i = 0; i < s.size() / 2; ++i) {
		if (s[i] != s[s.size() - 1 - i]) check = false;
	}
	cout << (check ? 1 : 0);
}
