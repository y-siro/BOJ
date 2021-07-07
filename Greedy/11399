#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int num;
	cin >> num;

	vector<int> s;
	int val;
	for (int i = 0; i < num; i++) {
		cin >> val;
		s.push_back(val);
	}
	sort(s.begin(), s.end(), greater<int>());
	int sum = 0;
	for (int i = 0; i < num; i++) {
		sum += (i+1) * s[i];
	}
	cout << sum << endl;
}

	
