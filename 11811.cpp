#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long 

int A[1010];
int main(void) {
	fast;

	int N; cin >> N;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			int B; cin >> B;
			A[i] = A[i] | B;
		}
	}

	for (int i = 0; i < N; ++i) cout << A[i] << ' ';
}
