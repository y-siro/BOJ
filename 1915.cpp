#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define pb push_back
#define mp make_pair
#define vc vector
#define vi vector<int>
#define vl vector<ll>
#define pq priority_queue<int,vector<int>,less<int>>
#define pql priority_queue<int,vector<int>,greater<int>>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
#define F first
#define S second
#define endl "\n"
typedef long long ll;

int n, m, d[1001][1001], ans=0;
string str;
int main(void) {
	fast;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> str;
		for (int j = 0; j < m; ++j) {
			d[i][j + 1] = str[j] - 48;
		}
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			if (d[i][j] != 0) {
				d[i][j] = min(min(d[i - 1][j], d[i][j - 1]), d[i - 1][j - 1]) + 1;
				ans = max(d[i][j], ans);
			}
		}
	}
	cout << pow(ans, 2);
	return 0;
}

