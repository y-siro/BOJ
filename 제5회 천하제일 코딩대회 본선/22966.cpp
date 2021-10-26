#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 22966 가장 쉬운 문제를 찾는 문제 - 구현

int N, num, dif = 5;
string str,dif_str;

int main(void) {
	fast;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> str >> num;
		if (num < dif) {
			dif_str = str;
			dif = num;
		}
	}
	cout << dif_str;
}
