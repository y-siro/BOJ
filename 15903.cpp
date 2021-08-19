#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <utility>
#include <set>
#include <map>
#include <memory.h>
#include <limits.h>
#include <math.h>
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

int main(void) {
	fast;
	int n, m;
	cin >> n >> m;

	priority_queue<ll, vector<ll>, greater<ll>> q;
	for (int i = 0; i < n; i++) {
		ll val;
		cin >> val;
		q.push(val);
	}

	
	for (int i = 0; i < m; i++) {
		ll idx = 0;
		ll x = q.top();
		q.pop();


		ll y = q.top();
		q.pop();
		idx = x + y;
		q.push(idx);
		q.push(idx);
	}

	ll sum = 0;
	while(!q.empty()) {
		sum += q.top();
		q.pop();
	}
	cout << sum;
	return 0;
}
