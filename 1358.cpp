#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vii vector<pair<int,int>>
#define vll vector<ll>
#define vs vector<string>
#define pq priority_queue<int,vector<int>,less<int>>
#define pql priority_queue<int,vector<int>,greater<int>>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
const char en = '\n';
const int mod = (int)1e9 + 7;
const int INF = (int)1e9 + 7;

double W, H, X, Y;
int p, ans = 0;

bool check_1(double x, double y) {
	if (X > x or X + W < x) return false;
	if (Y > y or Y + H < y) return false;
	return true;
}

double d(double x1, double y1, double x2, double y2) {
	return sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
}

bool check_2(double x, double y) {
	if (d(X, Y + H / 2, x, y) <= H / 2) return true;
	if (d(X + W, Y + H / 2, x, y) <= H / 2) return true;
	return false;
}

void solve() {	
	cin >> W >> H >> X >> Y >> p;

	while (p--) {
		double x, y; cin >> x >> y;
		if (check_1(x, y) or check_2(x, y)) ans += 1;
	}

	cout << ans << en;
}

int main(void) {
	fast;

	int t = 1; //cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}
