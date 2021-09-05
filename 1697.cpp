#include <bits/stdc++.h>
using namespace std;

const int M = 100001;
int n, k, d[M];
queue<int> q;
int bfs() {
	q.push(n);
	d[n] = 1;
	while (!q.empty()) {
		int p = q.front();
		q.pop();
		if (p == k) return (d[p] - 1);
		if (p - 1 >= 0 && d[p - 1] == 0) {
			q.push(p - 1);
			d[p - 1] = d[p] + 1;
		}
		if (p + 1 <= 100000 && d[p + 1] == 0) {
			q.push(p + 1);
			d[p + 1] = d[p] + 1;
		}
		if (p * 2 <= 100000 && d[2 * p] == 0) {
			q.push(2 * p);
			d[p * 2] = d[p] + 1;
		}
	}
}

int main(void) {
	cin >> n >> k;
	cout << bfs();
	return 0;
}
