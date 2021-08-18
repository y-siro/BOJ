#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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

int main(void) {
	fast;
	int N; cin >> N;

	vi v;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		int val; cin >> val;
		v.pb(val);
	}
	for (int i = N - 2; i >= 0; i--) { // 높은 레벨부터 내림차순으로 경험치량 조정
		while (!(v[i+1] > v[i])) {
			v[i]--;
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}
