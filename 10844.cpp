#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
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

const int mod = 1000000000;
int N, sum=0, d[101][10] = { 0, };
int main(void) {
	fast;

	cin >> N;
	for (int i = 0; i < 10; ++i) d[1][i] = 1;
	for (int i = 2; i <= N; ++i) {
		for (int j = 0; j < 10; ++j) {
			if (j == 0) d[i][0] = d[i - 1][j + 1];
			else if (j == 9) d[i][9] = d[i - 1][8];
			else d[i][j] = (d[i - 1][j - 1] + d[i - 1][j + 1])%mod;
		}
	}

	for (int i = 1; i < 10; ++i)  sum = (sum + d[N][i]) % mod;
	cout << sum % mod;
	return 0;
}
