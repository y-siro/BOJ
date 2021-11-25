#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// 10820 문자열 분석

int a[4];
int main(void) {
	fast;
	string s;
	while (getline(cin, s)) {
		memset(a, 0, sizeof(a));
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] >= 'a' and s[i] <= 'z') a[0]++;
			else if (s[i] >= 'A' and s[i] <= 'Z') a[1]++;
			else if (s[i] >= '0' and s[i] <= '9') a[2]++;
			else if (s[i] == ' ') a[3]++;
		}
		for (int i = 0; i < 4; ++i) {
			cout << a[i] << " ";
		}
		cout << "\n";
	}
}
