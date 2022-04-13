#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long

const int d[4][2] = { {1,0},{-1,0},{0,-1},{0,1} };
int N, M, ans = 0;
int par[7], mm[10][10];
bool visited[10][10];
vector<pair<int, pair<int, int>>> A;

void init(int num) {
	for (int i = 1; i <= num; ++i) par[i] = i;
}

int find(int x) {
	if (x==par[x]) return x;
	return par[x] = find(par[x]);
}

void Union(int x, int y) {
	x = find(x); y = find(y);
	par[y] = x;
}

void mset(int x, int y, int lv) {
	queue<pair<int, int>> q;
	q.push({ x,y });
	visited[x][y] = true;
	mm[x][y] = lv;

	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		for (int i = 0; i < 4; ++i) {
			int nx = cur.first + d[i][0], ny = cur.second + d[i][1];
			if (nx < 0 or ny < 0 or nx >= N or ny >= M) continue;
			if (visited[nx][ny] or !mm[nx][ny]) continue;
			mm[nx][ny] = lv;
			visited[nx][ny] = true;
			q.push({ nx,ny });
		}
	}
}

void matching(int x, int y, int lv) {
	for (int i = 0; i < 4; ++i) {
		int cx = x, cy = y;
		int cnt = 0;
		while (true) {
			cx += d[i][0]; cy += d[i][1]; cnt++;
			if (cx < 0 or cy < 0 or cx >= N or cy >= M) break;
			if (cnt > 10) break;
			if (mm[cx][cy] != 0) {
				if (mm[cx][cy] == lv or cnt < 3) break;
				else {
					A.push_back({ cnt - 1,{lv,mm[cx][cy]} });
					break;
				}
			}
		}
	}
}

int main(void) {
	fast;

	cin >> N >> M;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			cin >> mm[i][j];
		}
	}
	int lv = 1;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			if (mm[i][j] == 1 and !visited[i][j]) {
				mset(i, j, lv);	lv++;
			}
		}
	}
	init(lv - 1);
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			if (!mm[i][j]) continue;
			matching(i, j, mm[i][j]);
		}
	}
	sort(A.begin(), A.end());

	int ac = 0;
	for (int i = 0; i < A.size(); ++i) {
		int x = A[i].second.first, y = A[i].second.second, w = A[i].first;
		if (find(x) != find(y)) {
			Union(x, y);
			ans += w;
			ac++;
		}
	}
	if (ac != lv - 2 or ans == 0) cout << -1;
	else cout << ans;	
}
