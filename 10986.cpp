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
/*
* header, define
*/

ll N,M,val,s,ans,d[1001];
int main(void) {
	fast;
	cin >> N >> M;
	for (int i = 0; i < N; ++i) {
		cin >> val;
		s += val;
		d[s % M]++;
	}
	for (int i = 0; i <= 1000; ++i) ans += d[i] * (d[i] - 1) / 2;
	cout << d[0] + ans;
	return 0;
}
