#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
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
bool sold[1000001] = { false, };
int main(void) {
	fast;
	int N; cin >> N;
	queue<int> q;
	vi v;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	int cnt = 1,val;
	while (!q.empty()) {
		if (cnt % 2 == 1) {
			val = q.front();
			v.push_back(val);
			q.pop();
		}
		else {
			val = q.front();
			q.pop();
			q.push(val);
		}
		cnt++;
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	return 0;

}
