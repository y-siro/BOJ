#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// 23560 약

int N,sum=0;
vector<vector<int>> v(3, vector<int>(3, 0));

int main(void) {
	fast;
	cin >> N;
	v[0][0] = 1;
	for (int i = 1; i < 3 * N; ++i) {
		vector<vector<int>> nv(3, vector<int>(3, 0));
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 3; ++k) {
				if ((i % 3 == 2) == (j == 1)) nv[(j + 1) % 3][k] += v[j][k];
				if ((i % 3 == 2) == (k == 1)) nv[j][(k + 1) % 3] += v[j][k];
			}
		}
		v = nv;
	}
	for (int i = 0; i < v.size(); ++i) {
		for (int j = 0; j < v[i].size(); ++j) {
			sum += v[i][j];
		}
	}
	cout << sum;
}
