#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// boj 15926 현욱은 괄호왕이야!! - 스택

int n, mx=0; string str;
stack<int> s;

int main(void) {
	fast;
	cin >> n >> str;
	s.push(-1);
	for (int i = 0; i < n; ++i) {		
		if (str[i] == '(') {
			s.push(i);
		}
		if (str[i] == ')') {
			s.pop();
			if (!s.empty()) mx = max(mx, i - s.top());
			else s.push(i);
		}		
	}
	cout << mx;
}
