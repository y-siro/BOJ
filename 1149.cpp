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
typedef long long int ll;

// 1149 RGB 거리 - 다이나믹 프로그래밍

int N;
int d[1111][3], arr[1111][3];

void dp() {
	d[0][0] = d[0][1] = d[0][2] = 0;
	for (int i = 1; i <= N; ++i) {
		d[i][0] += min(d[i - 1][1], d[i - 1][2]);
		d[i][1] += min(d[i - 1][0], d[i - 1][2]);
		d[i][2] += min(d[i - 1][0], d[i - 1][1]);
	}
}

int main(void) {
	fast;
	cin >> N;
	for (int i = 1; i <= N; ++i) cin >> d[i][0] >> d[i][1] >> d[i][2];
	dp();
	cout << min(d[N][0], min(d[N][1], d[N][2]));
}
