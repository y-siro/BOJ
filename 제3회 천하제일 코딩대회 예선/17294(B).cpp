#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// boj 17294 귀여운 수~ε٩(๑> ₃ <)۶з - 수학, 구현

int k;
string s;

int main(void) {
	fast;
	cin >> s;
	if (s.size() == 1 or s.size() == 2) {
		cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";
		return 0;
	}
	k = (int)s[1] - (int)s[0];
	for (int i = 1; i < s.size() - 1; ++i) {
		if (((int)s[i+1] - (int)s[i]) != k) {
			cout << "흥칫뿡!! <(￣ ﹌ ￣)>";
			return 0;
		}
	}
	cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";
	return 0;
}
