#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
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

int main(void) {
	fast;
	int T; cin >> T;

	int charge;
	int a, b, c, d;
	while (T--) {
		cin >> charge;
		int a=0, b=0, c=0, d=0;
		while (charge >= 25) {
			a++;
			charge -= 25;
		}
		while (charge >= 10) {
			b++;
			charge -= 10;
		}
		while (charge >= 5) {
			c++;
			charge -= 5;
		}
		while (charge >= 1) {
			d++;
			charge -= 1;
		}

		cout << a << " " << b << " " << c << " " << d << endl;
	}
	return 0;
}
