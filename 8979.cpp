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

// 8979 올림픽 - 구현, 정렬

ll N, K, nation,score,num,idx,cnt=1;
pair<ll, ll> p[1111];

bool cmp(pll a, pll b) {
	return a.first > b.first;
}

int main(void) {
	fast;
	cin >> N >> K;
	for (int i = 1; i <= N; ++i) {
		score = 0;
		cin >> nation;
		cin >> num; score += 1e10 * num;
		cin >> num; score += 1e6 * num;
		cin >> num; score += num;
		p[i].first = score; p[i].second = nation;
		if (nation == K) idx = score;
	}
	sort(p+1, p + N+1, cmp);
	for (int i = 1; i <= N; ++i) {
		if (p[i].first > idx) cnt++;
		if (p[i].first == idx) break;
	}
	cout << cnt;
}
