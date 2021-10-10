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
typedef long long int ll;

const int mod = 1000000007;
int n, k;
ll f(int a, int b) {
	ll nn = 1;
	for (int i = a; i <= b; ++i) nn = nn * i % mod;

	return nn;
}
ll p(int a, int b) {
	if (b == 1) return a % mod;
	ll nn = p(a, b / 2);
	return b % 2 ? (nn *nn % mod) * a % mod : nn * nn % mod;
}
int main(void) {
	fast;
	cin >> n >> k;
	cout << f(n - k + 1, n) * p(f(1, k), mod - 2) % mod;
	return 0;
}
