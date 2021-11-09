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

// 10610 30 - 수학, 문자열, 정렬, 정수론

int cnt=0;
vi v;

int main(void) {
	fast;
	string s; cin >> s;
	for (int i = 0; i < s.size(); ++i) {
		v.pb(s[i] - '0');
	}
	sort(v.begin(), v.end(), greater<int>());
	if (v.back() != 0) {
		cout << -1; return 0;
	}
	for (int i = 0; i < v.size() - 1; ++i) cnt += v[i];
	if (cnt % 3 == 0) {
		for (auto i : v) cout << i;
	}
	else cout << -1;
}
