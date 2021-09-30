#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

int N, M;
int arr[8];
void dfs(int num, int k) {
	if (k>=M) {
		for (int i = 0; i < M; ++i) cout << arr[i] << " ";
		cout << "\n";
	}
	else {
		for (int i = 1; i <= N; ++i) {
			arr[k] = i;			
			dfs(i, k+1);
		}
	}
}

int main(void) {
	fast;
	cin >> N >> M;
	dfs(1, 0);
}
