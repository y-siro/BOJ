#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long 
#define pii pair<long, long>

string s, t;
vector<int> A;
int cnt = 0;

bool check_prev(int N) {
	for (int i = 0; i < N; ++i) {
		if (!A[i] or A[i] <= A[N]) return false;
	}
	return true;
}

bool complete() {
	for (int i = 0; i < A.size(); ++i) {
		if (!A[i]) return false;
	}
	return true;
}

void del() {
	for (int i = 0; i < A.size(); ++i) A[i]--;
}

int main(void) {
	fast;

	cin >> s >> t;
	A.resize(t.size());
	for (int i = 0; i < s.size(); ++i) {
		for (int j = 0; j < t.size(); ++j) {
			if (s[i] == t[j]) {
				if (check_prev(j)) {
					A[j]++;
					if (complete()) {
						del(); cnt++;
					}
				}
			}
		}
	}
	cout << cnt;
}
