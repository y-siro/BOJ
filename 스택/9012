#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

bool check(string str) {
	stack<char> s;
	for (int i = 0; i < str.length(); i++) {
		char c = str[i];
		if (c == '(') s.push(str[i]);
		else {
			if (!s.empty()) s.pop();
			else return false;
		}
	}

	return s.empty();
}


int main(void) {
	int num;
	cin >> num;

	string str;
	for (int i = 0; i < num; i++) {
		cin >> str;
		if (check(str)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}
