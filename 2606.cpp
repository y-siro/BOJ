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
const int M = 101;

int N, E; // 컴퓨터 수, 네트워크 상에서 직접 연결되어 있는 컴퓨터 쌍의 수
vector<int> v[M]; // 간선 정보 저장
bool check[M] = { false, };
int cnt = 0;

void DFS(int n) {
	check[n] = true;
	for (int i = 0; i < v[n].size(); i++) {
		int k = v[n][i];
		if (!check[k]) {
			DFS(k);
			cnt++;
		}
	}
}

int main(void) {
	cin >> N >> E;

	int s, f;
	for (int i = 0; i < E; i++) {
		cin >> s >> f;
		v[s].pb(f);
		v[f].pb(s);
	}
	DFS(1);
	cout << cnt;
	return 0;
}
