#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
using ll = long long;

// boj 17293 맥주 99병 - 구현

int N,M;

int main(void) {
	fast;
	cin >> N; M = N;
	for (int i = N; i >= 0; --i) {
		if (i > 1) {
			cout << i << " " << "bottles of beer on the wall, " << i << " " << "bottles of beer." << endl;
			if(i-1!=1) cout << "Take one down and pass it around, " << i - 1 << " " << "bottles of beer on the wall." << endl << endl;
			else cout << "Take one down and pass it around, " << i - 1 << " " << "bottle of beer on the wall." << endl << endl;
		}
		else if (i == 1) {
			cout << "1 bottle of beer on the wall, 1 bottle of beer." << endl;;
			cout << "Take one down and pass it around, no more bottles of beer on the wall." << endl << endl;
		}
		else if (i == 0) {
			cout << "No more bottles of beer on the wall, no more bottles of beer." << endl;
			if(M!=1) cout << "Go to the store and buy some more, " << M << " bottles of beer on the wall.";
			else cout << "Go to the store and buy some more, " << M << " bottle of beer on the wall.";
		}
	}
}
