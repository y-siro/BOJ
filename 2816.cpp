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

// 2816 디지털 티비 - 구성적

int N,idx;
string ans, arr[111];

int main(void) {
	fast;
	cin >> N;
	for (int i = 1; i <= N; ++i) cin >> arr[i];
	for (idx = 1; arr[idx] != "KBS1"; ++idx) ans += '1';
	for (; idx > 1; --idx) {
		swap(arr[idx], arr[idx - 1]); ans += '4';
	}

	for (idx = 1; arr[idx] != "KBS2"; ++idx) ans += '1';
	for (; idx > 2; --idx) {
		swap(arr[idx], arr[idx - 1]); ans += '4';
	}
	cout << ans;
}
