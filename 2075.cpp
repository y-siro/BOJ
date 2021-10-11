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

int n,num;
pql q;
int main(void) {
	fast;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> num;
		q.push(num);
	}

	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> num;
			q.push(num);
		}
		for (int j = 0; j < n; ++j) q.pop();
	}
	cout << q.top();
}
