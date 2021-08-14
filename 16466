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
	pql q;
	int val;
	while (N--) {
		cin >> val;
		q.push(val);
		sold[val] = true;
	}

	int cnt = 1;
	while (true) {
		if (sold[cnt] == false) {
			cout << cnt << endl;
			break;
		}
		else cnt++;
	}
}
