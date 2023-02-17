#include <bits/stdc++.h>
using namespace std;

int main(void) {
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	double a1 = abs(y2 - y1) / abs(x2 - x1);
	double a2 = abs(y3 - y2) / abs(x3 - x2);
	double a3 = abs(y3 - y1) / abs(x3 - x1);

	if (a1 == a2 && a2==a3) {
		cout << -1 << '\n';
		return 0;
	}

	double len1 = 2 * sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2)) + 2 * sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	double len2 = 2 * sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2)) + 2 * sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	double len3 = 2 * sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2)) + 2 * sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));

	cout << fixed;
	cout.precision(16);
	cout << max(len1, max(len2, len3)) - min(len1, min(len2, len3)) << '\n';
	return 0;
}
