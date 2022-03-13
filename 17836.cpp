#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int d[4][2] = { {1,0,},{-1,0},{0,1},{0,-1} };
const int INF = (int)1e9 + 7;
int N, M, T;
int A[101][101], check_1[101][101];
bool visited[101][101];
pair<int, int> G; // gram index

void bfs() {
	visited[0][0] = true;
	check_1[0][0] = 0;
	queue<pair<int, int>> q;
	q.push({ 0,0 });
	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		int x = cur.first, y = cur.second;

		for (int i = 0; i < 4; ++i) {
			int nx = x + d[i][0], ny = y + d[i][1];
			if (nx < 0 or ny < 0 or nx >= N or ny >= M) continue;
			if (visited[nx][ny] or A[nx][ny] == 1) continue;
			visited[nx][ny] = true;
			q.push({ nx,ny });
			check_1[nx][ny] = check_1[x][y] + 1;
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
	memset(visited, false, sizeof(visited));
	memset(check_1, INF, sizeof(check_1));

	cin >> N >> M >> T;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			cin >> A[i][j];
			if (A[i][j] == 2) {
				G.first = i; G.second = j;
			}
		}
	}

	bfs();
	int to_G = check_1[G.first][G.second]+(N-1-G.first)+(M-1-G.second);
	int to_L = check_1[N - 1][M - 1];
	if (to_G > T and to_L > T) {
		cout << "Fail"; return 0;
	}
	cout << min(to_G, to_L);
}
