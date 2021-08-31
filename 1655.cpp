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

int N, mid, val;
pq q; pql qq;
int main(void) {
	scanf("%d", &N);
	for (int i = 0; i < N; ++i) {
		scanf("%d", &val);
		if (i == 0) {
			mid = val;
			printf("%d\n", mid);
		}
		else if (i != 0) {
			if (val > mid) {
				qq.push(val);
				if (q.size() == qq.size() - 2) {
					q.push(mid);
					mid = qq.top();
					qq.pop();
				}
			}
			else {
				q.push(val);
				if (q.size() > qq.size()) {
					qq.push(mid);
					mid = q.top();
					q.pop();
				}
			}
			printf("%d\n", mid);
		}		
	}
	return 0;
}
