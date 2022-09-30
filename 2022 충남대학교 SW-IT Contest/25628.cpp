#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int a, b; cin >> a >> b;
	if (a >= b * 2) cout << b;
	else cout << a / 2;
	return 0;
}
