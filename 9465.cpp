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

int t, n;
int d[2][100001] = { 0, }, score[2][100001] = { 0, };
int main(void) {
	fast;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < 2; ++i) {
			for (int j = 0; j < n; ++j) cin >> score[i][j];
		}
		d[0][0] = score[0][0];
		d[1][0] = score[1][0];
		d[0][1] = score[0][1] + d[1][0];
		d[1][1] = score[1][1] + d[0][0];
		for (int i = 2; i < n; ++i) {
			d[0][i] = score[0][i] + max(d[1][i - 1], d[1][i - 2]);
			d[1][i] = score[1][i] + max(d[0][i - 1], d[0][i - 2]);
		}
		cout << max(d[0][n - 1], d[1][n - 1]) << endl;
	}
}
				
