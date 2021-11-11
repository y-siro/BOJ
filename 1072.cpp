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

// 1072 게임 - 수학, 이분 탐색

int main(void) {
	fast;
	ll X, Y;  cin >> X >> Y;
	ll Z = (100 * Y) / X, low = 0, high = 1e9;
	if (Z >= 99) {
		cout << -1; return 0;
	}
	while (low <= high) {
		ll mid = (low + high) / 2;
		if ((mid + Y) * 100 / (mid + X) > Z) high = mid - 1;
		else low = mid + 1;
	}
	cout << low;
}
