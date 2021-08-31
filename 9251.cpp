#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
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

int d[1001][1001];
string s, ss;
int sl, ssl;
int main(void) {
	fast;

	cin >> s >> ss;
	sl = s.length();
	ssl = ss.length();
	for (int i = 1; i <= ssl; i++) {
		for (int j = 1; j <= sl; j++) {
			if (ss[i - 1] == s[j - 1]) d[i][j] = d[i - 1][j - 1] + 1;
			else d[i][j] = max(d[i - 1][j], d[i][j - 1]);
		}
	}
	cout << d[ssl][sl];
	return 0;
}
