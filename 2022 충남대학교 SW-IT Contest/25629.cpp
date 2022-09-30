#include <iostream>
using namespace std;

int main(void) {
	int n; cin >> n;
	int x = 0, y = 0;
	for (int i = 0; i < n; ++i) {
		int num;  cin >> num;
		if (num % 2 == 1) x++;
		else y++;
	}

	if (n % 2 == 1 && y == x - 1) {
		cout << 1 << '\n'; return 0;
	}

	if (n % 2 == 0 && x == y) {
		cout << 1 << '\n'; return 0;
	}

	cout << 0 << '\n';
	return 0;
}
