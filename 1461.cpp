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
	vector<int> A, B;
	bool flag;
	for (int i = 0; i < N; ++i) {
		int num; cin >> num;
		if (num > 0) A.push_back(num);
		else B.push_back(num);
	}
	if (A.size() and !B.size()) {
		sort(A.begin(), A.end(), greater<int>());
		flag = true;
	}
	else if (!A.size() and B.size()) {
		sort(B.begin(), B.end());
		flag = false;
	}
	else if (A.size() and B.size()) {
		sort(A.begin(), A.end(), greater<int>());
		sort(B.begin(), B.end());
		if (A[0] > abs(B[0])) flag = true;
		else flag = false;
	}
	

	int ret = 0;
	if (flag) {
		for (int i = 0; i < B.size(); i += M) ret += abs(B[i] * 2);
		for (int i = 0; i < A.size(); i += M) {
			if (i == 0) ret += abs(A[i]);
			else ret += abs(A[i] * 2);
		}
	}
	else {
		for (int i = 0; i < A.size(); i += M) ret += abs(A[i] * 2);
		for (int i = 0; i < B.size(); i += M) {
			if (i == 0) ret += abs(B[i]);
			else ret += abs(B[i] * 2);
		}
	}
	cout << ret;
}
