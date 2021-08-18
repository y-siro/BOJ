#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <memory.h>
#include <limits.h>
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
	string str;
	cin >> str;

	stack<int> s;
	int cnt = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') {
			if (str[i + 1] == ')') {
				cnt += s.size();
			}
			else {
				s.push(i);
			}
		}
		else {
			if (str[i - 1] == '(') {
				continue;
			}
			else {
				s.pop();
				cnt++;
			}
		}

	}

	cout << cnt;
	return 0;
}
