#include <iostream>
using namespace std;

int main(void) {
	long long num;
	cin >> num;

	long long sum = 0;
	int i = 1,cnt=0;
	while (true) {
		sum += i;
		cnt++;

		if (sum>num) {
			cnt--;
			break;
		}
		i++;
	}

	cout << cnt << "\n";

	return 0;
}
