#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 21965 드높은 남산 위에 우뚝 선 - 구현

int N, num, pre;
bool c = false;

int main(void) {
	fast;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> num;
		if (num == pre) {
			cout << "NO";
			return 0;
		}
		
		if (num < pre) c = true;
		if (num > pre and c) {
			cout << "NO";
			return 0;
		}

		pre = num;

	}

	cout << "YES";
	return 0;
}
