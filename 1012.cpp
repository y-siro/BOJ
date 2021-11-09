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
typedef long long int ll;

// 1012 유기농 배추 - BFS

int T, M, N, K, x, y, cnt = 0;
int m[55][55];
bool visited[55][55];
int d[4][2] = { {0,1},{0,-1},{-1,0},{1,0} };
queue<pii> q;

void bfs(int x, int y) {
    q.push(mp(y, x));
    while (!q.empty()) {
        int x = q.front().first; int y = q.front().second;
        visited[x][y] = true;
        q.pop();
        for (int i = 0; i < 4; ++i) {
            int nx = x + d[i][0];
            int ny = y + d[i][1];
            if (nx < 0 or nx >= N or ny < 0 or ny >= M or visited[nx][ny] or !m[nx][ny]) continue;
            q.push(mp(nx, ny));
            visited[nx][ny] = true;
        }
    }
}

int main(void) {
    fast;
    cin >> T;
    while (T--) {
        cin >> M >> N >> K;
        for (int i = 0; i < K; ++i) {
            cin >> y >> x;
            m[x][y] = 1;
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                if (m[i][j] and !visited[i][j]) {
                    cnt++;
                    bfs(j, i);
                }
            }
        }
        cout << cnt << "\n";
        cnt = 0;
        memset(visited, false, sizeof(visited));
        memset(m, 0, sizeof(m));
    }
}
