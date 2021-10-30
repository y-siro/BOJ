#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// boj 15916 가희는 그래플러야!! - 수학, 기하학, 선분 교차 판정

double n,y,k,a;
vector<pair<double, double>> v;
bool state;

int main(void) {
	fast;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> y; v.push_back(make_pair(i + 1, y));
	}
	cin >> k;
	a = v[0].second / v[0].first;
	if (k == a) {
		cout << "T"; return 0;
	}
	else if (k < a) state = true;	
	else state = false;
	for (int i = 1; i < n; ++i) {
		a = v[i].second / v[i].first;
		if (k == a) {
			cout << "T"; return 0;
		}
		if (k>a and state) {
			cout << "T"; return 0;
		}
		if (k < a and !state) {
			cout << "T"; return 0;
		}
	}
	cout << "F";
}
