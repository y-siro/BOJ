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

int N, d[1001], p[1001];
int main(void) {
	fast;
	cin >> N;
	for (int i = 1; i <= N; ++i) cin >> p[i];

	d[1] = p[1];
	for (int i = 1; i <= N; ++i) {
		for (int j = 1; j <= i; ++j) d[i] = max(d[i], d[i - j] + p[j]);
	}
	  
	cout << d[N];
	return 0;
}

		
