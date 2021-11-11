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

// 2644 촌수계산 - BFS

int N, fx, fy, M,cnt=0;
vi v[111];
bool visited[111];
int d[111];
queue<int> q;

void bfs(int x) {
	visited[x] = true;
	q.push(x);
	while (!q.empty()) {
		x = q.front();
		q.pop();
		for (int i = 0; i < v[x].size(); ++i) {
			if (visited[v[x][i]]) continue;
			q.push(v[x][i]);
			visited[v[x][i]] = true;
			d[v[x][i]] = d[x] + 1;
		}
	}
}



int main(void) {
	fast;
	cin >> N >> fx >> fy >> M;
	while (M--) {
		int s, e; cin >> s >> e;
		v[s].pb(e);
		v[e].pb(s);
	}
	bfs(fx);
	if (!d[fy]) cout << -1;
	else cout << d[fy];
}
