#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int a, b; cin >> a >> b;
	while (true) {
		b += a;
		if (b >= 5) {
			cout << "yt";
			return 0;
		}
		a += b;
		if (a >= 5) {
			cout << "yj";
			return 0;
		}
	}
}
