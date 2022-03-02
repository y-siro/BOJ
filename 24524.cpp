#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long 
#define pii pair<long, long>

string s, t;
vector<pair<char, int>> A;
int cnt = 0;

bool check_prev(int N) {
	for (int i = 0; i < N; ++i) {
		if (!A[i].second or A[i].second <= A[N].second) return false;
	}
	return true;
}

bool complete() {
	for (int i = 0; i < A.size(); ++i) {
		if (!A[i].second) return false;
	}
	return true;
}

void del() {
	for (int i = 0; i < A.size(); ++i) A[i].second--;
}

int main(void) {
	fast;

	cin >> s >> t;

	for (int i = 0; i < t.size(); ++i)	A.push_back({ t[i],0 });

	for (int i = 0; i < s.size(); ++i) {
		for (int j = 0; j < t.size(); ++j) {
			if (s[i] == t[j]) {
				if (check_prev(j)) {
					A[j].second++;
					if (complete()) {
						del(); cnt++;
					}
				}
			}
		}
	}
	cout << cnt;
}
