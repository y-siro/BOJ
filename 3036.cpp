#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define pq priority_queue
#define pii pair<int,int>
#define pll pair<ll,ll>

int N;

int gcd(int x, int y) {
	if (y == 0) return x;
	return gcd(y, x % y);
}

int main(void) {
	fast;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; ++i) cin >> A[i];
	int res = A[0];

	for (int i = 1; i < N; ++i) {
		int B = gcd(res, A[i]);
		cout << res / B << "/" << A[i] / B << "\n";
	}
}
