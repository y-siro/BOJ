#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// 11655 ROT13

int main(void) {
	fast;
	string s; getline(cin, s);
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] >= 'A' and s[i] <= 'Z') cout << char('A' + (s[i] - 'A' + 13) % 26);
		else if (s[i] >= 'a' and s[i] <= 'z') cout << char('a' + (s[i] - 'a' + 13) % 26);
		else if (s[i] == ' ') cout << ' ';
		else cout << s[i];
	}
}
