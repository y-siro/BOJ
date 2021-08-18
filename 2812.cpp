#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <memory.h>
#include <limits.h>
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

int main(void) {
	fast;
	int N, K;
	cin >> N >> K;
	int idx = N - K;
	vector<char> v;

	char w; cin >> w;
	v.pb(w);

	for (int i = 1; i < N; i++) {
		cin >> w;
		while (K > 0 && !v.empty() && w > v.back()) {
			v.pop_back();			
			K--;
		}
		v.pb(w);
	}

	for (int i = 0; i < idx; i++) {
		cout << v[i];
	}

	return 0;
}
