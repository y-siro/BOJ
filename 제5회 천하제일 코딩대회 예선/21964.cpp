#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 21964 선린인터넷고등학교 교가 - 문자열

int N;
string str;

int main(void) {
	fast;
	cin >> N >> str;
	for (int i = str.length() - 5; i < str.length(); ++i) cout << str[i];
}
