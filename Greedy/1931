#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int num;
	cin >> num;

	int in, out;
	vector<pair<int, int>> list;
	for (int i = 0; i < num; i++) {
		cin >> in >> out;
		list.push_back(make_pair(out, in));
	}

	sort(list.begin(), list.end());
	int time = list[0].first;
	int cnt = 1;
	for (int i = 1; i < num; i++) {
		if (time <= list[i].second) {
			cnt++;
			time = list[i].first;
		}
	}
	cout << cnt << endl;
}
