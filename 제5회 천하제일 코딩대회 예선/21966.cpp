#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 21966 (중략) - 문자열, 많은 조건 분기

int N,idx,cnt=0;
string str,s="";
bool res = false;
int main(void) {
	fast;
	cin >> N >> str;
	if (N <= 25) {
		cout << str;
		return 0;
	}

	for (int i = 11; i < N - 11; ++i) {
		s += str[i];
		if (str[i] == '.') cnt++;
	}

	for (int i = 0; i < s.size(); ++i) {
		if (cnt == 0) res = false;
		if (cnt == 1 and s[s.size() - 1] == '.') res = false;
		if (cnt == 1 and s[s.size() - 1] != '.') res = true;
		if (cnt > 1) res = true;	
		
	}

	if (res) {
		for (int i = 0; i < 9; ++i) cout << str[i];
		cout << "......";
		for (int i = str.size() - 10; i < str.size(); ++i) cout << str[i];
	}
	else {
		for (int i = 0; i < 11; ++i) cout << str[i];
		cout << "...";
		for (int i = str.size() - 11; i < str.size(); ++i) cout << str[i];
	}
}
