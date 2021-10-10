#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define pb push_back
#define mp make_pair
#define vc vector
#define vi vector<int>
#define vl vector<ll>
#define pq priority_queue<int,vector<int>,less<int>>
#define pql priority_queue<int,vector<int>,greater<int>>
#define pi pair<int,int>
#define pr pair<ll,ll>
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
#define F first
#define S second
#define endl "\n"
typedef long long int ll;

const int M = 101;
int N, K; // 물품의 수, 버틸 수 있는 무게
int w[M], v[M]; // 각 물건의 무게, 가치
int d[M][100001];


int main(void) {
	fast;

	cin >> N >> K;
	for (int i = 1; i <= N; ++i) cin >> w[i] >> v[i];
	for (int i = 1; i <= N; ++i) {
		for (int j = 1; j <= K; ++j) {
			if (j - w[i] >= 0) d[i][j] = max(d[i - 1][j], d[i - 1][j - w[i]] + v[i]);
			else d[i][j] = d[i - 1][j];
		}
	}
	cout << d[N][K];

	return 0;
}
