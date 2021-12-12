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
#define F first
#define S second

// 20551 Sort 마스터 배지훈의 후계자

// pair를 사용한 정렬 후 이분 탐색

int N, M;
vc<pii> v;

bool cmp(pii p1, pii p2) {
	return p1.F < p2.F;
}

int main(void) {
	fast;
	cin >> N >> M;
	v.resize(N);
	for (int i = 0; i < N; ++i) cin >> v[i].F;

	sort(v.begin(), v.end(), cmp);
	v[0].S = 0;
	for (int i = 1; i < N; ++i) {
		if (v[i].F != v[i - 1].F) v[i].S = i;
		else v[i].S = v[i - 1].second;
	}

	while (M--) {
		int low = 0, high = N - 1;
		int D; cin >> D;
		while (low <= high) {
			int mid = (low + high) / 2;
			if (v[mid].F == D) {
				cout << v[mid].S << "\n"; break;
			}
			else if (v[mid].F < D) low = mid + 1;
			else high = mid - 1;
			if (low > high) cout << -1 << "\n";
		}
	}
}

// lower_bound 를 사용한 탐색

int N, M;
vi v;

int main(void) {
	fast;
	cin >> N >> M;
	v.resize(N);
	for (int i = 0; i < N; ++i) cin >> v[i];
	sort(v.begin(), v.end());
	for (int i = 0; i < M; ++i) {
		int D; cin >> D;
		int ans = lower_bound(v.begin(), v.end(), D) - v.begin();
		if (ans != N and v[ans] == D) cout << ans << "\n";
		else cout << -1 << "\n";
	}
}
