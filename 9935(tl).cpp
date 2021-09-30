#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

string str, ban;
int main(void) {
	fast;

	cin >> str >> ban;		
	while (str.find(ban) != string::npos) {
		str.erase(str.find(ban), ban.length());
	}
	
	if (str.empty()) {
		cout << "FRULA";
		return 0;
	}	
	cout << str;
	return 0;
}
	
