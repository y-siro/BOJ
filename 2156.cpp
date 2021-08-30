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

const int N = 10001;
int n;
int main(void) {fast;
	cin >> n;
	vi v(N);
	vi vv(N);
	for (int i = 1; i <= n; ++i) cin >> v[i];
	vv[1] = v[1];
	vv[2] = v[1] + v[2];
	for (int i = 3; i <= n; ++i) {
		vv[i] = v[i] + max(vv[i - 2], v[i - 1] + vv[i - 3]);
		vv[i] = max(vv[i - 1], vv[i]);
	}
	cout << vv[n];
	return 0;
}
