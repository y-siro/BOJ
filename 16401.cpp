#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>

int main(void) {
	fast;
	int M, N; cin >> M >> N;
	vector<ll> A(N);
	ll mm = 0;
	for (int i = 0; i < N; ++i) {
		cin >> A[i];
		mm = max(mm, A[i]);
	}
	sort(A.begin(), A.end());

	ll l = 1, r = mm, ans=0;
	while (l <= r) {
		ll mid = (l + r) / 2;
		ll temp = 0;
		for (int i = 0; i < A.size(); ++i) {
			temp += A[i] / mid;
		}
		if (temp >= M) {
			l = mid + 1;
			ans = mid;
		}
		else if (temp < M) {
			r = mid - 1;
		}
	}
	cout << ans;
}
