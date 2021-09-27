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
#define pi pair<int,int>
#define pr pair<ll,ll>
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
#define F first
#define S second
#define endl "\n"

const int mod = 10007;
int N,cnt=0;
int dp[1001][10] = { 0, };

int main(void) {
	fast;

	cin >> N;
	for (int i = 0; i < 10; ++i) dp[1][i] = 1;
	for (int i = 2; i <= N; ++i) {
		for (int j = 0; j < 10; ++j) {
			if (j == 0) {
				dp[i][0] = 1;
				continue;
			}
			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]);
			dp[i][j] %= mod;
		}
	}
	for (int i = 0; i < 10; ++i) cnt += dp[N][i];

	cout << cnt%mod;
	
	return 0;
}
