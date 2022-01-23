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

int N, M;

int main(void) {
	fast;
	cin >> N >> M;
	vector<int> A(M), B(M);
	for (int i = 0; i < M; ++i) cin >> A[i] >> B[i];
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	int ret = 0;
	if (A[0] < B[0] * 6) {
		int div = N / 6;
		ret += div * A[0];

		if (A[0] > (N % 6) * B[0]) {
			ret += (N % 6) * B[0];
		}
		else ret += A[0];
	}
	else ret += N * B[0];

	cout << ret;
}
