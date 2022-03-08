#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long 
#define pii pair<int, int>

int N;
ll A[3][1516];

int main(void) {
	fast;
	memset(A, 0, sizeof(A));

	cin >> N;
	A[0][1] = 0; A[1][1] = 0; A[2][1] = 1;
	for (int i = 2; i <= N; ++i) {
		A[0][i] = (A[1][i - 1] + A[2][i - 1]) % 1000000007;
		A[1][i] = (A[0][i - 1] + A[2][i - 1]) % 1000000007;
		A[2][i] = (A[0][i - 1] + A[1][i - 1]) % 1000000007;
	}
	cout << A[0][N];
}
