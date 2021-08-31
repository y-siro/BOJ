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

const int M = 100001;
int N,x,y, arr[M];
bool visited[M];
vi v[M];
void dfs(int num) {
	visited[num] = true;
	for (int i = 0; i < v[num].size(); ++i) {
		int next = v[num][i];
		if (!visited[next]) {
			arr[next] = num;
			dfs(next);
		}
	}
}
int main(void) {
	cin >> N;
	for (int i = 0; i < N-1; ++i) {
		cin >> x >> y;
		v[x].pb(y);
		v[y].pb(x);
	}
	dfs(1);
	for (int i = 2; i <= N; ++i) {
		cout << arr[i] << endl;
	}
}
		
