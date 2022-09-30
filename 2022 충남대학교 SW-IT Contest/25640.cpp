#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string a; cin >> a;
	int n; cin >> n;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		string s; cin >> s;
		if (a == s) ans += 1;
	}

	cout << ans << '\n';
	return 0;
}
