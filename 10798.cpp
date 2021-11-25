#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// 10798 세로읽기

int mv = -1e9;
int main(void) {
	fast;
	vector<string> v;
	v.resize(5);
	for (int i = 0; i < 5; ++i) cin >> v[i];
	int s1 = v[0].size(), s2 = v[1].size(), s3 = v[2].size(), s4 = v[3].size(), s5 = v[4].size();
	mv = max(s1, max(s2, max(s3, max(s4, s5))));
	for (int i = 0; i < mv; ++i) {
		if (s1>0) cout << v[0][v[0].size() - (s1--)];
		if (s2>0) cout << v[1][v[1].size() - (s2--)];
		if (s3>0) cout << v[2][v[2].size() - (s3--)];
		if (s4>0) cout << v[3][v[3].size() - (s4--)];
		if (s5>0) cout << v[4][v[4].size() - (s5--)];
	}
}
