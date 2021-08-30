#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
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

int n, idx;
int d[100001], dp[100001];
int main(void) {
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> d[i];
	dp[0] = d[0];
	idx = d[0];
	for (int i = 1; i < n; ++i) {
		dp[i] = max(dp[i - 1] + d[i], d[i]);
		idx = max(idx, dp[i]);
	}

	cout << idx;
	return 0;
}
