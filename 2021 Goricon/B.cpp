#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

// Goricon B

int sy, sm, sd, ey, em, ed; //input
int year_break = 0, month_break = 0, day_cnt = 0; // output

int main(void) {
	fast;
	cin >> sy >> sm >> sd >> ey >> em >> ed;
	year_break += (ey - sy) * 15;
	int cnt = ey - sy;
	if (sm > em) {
		cnt--; year_break -= 15;
	}
	else if (sm == em) {
		if (sd > ed) {
			cnt--; year_break -= 15;
		}
	}
	while (cnt--) {
		year_break += (cnt) / 2;
	}
	cout << year_break << " ";
	month_break += (ey - sy) * 12;
	month_break += em - sm;
	if (sd > ed) month_break--;
	if (month_break > 36) cout << 36 << "\n";
	else cout << month_break << "\n";

	day_cnt += (ey - sy) * 360;
	if (sm > em) {
		day_cnt -= 360; day_cnt += (em - sm + 12) * 30;
	}
	else day_cnt += (em - sm) * 30;

	if (sd > ed) {
		day_cnt -= 30; day_cnt += (ed - sd + 30);
	}
	else day_cnt += ed - sd;
	cout << day_cnt << "days";
}
