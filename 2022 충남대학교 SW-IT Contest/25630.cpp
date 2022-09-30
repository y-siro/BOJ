#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int n; cin >> n;
	string s; cin >> s;

	int ans = 0;
	for (int i = 0; i < n / 2; ++i) {
		if (s[i] != s[n - i - 1]) ans++;
	}
	cout << ans << '\n';
	return 0;
}
