#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str;
	cin >> str;
	int cnt = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'c') {
			if (str[i + 1] == '=') cnt--;
			else if (str[i + 1] == '-') cnt--;
		}
		else if (str[i] == 'd') {
			if (str[i + 1] == '-') cnt--;
			else if (str[i + 1] == 'z') {
				if (str[i + 2] == '=') cnt--;
			}
		}
		else if (str[i] == 'l') {
			if (str[i + 1] == 'j') cnt--;
		}
		else if (str[i] == 'n') {
			if (str[i + 1] == 'j') cnt--;
		}
		else if (str[i] == 's') {
			if (str[i + 1] == '=') cnt--;
		}
		else if (str[i] == 'z') {
			if (str[i + 1] == '=') cnt--;
		}

		cnt++;
	}

	cout << cnt << endl;




	return 0;
}
