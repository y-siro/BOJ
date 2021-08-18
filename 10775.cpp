#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <memory.h>
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
const int MAX = 100001;
int d[MAX];

int check(int n) {
	if (d[n] < 0) {
		return n;
	}
	return d[n] = check(d[n]);
}


int find(int n) {
	int s = check(n);
	if (!s) {
		return false;
	}
	 
	d[s] = check(s - 1);
	return true;
}

int main(void) {
	fast;
	int G, P;
	cin >> G >> P;
	for (int i = 0; i < MAX; i++) {
		d[i] = -1;
	}

	int cnt = 0, val;
	while (P--) {
		cin >> val;
		if (find(val)) {
			cnt++;
		}
		else {
			break;
		}
	}

	cout << cnt;
	return 0;
}
