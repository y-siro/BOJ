#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// boj 17296 But can you do it in 0.5x A presses? - 구현, 시뮬레이션

int N,cnt=0; 
double num;
vector<pair<int,bool>> v;

int main(void) {
	fast;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> num;
		if (num > floor(num)) v.push_back(make_pair((int)num, true));
		else v.push_back(make_pair(num, false));
	}
	cnt = v[0].first;
	if (v[0].second) cnt++;
	for (int i = 1; i < N; ++i) {
		if (!cnt and v[i].second) cnt++;
		cnt += v[i].first;
	}
	cout << cnt;
}
