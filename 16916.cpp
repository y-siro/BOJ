#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// 16916 부분 문자열

int j = 0;
vector<int> v;

bool kmp(string S, string P) {
	j = 0;
	for (int i = 0; i < S.size(); ++i) {
		while (j > 0 and S[i] != P[j]) j = v[j - 1];
		if (S[i] == P[j]) {
			if (j == P.size() - 1) {
				return true; break;
			}
			else j++;
		}
	}
	return false;
}

int main(void) {
	fast;
	string S, P; cin >> S >> P;
	v.resize(S.size(),0);
	for (int i = 1; i < S.size(); ++i) {
		while (j > 0 and S[i] != S[j]) j = v[j - 1];
		if (S[i] == S[j]) {
			j++;
			v[i] = j;
		}
	}
	cout << kmp(S, P);
}
