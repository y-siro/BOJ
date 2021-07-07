#include <iostream>
using namespace std;

int main(void) {
	int num;
	cin >> num;

	int cnt = 1;
	while (num > cnt) {
		num -= cnt;
		cnt++;
	}

	if (cnt % 2 == 1) cout << cnt + 1 - num << '/' << num << endl;
	else cout << num << '/' << cnt + 1 - num << endl;
	return 0;
}
