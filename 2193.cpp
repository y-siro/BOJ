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

const int M = 91;
ll N, d[M] = { 0, };
int main(void) {
	fast;

	cin >> N;
	d[1] = 1;
	d[2] = 1;
	for (ll i = 3; i <= N; ++i) d[i] = d[i - 1] + d[i - 2];
	if (N == 1) cout << d[1];
	else if (N == 2) cout << d[2];
	else cout << d[N];

	return 0;
}
