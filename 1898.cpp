#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int N; cin >> N;
	vector<int> A(N+1), visited(N+1);
	for (int i = 1; i <= N; ++i) cin >> A[i];
	visited[0] = 9999;
	for (int i = 1; i <= N; ++i) {
		if (visited[A[i]]) {
			A[i] = visited[A[i]];
			continue;
		}
		if (!visited[A[i] - 1]) {
			visited[A[i] - 1] = A[i];
			visited[A[i]] = A[i];
			A[i]--;
		}
		else {
			visited[A[i]] = A[i];
		}
	}
	for (int i = 1; i <= N; ++i) cout << A[i] << '\n';
}
