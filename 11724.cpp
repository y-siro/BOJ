const int M = 1001;
int n, m, s, e, cnt = 0;
vi v[M];
bool visited[M] = { false, };

void dfs(int num) {
	visited[num] = true;
	for (int i = 0; i < v[num].size(); ++i) {
		int next = v[num][i];
		if (!visited[next]) dfs(next);
	}
}

void bfs(int num) {
	queue<int> q;

	visited[num] = true;
	q.push(num);
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		for (int i = 0; i < v[cur].size(); ++i) {
			int next = v[cur][i];
			if (!visited[next]) {
				visited[next] = true;
				q.push(next);
			}
		}
	}
}
