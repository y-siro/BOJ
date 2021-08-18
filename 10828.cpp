#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void) {
	int num; // 입력할 명령 개수
	cin >> num;

	vector<int> s;
	string set; // 명령어
	int index = -1;
	int val; // 명령 대기값
	for (int i = 0; i < num; i++) {
		cin >> set;
		if (set == "push") {
			cin >> val;
			s.push_back(val);
			index++;

		}
		else if (set == "top") {
			if (s.empty() == 1) cout << index << "\n";
			else cout << s[index] << "\n";
		}

		else if (set == "pop") {
			if(index==-1) cout << index << "\n";
			else {
				cout << s[index] << "\n";
				s.pop_back();
				index--;
			}			
		}
		else if(set=="size") cout << index + 1 << "\n";
		else if (set == "empty") {
			if (index == -1) cout << "1" << "\n";
			else cout << "0" << "\n";
		}
		else cout << "잘못된 입력입니다." << "\n";
	}
}
