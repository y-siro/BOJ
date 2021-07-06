#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void) {
	int num;
	cin >> num;

	vector<int> s;
	int val;
	
	int index = -1;
	for (int i = 0; i < num; i++) {
		cin >> val;
		if (val == 0) {
			if (s.empty() == 1) {
				index = -1;
			}
			else {
				s[index] = 0;
				s.pop_back();
				index--;
			}
		}
		else {
			s.push_back(val);
			index++;
		}
	}

	int sum = 0;
	for (int j = 0; j < s.size(); j++) {
		sum += s[j];
	}

	printf("%d\n", sum);
}
