#include <iostream>
#include <string>
using namespace std;

bool p[1010];

void init() {
	for (int i = 0; i < 1010; ++i) p[i] = true;
}

void seive() {
	p[1] = false;
	for (int i = 2; i <= 1000; ++i) {
		if (p[i]) {
			for (int j = i + i; j <= 1000; j += i) {
				p[j] = false;
			}
		}
	}
}

int main(void) {
	init();
	seive();
	int a, b; cin >> a >> b;
	int c, d; cin >> c >> d;

	int x = 0, y = 0, z = 0;
	for (int i = a; i <= b; ++i) {
		if (p[i]) x++;
	}
	for (int i = c; i <= d; ++i) {
		if (p[i]) y++;
	}
	for (int i = max(a, c); i <= min(b, d); ++i) {
		if (p[i]) z++;
	}

	if (z % 2 == 1) y--;
	if (x > y) cout << "yt" << '\n';
	else cout << "yj" << '\n';

	return 0;
}
