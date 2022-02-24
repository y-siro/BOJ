#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long 
#define pii pair<long, long>

int main(void) {
	fast;

	int N; cin >> N;

	if (N == 0) {
		cout << "No"; return 0;
	}
	if (N == 1) {
		cout << "Yes" << '\n';
		cout << "0 0"; return 0;
	}
	if (N == 4) {
		cout << "Yes" << '\n';
		cout << "2 3 1 2 1 3 0 0"; return 0;
	}
	if (N == 5) {
		cout << "Yes" << '\n';
		cout << "0 0 2 3 4 2 1 3 1 4"; return 0;
	}

	if (N % 4 == 0) {
		cout << "Yes" << '\n';
		int k = N / 4;
		vector<int> A(2 * N);
		for (int i = 2 * k; i > 0; --i) {
			A[2 * k - i] = i * 2 - 1;
			A[2 * k + i] = i * 2 - 1;
		}
		A[2 * k] = A[6 * k - 1] = 4 * k - 2;
		int r = 4 * k - 4, t = 4 * k + 2;
		while (r > 2 * k - 2) {
			A[t] = r;
			A[t + r + 1] = r;
			t++; r -= 2;
		}
		if (k != 1) {
			A[4 * k + 1] = 2 * k - 2;
			A[6 * k] = 2 * k - 2;
		}
		r -= 2;
		while (r > 0) {
			A[t] = r;
			A[t + r + 1] = r;
			t++;
			r -= 2;
		}
		for (int i = 0; i < A.size(); ++i) cout << A[i] << ' ';
	}

	else if (N % 4 == 1) {
		cout << "Yes" << '\n';
		int k = N / 4;
		vector<int> A;
		for (int i = N - 1; i > 0; i -= 2) {
			A.push_back(i);
		}
		A.push_back(2 * k + 1);
		A.push_back(4 * k - 1);
		for (int i = 2; i < N; i += 2) A.push_back(i);
		A.push_back(2 * k + 1);
		for (int i = 4 * k - 3; i >= 2 * k + 3; i -= 2) A.push_back(i);
		for (int i = 2 * k - 1; i > 0; i -= 2) A.push_back(i);
		A.push_back(4 * k - 1);
		for (int i = 1; i <= 2 * k - 1; i += 2) A.push_back(i);
		A.push_back(0); A.push_back(0);
		for (int i = 2 * k + 3; i <= 4 * k - 3; i += 2) A.push_back(i);

		for (int i = 0; i < A.size(); ++i) cout << A[i] << ' ';
	}
	else cout << "No";
}
