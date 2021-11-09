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
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
#define F first
#define S second
#define endl "\n"
typedef long long int ll;

// 2470 두 용액 - 정렬, 이분 탐색, 두 포인터

ll N,x,y,s,e,sum=0,arr[111111];

int main(void) {
	fast;
	cin >> N;
	for (int i = 0; i < N; ++i) cin >> arr[i];
	sort(arr, arr + N);
	ll s = 0, e = N - 1, x = arr[s], y = arr[e], m = x + y;
	while (s < e) {
		sum = arr[s] + arr[e];
		if (abs(m) > abs(sum)) {
			m = sum;
			x = arr[s]; y = arr[e];
		}		
		if (sum <= 0) s++;
		else e--;
	}
	cout << x << " " << y;
}
