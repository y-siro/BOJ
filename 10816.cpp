#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
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
#define pi pair<int,int>
#define pr pair<ll,ll>
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
#define F first
#define S second
#define endl "\n"
typedef long long int ll;
int N;
vi v;
int main(void) {
	fast;
	cin >> N;

	int val;
	for (int i = 0; i < N; i++) {
		cin >> val;
		v.pb(val);
	}

	sort(all(v));
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> val;
		cout << upper_bound(all(v), val) - lower_bound(all(v), val) << " ";
	}
}

