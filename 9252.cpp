#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

string a, b, d[1010][1010];

int main(void) {
	fast;

	cin >> a >> b;	
	for (int i = 1; i <= a.size(); ++i) {
		for (int j = 1; j <= b.size(); ++j) {
			if (a[i - 1] == b[j-1]) d[i][j] = d[i - 1][j - 1] + a[i - 1];
			else {
				if (d[i - 1][j].size() >= d[i][j - 1].size()) d[i][j] = d[i - 1][j];
				else d[i][j] = d[i][j - 1];
			}
		}
	}

	cout << d[a.size()][b.size()].size() << '\n';
	cout << d[a.size()][b.size()];
}
