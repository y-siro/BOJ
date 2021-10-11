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

int t, s_m, s_d, e_m, e_d, cnt=0, s = 59, e = 60, max_val = 0, max_idx = 0;
int mon[] = { 0,31,59,90,120,151,181,212,243,273,304,334 };
vector<pair<int, int>> v;

int main(void) {
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> s_m >> s_d>>e_m>>e_d;
		s_d += mon[s_m - 1];
		if (s_d < 60) s_d = 60;
		e_d += mon[e_m - 1];
		if (e_d > 334) e_d = 335;
		v.pb(mp(s_d, e_d));
	}
	sort(all(v));
	for (int i = 0; i < t; ++i) {
		if (v[i].first > s && v[i].first <= e) {
			if (max_val < v[i].second) {
				max_val = v[i].second;
				max_idx = i;
			}
			if (v[i].second == 335) {
				++cnt;
				e = max_val;
				break;
			}
			continue;
		}
		else {
			if (e >= max_val) break;
			++cnt;
			s = e;
			e = max_val;
			--i;
		}
	}

	if (e == 335) cout << cnt << endl;
	else cout << "0" << endl;

	return 0;
}
