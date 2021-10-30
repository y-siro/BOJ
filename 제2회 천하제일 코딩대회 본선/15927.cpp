#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// boj 15927 회문은 회문아니야!! - 문자열, 애드혹

string s;
bool isPL(string str) {
	for (int i = 0; i < str.length()/2; ++i) {
		if (str[i] != str[str.length() - 1 - i]) return false;
	}
	return true;
}

int main(void) {
	fast;
	cin >> s;
	if (!isPL(s)) {
		cout << s.length();
		return 0;
	}
	else s.pop_back();
	
	if (!isPL(s)) {
		cout << s.length();
		return 0;
	}
	else cout << -1;
}
