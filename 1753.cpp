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
const int M = 20001;
int c[M];
int V, E, start;
vector<pair<int, int>> v[M];
priority_queue<pair<int, int>> q;
void Init(int V) {
	for (int i = 0; i <= V; i++) {
		c[i] = INT_MAX;
	}
}

void dijkstra(int s) {
	c[s] = 0;
	q.push(mp(0, s));
	while (!q.empty()) {
		int current = q.top().S;
		int Distance = -q.top().F;
		q.pop();
		if (c[current] < Distance) {
			continue;
		}
		else {
			for (int i = 0; i < v[current].size(); i++) {
				int next = v[current][i].F;
				int nextDistance = v[current][i].S;

				if (nextDistance + Distance < c[next]) {
					c[next] = Distance + nextDistance;
					q.push(mp((-1) * c[next], next));
				}
			}
		}
	}
}


void print() {
	for (int i = 1; i <= V; i++) {
		if (c[i] == INT_MAX) {
			cout << "INF" << endl;
		}
		else {
			cout << c[i] << endl;
		}
	}
}

int main(void) {
	fast;
	cin >> V >> E >> start;
	Init(V);

	int s, f, w; //start, finish, weights
	while (E--) {
		cin >> s >> f >> w;
		v[s].pb(mp(f, w));
	}
	dijkstra(start);
	print();
}
		
