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
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
#define F first
#define S second
#define endl "\n"
typedef long long ll;

// 2621 카드게임 - 구현

int max_col = 0, max_num = 0;
int col[5], arr[10]; // color - 1:red, 2:blue, 3:yellow, 4:green'
pair<int,char> p[5];


bool is_lert() {
	for (int i = 0; i < 4; ++i) {
		if (p[i].first != p[i + 1].first - 1) return false;
	}
	return true;
}

int main(void) {
	fast;	
	memset(col, 0, sizeof(col));
	memset(arr, 0, sizeof(arr));
	for (int i = 0; i < 5; ++i) {
		char color; int num;
		cin >> color >> num;
		p[i].first = num; p[i].second = color;
		if (color == 'R') {
			col[1]++; max_col = max(max_col, col[1]);
		}
		if (color == 'B') {
			col[2]++; max_col = max(max_col, col[2]);
		}
		if (color == 'Y') {
			col[3]++; max_col = max(max_col, col[3]);
		}
		if (color == 'G') {
			col[4]++; max_col = max(max_col, col[4]);
		}
		arr[num]++; max_num = max(max_num, arr[num]);
	}
	sort(p,p+5); // 나열된 수들인지 확인하려고 정렬
	if (max_col == 5 and is_lert()) {
		cout << p[4].first + 900; return 0;
	}
	if (max_num == 4) {
		cout << p[2].first + 800; return 0;
	}
	if (max_num == 3) {
		for (int i = 1; i <= 9; ++i) {
			if (arr[i] == 2) {
				cout << p[2].first * 10 + i + 700; return 0;
			}
		}
	}
	if (max_col == 5) {
		cout << p[4].first + 600; return 0;
	}
	if (is_lert()) {
		cout << p[4].first + 500; return 0;
	}
	if (max_num == 3) {
		cout << p[2].first + 400; return 0;
	}
	if (max_num == 2) {
		int cnt = 0, idx;
		vi ch;
		for (int i = 1; i <= 9; ++i) {
			if (arr[i] == 2) {
				cnt++; ch.pb(i);
			}
		}
		sort(ch.begin(), ch.end(), greater<int>());
		if (cnt == 2) {
			cout << ch[0] * 10 + ch[1] + 300; return 0;
		}
		if (cnt == 1) {
			cout << ch[0] + 200; return 0;
		}
	}
	int idx;
	for (int i = 1; i <= 9; ++i) {
		if (arr[i]) idx = i;
	}
	cout << idx + 100;
}
