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
	int N, M; cin >> N >> M;
	if (N == 1) cout << 1;
	if (N == 2) cout <<  min(4, (M - 1) / 2 + 1);
	if (N >= 3) {
		if (M == 5 || M == 6) {
			cout << 4;
		}
		else if (M < 5) {
			cout << M;
		}

		else if (M > 6) {
			cout << M - 2;
		}
	}
	return 0;
}
