#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
using ll = long long;

// 5014 스타트링크

int F, S, G, U, D; // F:총 층수, S:현재 위치, G: 스타트링크 위치, U: 위로가기 버튼 누를시, D: 내려가기 버튼 누를 시
bool visited[1010101];
vi v;
queue<pii> q;

void bfs(int cur, int cnt) {

	visited[cur] = true;
	q.push({ cur,cnt });

	while (!q.empty()) {
		int cur = q.front().first, cnt = q.front().second; q.pop();
		if (cur == G) {
			cout << cnt; return;
		}
		for (int i = 0; i < 2; ++i) {
			int nx = cur + v[i];
			if (nx <= F and nx >= 1 and !visited[nx]) {
				visited[nx] = true;
				q.push({ nx,cnt + 1 });
			}
		}
	}
	cout << "use the stairs";
}

int main(void) {
	fast;
	cin >> F >> S >> G >> U >> D;
	v.pb(U); v.pb(D * (-1));
	bfs(S, 0);
}
