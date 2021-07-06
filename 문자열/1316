#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	int num;
	cin >> num;

	string str;
	int cnt = 0;
	for (int i = 0; i < num; i++) {
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			if (str.length() == 1) {
				cnt++;
				break;
			}
			else {
				if (str[j] != str[j + 1]) {
					if (str.find(str[j], j + 1) != -1) break;
				}				
			}			
			if(j==str.length()-1) cnt++;
		}
		
		
			
	}
	cout << cnt << endl;
}
			
