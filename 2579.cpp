#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
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

int d[301] = { false, };
int score[301] = { false, }; // 계단별 점수

int main(void) {
	fast;
	int N; cin >> N; // 계단 개수
	for (auto i = 1; i <= N; i++) {
		int val; cin >> val;
		score[i] = val;
	}

	d[1] = score[1];
	d[2] = max(score[2], score[1] + score[2]);
	d[3] = max(score[1] + score[3], score[2] + score[3]);

	for (auto i = 4; i <= N; i++) d[i] = max(score[i] + d[i - 2], score[i] + score[i - 1] + d[i - 3]);
	cout << d[N] << endl;

	return 0;
}
